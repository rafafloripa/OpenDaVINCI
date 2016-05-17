/**
 * lanefollower 
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
            m_sim(false), // Defines if running the module in a simulated environment
            m_font(),
            m_previousTime(),
            m_eSum(0),
            m_eOld(0),
            max_eSum(0), // Used for PID optimization - the maximum
            min_eSum(0), // accumulated distance error
            max_e(0),    // Used for PID optimization - the maximum
            min_e(0),    // single distance error
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
        
        /**
          * Method used to generate a top view perspective of the lane
          * in the image.
          * Too slow when used on the odroid.
          */

        void LaneFollower::birdEyeTransform() {

            cv::Point2f inputQuad[4];  // stores 4 known points from the lane
            cv::Point2f outputQuad[4]; // resulting 4 points location after transformation

            cv::Mat input, output;
            cv::Mat mat_img(m_image);

            input = m_image;

            cv::Mat lambda( 2, 4, CV_32FC1 );
            lambda = cv::Mat::zeros(input.rows, input.cols, input.type());

            inputQuad[0] = cv::Point2f(213, 217);
            inputQuad[1] = cv::Point2f(381, 217);
            inputQuad[2] = cv::Point2f(574, 435);
            inputQuad[3] = cv::Point2f(54 , 435);

            if (m_sim) {
                inputQuad[0] = cv::Point2f(258, 222);
                inputQuad[1] = cv::Point2f(381, 222);
                inputQuad[2] = cv::Point2f(640, 480);
                inputQuad[3] = cv::Point2f(0  , 480);                         
            }

            int maxWidth  = m_image -> width;
            int maxHeight = m_image -> height;

            outputQuad[0] = cv::Point2f(150, 0);
            outputQuad[1] = cv::Point2f(maxWidth - 150, 0);
            outputQuad[2] = cv::Point2f(maxWidth - 150, maxHeight);
            outputQuad[3] = cv::Point2f(150, maxHeight); 

            lambda = cv::getPerspectiveTransform(inputQuad, outputQuad);
            cv::warpPerspective(input, output, lambda, cv::Size(640,480));

            IplImage result = output;
            std::memcpy(m_image->imageData, result.imageData, result.imageSize);

        }

        /**
          * Recolors the image to black and white, optimized for white lane
          * markings and everything else black.
          * Hough lines have been tested in order to generate complete lines
          * out of intermittent lane arkings, but turned out to be too slow
          * on the odroid.
          */
        void LaneFollower::DetectLane() {

 			cv::Mat mat_img(m_image);
    		cv::Mat dst, cdst;
    		cv::Canny(mat_img, dst, 50, 200, 3);
            cv::cvtColor(dst, cdst, CV_GRAY2BGR);            
            
            /*
            cv::vector<cv::Vec4i> lines;
            cv::HoughLinesP(dst, lines, 1, CV_PI/180, 40, 40, 300);
            for( size_t i = 0; i < lines.size(); i++ )
            {
                line(cdst, cv::Point(lines[i][0], lines[i][1]),
                cv::Point(lines[i][2], lines[i][3]), cv::Scalar(255,255,255), 3, 8 );
            }
            */
            
		    IplImage result = cdst;

    		std::memcpy(m_image->imageData, result.imageData, result.imageSize);
		}

        /**
          *
          */

        void LaneFollower::processImage() {
                    static bool useRightLaneMarking = true;
                    double e = 0;

                    int32_t distance = 180;

                    if (m_sim){
                        distance = 250;
                    }
                    
                    //birdEyeTransform();
                    DetectLane();
                    

                    TimeStamp beforeImageProcessing;

                    //Scanline begins
                    int32_t scan = m_image->height;
                    
                    //Right and left edges
                    CvScalar pixelRight;
                    CvPoint right;
                    //CvScalar pixelLeft;
                    //CvPoint left;

                    bool edge_found = false;

                    do
                    {
                        scan -= 10;
                        distance *= 0.96;
                        right.y = scan;
                        right.x = -1;
                        for(int x = m_image->width/2; x < m_image->width ; x++) {
                            pixelRight = cvGet2D(m_image, scan, x);
                            if (pixelRight.val[0] >= 200) {
                                right.x = x;
                                edge_found = true;
                                break;
                            }
                        }
                    } while ( !edge_found && scan > m_image->height/2 );

                    if (m_debug || right.x > 0) {
                        CvScalar red = CV_RGB(255, 0, 0);
                        cvLine(m_image, cvPoint(m_image->width/2, scan), right, red, 1, 8);

                        stringstream sstr;
                        sstr << (right.x - m_image->width/2);
                        cvPutText(m_image, sstr.str().c_str(), cvPoint(m_image->width/2 + 100, scan - 2), &m_font, red);
                    }

                    if (right.x > 0) {
                        if (!useRightLaneMarking) {
                            m_eSum = 0;
                            m_eOld = 0;
                        }

                        e = ((right.x - m_image->width/2.0) - distance)/distance;
                        useRightLaneMarking = true;
                    }
                    else {
                        // If no measurements are available, reset PID controller.
                        m_eSum = 0;
                        m_eOld = 0;
                    }

                    

                    TimeStamp afterImageProcessing;
                    cerr << "Processing time: " << (afterImageProcessing.toMicroseconds() - beforeImageProcessing.toMicroseconds())/1000.0 << "ms." << endl;

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
                    double Kp = 1;
                    double Ki = 0;
                    double Kd = 0;    

                    //Simulated values
                    if (m_sim) {
                        Kp = 0.75;
                        Ki = 0;
                        Kd = 0;
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

                    cerr << "PID: " << "max_eSum = " << max_eSum << ", min_eSum = " << min_eSum << endl << "e = " << e << ", eSum = " << m_eSum << ", desiredSteering = " << desiredSteering << ", y = " << y << endl;


                    // Go forward.
                    m_vehicleControl.setSpeed(14);
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

            // Overall state machine handler.
	        while (getModuleStateAndWaitForRemainingTimeInTimeslice() == odcore::data::dmcp::ModuleStateMessage::RUNNING) {
		        bool has_next_frame = false;

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

                // Create container for finally sending the set values for the control algorithm.
                Container c2(m_vehicleControl);
                // Send container.
                getConference().send(c2);
	        }

	        return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;
        }

    }
} // automotive::miniature

