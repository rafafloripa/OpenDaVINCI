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

        LaneFollower::LaneFollower(const int32_t &argc, char **argv) : TimeTriggeredConferenceClientModule(argc, argv, "lanefollower"),
            m_hasAttachedToSharedImageMemory(false),
            m_sharedImageMemory(),
            m_image(NULL),
            m_debug(false),
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

        bool RUNNING = true;
        bool LANEFOLLOW = true; //determine if lanefollowing or overtaking

        //Might not be needed in "LF"
        int LaneFollower::getState() {
            int state = 0;

            return state;
        }

        //For killing LF out of scope
        void LaneFollower::kill() {
            tearDown();
            odcore::base::module::AbstractModule::setModuleState(odcore::data::dmcp::ModuleStateMessage::NOT_RUNNING);
            RUNNING = false;
            LANEFOLLOW = false;
        }

        //For starting LF out of scope
        void LaneFollower::start() {
            setUp();
        }

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

                    // Mirror the image. only for simulator use
                    cvFlip(m_image, 0, -1);

                    retVal = true;
                }
            }
            return retVal;
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
                                //Changed from 402 (To correct for overtaking)
                    const int32_t CONTROL_SCANLINE = 352; // calibrated length to right: 280px
                    const int32_t distance = 190;

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

                    TimeStamp afterImageProcessing;
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
        //            const double Kp = 2.5;
        //            const double Ki = 8.5;
        //            const double Kd = 0;

                    // The following values have been determined by Twiddle algorithm.
