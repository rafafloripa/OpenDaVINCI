/**
 * lanefollower - Sample application for following lane markings.
 * Copyright (C) 2012 - 2015 Christian Berger
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <iostream>

#include <opencv/cv.h>
#include <opencv/highgui.h>

#include "opendavinci/odcore/base/KeyValueConfiguration.h"
#include "opendavinci/odcore/base/Lock.h"
#include "opendavinci/odcore/data/Container.h"
#include "opendavinci/odcore/io/conference/ContainerConference.h"
#include "opendavinci/odcore/wrapper/SharedMemoryFactory.h"

#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"

#include "LaneFollower.h"

namespace automotive {
    namespace miniature {

        using namespace std;
        using namespace odcore::base;
        using namespace odcore::data;
        using namespace odcore::data::image;
        using namespace automotive;
        using namespace automotive::miniature;

        bool INTERSECT = false;
        bool firstTime;

        LaneFollower::LaneFollower(const int32_t &argc, char **argv) : TimeTriggeredConferenceClientModule(argc, argv, "lanefollower"),
            m_hasAttachedToSharedImageMemory(false),
            m_sharedImageMemory(),
            m_image(NULL),
            m_debug(false),
            m_sim(false),
            m_font(),
            m_previousTime(),
            m_eSum(0),
            m_eOld(0),
            max_eSum(0),
            min_eSum(0),
            max_e(0),
            min_e(0),
            previousSteering(0),
            m_vehicleControl() {}

        LaneFollower::~LaneFollower() {}

        void LaneFollower::setUp() {
	        // This method will be call automatically _before_ running body().
	        if (m_debug) {
		        // Create an OpenCV-window.
		        cvNamedWindow("WindowShowImage", CV_WINDOW_AUTOSIZE);
		        cvMoveWindow("WindowShowImage", 300, 100);
	        }
        }

        void LaneFollower::tearDown() {
	        // This method will be call automatically _after_ return from body().
	        if (m_image != NULL) {
		        cvReleaseImage(&m_image);
	        }

	        if (m_debug) {
		        cvDestroyWindow("WindowShowImage");
	        }
        }

        bool LaneFollower::readSharedImage(Container &c) {
	        bool retVal = false;

	        if (c.getDataType() == odcore::data::image::SharedImage::ID()) {
		        SharedImage si = c.getData<SharedImage> ();

		        // Check if we have already attached to the shared memory.
		        if (!m_hasAttachedToSharedImageMemory) {
			        m_sharedImageMemory
					        = odcore::wrapper::SharedMemoryFactory::attachToSharedMemory(
							        si.getName());
		        }

		        // Check if we could successfully attach to the shared memory.
		        if (m_sharedImageMemory->isValid()) {
			        // Lock the memory region to gain exclusive access using a scoped lock.
                    Lock l(m_sharedImageMemory);
			        const uint32_t numberOfChannels = 3;
			        // For example, simply show the image.
			        if (m_image == NULL) {
				        m_image = cvCreateImage(cvSize(si.getWidth(), si.getHeight()), IPL_DEPTH_8U, numberOfChannels);
			        }

			        // Copying the image data is very expensive...
			        if (m_image != NULL) {
				        memcpy(m_image->imageData,
						       m_sharedImageMemory->getSharedMemory(),
						       si.getWidth() * si.getHeight() * numberOfChannels);
			        }

                    if (m_sim){
                        // Mirror the image.
                        cvFlip(m_image, 0, -1);
                    }

			        retVal = true;
		        }
	        }
	        return retVal;
        }

        void LaneFollower::birdEyeTransform() {

            cv::Point2f inputQuad[4];
            cv::Point2f outputQuad[4];

            cv::Mat input, output;
            cv::Mat mat_img(m_image);

            input = m_image;

            cv::Mat lambda( 4, 2, CV_32FC1 );
            lambda = cv::Mat::zeros(input.rows, input.cols, input.type());

            inputQuad[0] = cv::Point2f(213, 217);
            inputQuad[1] = cv::Point2f(381, 217);
            inputQuad[2] = cv::Point2f(574, 435);
            inputQuad[3] = cv::Point2f(54 , 435);

            if (m_sim) {
                inputQuad[0] = cv::Point2f(144, 332);
                inputQuad[1] = cv::Point2f(494, 332);
                inputQuad[2] = cv::Point2f(640, 480);
                inputQuad[3] = cv::Point2f(0  , 480);                         
            }

            int maxWidth  = m_image -> width;
            int maxHeight = m_image -> height;

            //int maxWidth  = inputQuad[2].x - inputQuad[3].x;
            //int maxHeight = inputQuad[2].y - inputQuad[1].y;

            outputQuad[0] = cv::Point2f(0, 0);
            outputQuad[1] = cv::Point2f(maxWidth - 1, 0);
            outputQuad[2] = cv::Point2f(maxWidth - 1, maxHeight - 1);
            outputQuad[3] = cv::Point2f(0, maxHeight - 1); 

            lambda = cv::getPerspectiveTransform(inputQuad, outputQuad);
            cv::warpPerspective(input, output, lambda, output.size());

            IplImage result = output;
            std::memcpy(m_image->imageData, result.imageData, result.imageSize);

        }

        /*
        Copied from Alex
        */
        void LaneFollower::DetectLane() {

 			cv::Mat mat_img(m_image);
    		cv::Mat dst, cdst;
    		cv::Canny(mat_img, dst, 50, 200, 3);
    		cv::cvtColor(dst, cdst, CV_GRAY2BGR);
		    IplImage result = cdst;

    		std::memcpy(m_image->imageData, result.imageData, result.imageSize);
		}

        void LaneFollower::processImage() {
                    static bool useRightLaneMarking = true;
                    double e = 0;

                    const int32_t CONTROL_SCANLINE = 472; // calibrated length to right: 280px
                    int32_t distance = 160;

                    if (m_sim){
                        distance = 310;
                    }
                    
                    //birdEyeTransform();
                    DetectLane();
                    

                    TimeStamp beforeImageProcessing;
                    for(int32_t y = m_image->height - 8; y > m_image->height * .6; y -= 10) {
                        // Search from middle to the left:
                        CvScalar pixelLeft;
                        CvPoint left;
                        left.y = y;
                        left.x = -1;
                        for(int x = m_image->width/2; x > 0; x--) {
                            pixelLeft = cvGet2D(m_image, y, x);
                            if (pixelLeft.val[0] >= 200) {
                                left.x = x;
                                break;
                            }
                        }

                        // Search from middle to the right:
                        CvScalar pixelRight;
                        CvPoint right;
                        right.y = y;
                        right.x = -1;
                        for(int x = m_image->width/2; x < m_image->width; x++) {
                            pixelRight = cvGet2D(m_image, y, x);
                            if (pixelRight.val[0] >= 200) {
                                right.x = x;
                                break;
                            }
                        }

                        //Added for intersect
                        CvScalar pixelUp;
                        CvPoint up;
                        up.y = -1;
                        up.x = 320; //w/2=320, h/2=240
                        for (int ypoint = (m_image->height/2) + 100; ypoint > 100; ypoint--) {
                            pixelUp = cvGet2D(m_image, ypoint, (m_image->width/2));

                            if (pixelUp.val[0] >= 200 && pixelRight.val[0] >= 200 && pixelLeft.val[0] >= 200) {
                                up.y = ypoint;

                                int value = m_image->height/2 - up.y;
                                double desiredSteering = m_vehicleControl.getSteeringWheelAngle();
                                double turnR = -0.37, turnL = -0.2;

                                cout << "\n" << "FIRST IF! " << desiredSteering << ", " << value << ", " << right.x << ", " << left.x <<"\n";

                                /*
                                Here we have been trying to generalize the values for 
                                desiredSteering left/right and val (distance up) to get a
                                hit on an intersection, but not in any other case.
                                Keep playing around with these values.
                                */

                                if (value > -20 && value < 5 && right.x > 350 && 
                                        right.x < 470 && left.x > 90 && left.x < 270 &&
                                        desiredSteering < turnR && desiredSteering > turnL) {
                                    //int count = 0;

                                    cout << "\n" << "INTERSECT" << "\n";

                                    INTERSECT = true;
                                    firstTime = true;

                                    //m_vehicleControl.setSpeed(0);
                                    //Container c2(m_vehicleControl);
                                    //getConference().send(c2);

                                    //sleep(3);

                                }

                                break;
                            }
                        }

                        if (m_debug) {
                            if (left.x > 0) {
                                CvScalar green = CV_RGB(0, 255, 0);
                                cvLine(m_image, cvPoint(m_image->width/2, y), left, green, 1, 8);

                                stringstream sstr;
                                sstr << (m_image->width/2 - left.x);
                                cvPutText(m_image, sstr.str().c_str(), cvPoint(m_image->width/2 - 100, y - 2), &m_font, green);
                            }
                            if (right.x > 0) {
                                CvScalar red = CV_RGB(255, 0, 0);
                                cvLine(m_image, cvPoint(m_image->width/2, y), right, red, 1, 8);

                                stringstream sstr;
                                sstr << (right.x - m_image->width/2);
                                cvPutText(m_image, sstr.str().c_str(), cvPoint(m_image->width/2 + 100, y - 2), &m_font, red);
                            }
                        }

                        if (y == CONTROL_SCANLINE) {
                            // Calculate the deviation error.
                            if (right.x > 0) {
                                if (!useRightLaneMarking) {
                                    m_eSum = 0;
                                    m_eOld = 0;
                                }

                                e = ((right.x - m_image->width/2.0) - distance)/distance;

                                useRightLaneMarking = true;
                            }
                            else if (left.x > 0) {
                                if (useRightLaneMarking) {
                                    m_eSum = 0;
                                    m_eOld = 0;
                                }
                                
                                e = (distance - (m_image->width/2.0 - left.x))/distance;

                                useRightLaneMarking = false;
                            }
                            else {
                                // If no measurements are available, reset PID controller.
                                m_eSum = 0;
                                m_eOld = 0;
                            }
                        }
                    }

                    //TimeStamp afterImageProcessing;
                    //cerr << "Processing time: " << (afterImageProcessing.toMicroseconds() - beforeImageProcessing.toMicroseconds())/1000.0 << "ms." << endl;

                    // Show resulting features.
                    if (m_debug) {
                        if (m_image != NULL) {
                            cvShowImage("WindowShowImage", m_image);
                            cvWaitKey(10);
                        }
                    }

                    TimeStamp currentTime;
                    double timeStep = (currentTime.toMicroseconds() - m_previousTime.toMicroseconds()) / (1000.0 * 1000.0);
                    m_previousTime = currentTime;

                    if (fabs(e) < 1e-2) {
                        m_eSum = 0;
                    }
                    else {
                        m_eSum += e;
                    }

                    //Real values
                    double Kp = 0.75;
                    double Ki = 0;
                    double Kd = 0;    

                    
                    //Simulated values
                    if (m_sim) {
                        Kp = 1;
                        Ki = 0;
                        Kd = 0;
                        
                        /*
                        Kp = 4.2;
                        Ki = 1.25;
                        Kd = 0.25;
                        */
                    }
                           
                    const double p = Kp * e;
                    const double i = Ki * timeStep * m_eSum;
                    const double d = Kd * (e - m_eOld)/timeStep;
                    m_eOld = e;

                    const double y = p + i + d;
                    double desiredSteering = 0;
                    if (fabs(e) > 1e-2) {
                        desiredSteering = y;

                        if (desiredSteering > 25.0) {
                            desiredSteering = 25.0;
                        }
                        if (desiredSteering < -25.0) {
                            desiredSteering = -25.0;
                        }
                    }

                    if (m_eSum > max_eSum) {
                        max_eSum = m_eSum;
                    } 
                    else if (m_eSum < min_eSum) {
                        min_eSum = m_eSum;
                    }

                    //cerr << "PID: " << "max_eSum = " << max_eSum << ", min_eSum = " << min_eSum << endl << "e = " << e << ", eSum = " << m_eSum << ", desiredSteering = " << desiredSteering << ", y = " << y << endl;


                    // Go forward.
                    //m_vehicleControl.setSpeed(13);
                    m_vehicleControl.setSteeringWheelAngle(desiredSteering);
                }


        // This method will do the main data processing job.
        // Therefore, it tries to open the real camera first. If that fails, the virtual camera images from camgen are used.
        odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode LaneFollower::body() {
	        // Get configuration data.
	        KeyValueConfiguration kv = getKeyValueConfiguration();
	        m_debug = kv.getValue<int32_t> ("lanefollower.debug") == 1;
            m_sim = kv.getValue<int32_t> ("global.simulation") == 1;

            // Initialize fonts.
            const double hscale = 0.4;
            const double vscale = 0.3;
            const double shear = 0.2;
            const int thickness = 1;
            const int lineType = 6;

            cvInitFont(&m_font, CV_FONT_HERSHEY_DUPLEX, hscale, vscale, shear, thickness, lineType);
/*
            // Parameters for overtaking.
            const int32_t ULTRASONIC_FRONT_CENTER = 3;
            const int32_t ULTRASONIC_FRONT_RIGHT = 4;
            const int32_t INFRARED_FRONT_RIGHT = 0;
            const int32_t INFRARED_REAR_RIGHT = 2;

            const double OVERTAKING_DISTANCE = 5.5;
            const double HEADING_PARALLEL = 0.04;

            // Overall state machines for moving and measuring.
            enum StateMachineMoving { FORWARD, TO_LEFT_LANE_LEFT_TURN, TO_LEFT_LANE_RIGHT_TURN, CONTINUE_ON_LEFT_LANE, TO_RIGHT_LANE_RIGHT_TURN, TO_RIGHT_LANE_LEFT_TURN };
            enum StateMachineMeasuring { DISABLE, FIND_OBJECT_INIT, FIND_OBJECT, FIND_OBJECT_PLAUSIBLE, HAVE_BOTH_IR, HAVE_BOTH_IR_SAME_DISTANCE, END_OF_OBJECT };

            StateMachineMoving stageMoving = FORWARD;
            StateMachineMeasuring stageMeasuring = FIND_OBJECT_INIT;

            // State counter for dynamically moving back to right lane.
            int32_t stageToRightLaneRightTurn = 0;
            int32_t stageToRightLaneLeftTurn = 0;

            // Distance variables to ensure we are overtaking only stationary or slowly driving obstacles.
            double distanceToObstacle = 0;
            double distanceToObstacleOld = 0;

*/
            int currentSpeed = 2;
            firstTime = true;
            double startTime = 0;
            //INTERSECT = true;

            // Overall state machine handler.
	        while (getModuleStateAndWaitForRemainingTimeInTimeslice() == odcore::data::dmcp::ModuleStateMessage::RUNNING) {
		        bool has_next_frame = false;
                TimeStamp Time;
                double stopTime;

		        // Get the most recent available container for a SharedImage.
		        Container c = getKeyValueDataStore().get(odcore::data::image::SharedImage::ID());

		        if (c.getDataType() == odcore::data::image::SharedImage::ID()) {
			        // Example for processing the received container.
			        has_next_frame = readSharedImage(c);
		        }

		        // Process the read image and calculate regular lane following set values for control algorithm.
		        if (true == has_next_frame) {
			        processImage();
		        }
                
                if (firstTime) {
                    startTime = Time.toMicroseconds() / 1000000;
                }

                if (INTERSECT) {
                    currentSpeed = 0;
                    firstTime = true;
                } else {
                    currentSpeed = 2.3;
                }

                m_vehicleControl.setSpeed(currentSpeed);

                // Create container for finally sending the set values for the control algorithm.
                Container c2(m_vehicleControl);
                // Send container.
                getConference().send(c2);

                TimeStamp endTime;
                stopTime = (endTime.toMicroseconds() / 1000000);

                cout << "TotTime: " << stopTime - startTime << "\n";
                cout << "Speed: " << currentSpeed << "\n";

                if ((stopTime - startTime) >= 4) {
                    INTERSECT = false;
                } else {
                    firstTime = false;
                }
	        }

	        return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;
        }

    }
} // automotive::miniature