/*                    const double Kp = 0.4482626884328734;
                    const double Ki = 3.103197570937628;
                    const double Kd = 0.030450210485408566;*/

                    const double Kp = 0.75;
                    const double Ki = 0;
                    const double Kd = 0;

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
                    m_vehicleControl.setSpeed(13);
                    if(LANEFOLLOW) {
                        m_vehicleControl.setSteeringWheelAngle(desiredSteering);
                    }

                }



        /*
            Could add getSteeeringWheelAngle to manage
            how to change back to right lane during turning
        */

        // This method will do the main data processing job.
        // Therefore, it tries to open the real camera first. If that fails, the virtual camera images from camgen are used.
        odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode LaneFollower::body() {
            // Get configuration data.
            KeyValueConfiguration kv = getKeyValueConfiguration();
            m_debug = kv.getValue<int32_t> ("lanefollower.debug") == 1;

            // Initialize fonts.
            const double hscale = 0.4;
            const double vscale = 0.3;
            const double shear = 0.2;
            const int thickness = 1;
            const int lineType = 6;

            int stateCounter = 0;

            cvInitFont(&m_font, CV_FONT_HERSHEY_DUPLEX, hscale, vscale, shear, thickness, lineType);

            //get values from the config file to determine if you're on the car or simulator
            //KeyValueConfiguration kv = getKeyValueConfiguration();
            const bool sim = kv.getValue<uint32_t>("global.simulation"); //from the config file

            int32_t ULTRASONIC_FRONT_RIGHT;
            int32_t INFRARED_FRONT_RIGHT;
            int32_t INFRARED_REAR_RIGHT;
            int32_t ULTRASONIC_FRONT_CENTER;
            double OVERTAKING_DISTANCE;
            double steeringWheelAngle = 0;

            double ultrathreshold = 0; //upper bound sensor reading to simulate not picking up an object
            double irthreshold = 0;
            double steeringLeft = 0;
            double steeringRight = 0;

            //sim value 1 = simulation, 0 is on the car
            if(sim == 1) { //todo: fine tune the different angles on the wheel and distances for overtake
                ULTRASONIC_FRONT_RIGHT = 4;
                INFRARED_FRONT_RIGHT = 0;
                INFRARED_REAR_RIGHT = 2;
                ULTRASONIC_FRONT_CENTER = 3;
                OVERTAKING_DISTANCE = 10; //for a steep left turn 6 seems to be good
                ultrathreshold = 20;
                irthreshold = 10;
                steeringLeft = -0.5;
                steeringRight = 0.3;
            }
            else {//these IDs are not the same on the car as in the simulator. need to recheck them
                ULTRASONIC_FRONT_RIGHT = 1;
                INFRARED_FRONT_RIGHT = 2;
                INFRARED_REAR_RIGHT = 3;
                ULTRASONIC_FRONT_CENTER = 0;
                OVERTAKING_DISTANCE = 44;
                ultrathreshold = 40;
                irthreshold = 28;
                steeringLeft = -0.785;
                steeringRight = 0.785;
            }

            double distanceToOvertake = 0; //use this value to see how far away the object to overtake is
            double ultrafrontright, irfr, irrr;

            enum STATES {InRightLane, InLeftLane, InChangeToLeftLane, InChangeToRightLane};

            STATES states = InRightLane;

            // Overall state machine handler.
            while ((getModuleStateAndWaitForRemainingTimeInTimeslice() == odcore::data::dmcp::ModuleStateMessage::RUNNING) && RUNNING) {
                LANEFOLLOW = true;
                bool has_next_frame = false;

                //The following makes it possible to get the sensor readings
                // 2. Get most recent sensor board data: comes from automotive/miniature
                Container containerSensorBoardData = getKeyValueDataStore().get(automotive::miniature::SensorBoardData::ID());
                SensorBoardData sbd = containerSensorBoardData.getData<SensorBoardData> ();

                //Sensors
                distanceToOvertake = sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_CENTER);
                ultrafrontright = sbd.getValueForKey_MapOfDistances(ULTRASONIC_FRONT_RIGHT);
                irfr = sbd.getValueForKey_MapOfDistances(INFRARED_FRONT_RIGHT);
                irrr = sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT);
                steeringWheelAngle = m_vehicleControl.getSteeringWheelAngle();

                cout << "Steering: " << steeringWheelAngle << "\n";//debug

                // Get the most recent available container for a SharedImage.
                Container c = getKeyValueDataStore().get(odcore::data::image::SharedImage::ID());

                cout << "State is " << states << "\n"; //debug

                if (c.getDataType() == odcore::data::image::SharedImage::ID()) {
                    // Example for processing the received container.
                    has_next_frame = readSharedImage(c);
                }

                // Process the read image and calculate regular lane following set values for control algorithm.
                if (true == has_next_frame) {
                    processImage();
                }

                if ((states == InRightLane && distanceToOvertake <= OVERTAKING_DISTANCE && distanceToOvertake > 0) || 
                            (states == InChangeToLeftLane && distanceToOvertake <= OVERTAKING_DISTANCE && distanceToOvertake > 0)) {
                    LANEFOLLOW = false;
                    states = InChangeToLeftLane;

                    m_vehicleControl.setSteeringWheelAngle(steeringLeft);
                    m_vehicleControl.setSpeed(1.0); //on the car use speed 13, on sim use 1.0
                    cout << "CHANGE TO LEFT" << "\n";

                } else if (states == InChangeToLeftLane && distanceToOvertake < 0) {

                    //to know that we have actually seen the object on the side of the car
                    if (irfr > 0 && irfr < irthreshold) {
                        stateCounter = 1;
                        for(int i = 0; i < 80; i++) {
                            m_vehicleControl.setSteeringWheelAngle(steeringRight);
                             // Create container for finally sending the set values for the control algorithm.
                            Container c2(m_vehicleControl);
                            // Send container.
                            getConference().send(c2);
                        }
                    }

                    if (stateCounter == 1) {
                        states = InLeftLane;
                        cout << "IN LEFT LANE CHANGE" << "\n";
                        stateCounter = 0;
                        LANEFOLLOW = true;
                    }

                } else if ((states == InLeftLane || states == InChangeToRightLane) &&
                            ((irfr < 0 || irfr > irthreshold) && (ultrafrontright < 0 || ultrafrontright > ultrathreshold))) {
                    LANEFOLLOW = false;
                    states = InChangeToRightLane;

                    cout << "IN CHANGE TO RIGHT LANE!" << "\n";
                    /*while(irrr < 0 || irrr > irthreshold) {
                        irrr = sbd.getValueForKey_MapOfDistances(INFRARED_REAR_RIGHT);
                        m_vehicleControl.setSteeringWheelAngle(0.7);
                         // Create container for finally sending the set values for the control algorithm.
                        Container c2(m_vehicleControl);
                        // Send container.
                        getConference().send(c2);
                    }*/
                    for(int i = 0; i < 260; i++) {
                        m_vehicleControl.setSteeringWheelAngle(steeringRight);
                         // Create container for finally sending the set values for the control algorithm.
                        Container c2(m_vehicleControl);
                        // Send container.
                        getConference().send(c2);
                    }

                    m_vehicleControl.setSteeringWheelAngle(steeringRight);
                    m_vehicleControl.setSpeed(1.0);
                    cout << "CHANGE TO RIGHT" << "\n";

                    //Until in right lane
                    if (irrr < 0 || irrr > irthreshold) {
                        states = InRightLane;
                        LANEFOLLOW = true;
                    }
                }

                // Create container for finally sending the set values for the control algorithm.
                Container c2(m_vehicleControl);
                // Send container.
                getConference().send(c2);
            }
            cout << "CLOSING" << "\n";
            return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;
        }

    }
} // automotive::miniature