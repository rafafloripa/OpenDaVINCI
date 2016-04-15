#include <iostream>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <opendavinci/odcore/base/KeyValueConfiguration.h>
#include <opendavinci/odcore/base/Lock.h>
#include <opendavinci/odcore/data/Container.h>
#include <opendavinci/odcore/io/conference/ContainerConference.h>
#include "opendavinci/odcore/wrapper/SharedMemoryFactory.h"
#include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "opendavinci/GeneratedHeaders_OpenDaVINCI.h"
#include "LaneFollower.h"

using namespace std;
using namespace odcore::base;
using namespace odcore::data;
using namespace odcore::data::image;
using namespace automotive;
using namespace automotive::miniature;

LaneFollower::LaneFollower(const int32_t &argc, char **argv) : TimeTriggeredConferenceClientModule(argc, argv, "LaneFollow"),
	m_hasAttachedToSharedImageMemory(false),
            m_sharedImageMemory(),
            m_image(NULL),
            m_debug(false),
            m_font(),
            m_previousTime(),
            m_eSum(0),
            m_eOld(0),
            m_vehicleControl() {}

LaneFollower::~LaneFollower() {}

void LaneFollower::setUp() {
	if (m_debug) {
		cvNamedWindow("LaneFollowImage", CV_WINDOW_AUTOSIZE);
		cvMoveWindow("LaneFollowImage", 150, 50);
	}
}

void LaneFollower::tearDown() {
	if (m_image != NULL) {
		cvReleaseImage(&m_image);
	}

	if (m_debug) {
		cvDestroyWindow("LaneFollowImage");
	}
}

bool LaneFollower::readSharedImage(Container &c) {
	bool retVal = false;

	if (c.getDataType() == odcore::data::image::SharedImage::ID()) {
		SharedImage si = c.getData<SharedImage>();

		if (!m_hasAttachedToSharedImageMemory) {
			m_sharedImageMemory = 
				odcore::wrapper::SharedMemoryFactory::attachToSharedMemory(si.getName());
		}

		if (m_sharedImageMemory->isValid()) {
			Lock l(m_sharedImageMemory);
			const uint32_t numberOfChannels = 3;

			if (m_image == NULL) {
				m_image = cvCreateImage(cvSize(si.getWidth(), si.getHeight()), IPL_DEPTH_8U, numberOfChannels);
			} else {
				memcpy(m_image->imageData, m_sharedImageMemory->getSharedMemory(),
					si.getWidth() * si.getHeight() * numberOfChannels);
			}

			//cvFlip(m_image, 0, -1);

			retVal = true;
		}
	}
	return retVal;
}

IplImage LaneFollower::DetectLane(IplImage *src) {

	cv::Mat mat_img(src);
	cv::Mat dst, cdst;
	cv::Canny(mat_img, dst, 50, 200, 3);
    cv::cvtColor(dst, cdst, CV_GRAY2BGR);
    vector<cv::Vec2f> lines;
    cv::HoughLines(dst, lines, 1, CV_PI/180, 150, 0, 0 );
    IplImage ipl_img = dst;

    return ipl_img;
}
/*
ENORMOUS function. Can functionality be splitted?
*/
void LaneFollower::processImage() {

	static bool useRightLaneMarking = true;
	double e = 0;

	const int32_t CONTROL_SCANLINE = 462;
	const int32_t distance = 280;

	TimeStamp beforeProcessing;
	/*
	Should try to put height (without * .5) and search the whole picture,
	then limit each other for loop to @ .5 (or whatever).
	Or limit the main for loop and extend the image when looking for a greater
	y point.
	Also! ENORMOUS for loop, could this be done in another way/place?
	*/
	for (int y = m_image->height - 8; y > m_image->height * 0.5; y -=10) {

		CvScalar pixelLeft;
		CvPoint left;
		left.y = y;
		left.x = 0;
		for (int x = m_image->width/2; x > 50; x--) {
			pixelLeft = cvGet2D(m_image, y, x);
			if (pixelLeft.val[0] >= 230) {
				left.x = x;
				break;
			}
		}

		CvScalar pixelRight;
		CvPoint right;
		right.y = y;
		right.x = 0;
		for (int x = m_image->width/2; x < m_image->width; x++) {
			pixelRight = cvGet2D(m_image, y, x);
			if (pixelRight.val[0] >= 230) {
				right.x = x;
				break;
			}
		}

		CvScalar pixelUp;
		CvPoint up;
		up.y = 0;
		up.x = 320;		//w/2=320, h/2=240
		for (int ypoint = (m_image->height/2) + 100; ypoint > 100; ypoint--) {
			/*
			Could change cvGet2D to better match wanted results
			*/
			pixelUp = cvGet2D(m_image, ypoint, m_image->width/2);

			if (pixelUp.val[0] >= 230 && pixelRight.val[0] >= 200 && 
				pixelLeft.val[0] >= 200) {
				up.y = ypoint;

				int value = m_image->height/2 - up.y;
                double desiredSteering = m_vehicleControl.getSteeringWheelAngle();
                double turnR = 0.002, turnL = -0.0033;

                cout << "\n" << "FIRST IF! " << desiredSteering << ", " << value << ", " << right.x << ", " << left.x <<"\n";

                /*
                Could put some of this functionality some place else to decrease
                the amount of ifs (cyclo complex.)
                */

                if (value > -50 && value < -30 && right.x > 435 && 
                	right.x < 500 && left.x > 50 && left.x < 91 &&
                	desiredSteering < turnR && desiredSteering > turnL) {
                	//int count = 0;

                	cout << "\n" << "HITTED IF STATEMENT" << "\n";

                	m_vehicleControl.setSpeed(0);
                	Container c2(m_vehicleControl);
                	getConference().send(c2);

                	sleep(3);
                }
                break;
			}
		}

		if (m_debug) {
            if (left.x > 0) {
            	CvScalar blue = CV_RGB(0, 0, 255);
            	cvLine(m_image, cvPoint(m_image->width/2, y), left, blue, 1, 8);

                //stringstream sstr;
                //sstr << (m_image->width/2 - left.x);
            	//cvPutText(m_image, sstr.str().c_str(), cvPoint(m_image->width/2 - 100, y - 2), &m_font, blue);
            }
            if (right.x > 0) {
            	CvScalar green = CV_RGB(0, 255, 0);
            	cvLine(m_image, cvPoint(m_image->width/2, y), right, green, 1, 8);

                //stringstream sstr;
                //sstr << (right.x - m_image->width/2);
            	//cvPutText(m_image, sstr.str().c_str(), cvPoint(m_image->width/2 + 100, y - 2), &m_font, green);
            }

            
            //Added for intersect
            if (up.y > 0) {
            	CvScalar red = CV_RGB(255, 0, 0);
            	cvLine(m_image, cvPoint(y, m_image->width/2), up, red, 1, 8);

            	stringstream sstr;
            	sstr << (m_image->height/2 - up.y);
            	cvPutText(m_image, sstr.str().c_str(), cvPoint(m_image->width/2, up.y), &m_font, red);
            }
        }
        /*
        Work a bit more on when/how to correct
        Should up.y val be added?
        */
        if (y == CONTROL_SCANLINE) {
            // Calculate the deviation error.
            if (right.x > 0) {
                if (!useRightLaneMarking) {
                    m_eSum = 0;
                    m_eOld = 0;
                }

                e = ((right.x + 100 - m_image->width/2.0) - distance)/distance;

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

	TimeStamp afterProcessing;
	cerr << "Processing time: " << (afterProcessing.toMicroseconds() - beforeProcessing.toMicroseconds())/1000.0 << "ms." << endl;

	//Should add call to function DetectLane() here!!
	//Should add call to function DetectLane() here!!
	//Should add call to function DetectLane() here!!

    cv::Mat mat_img(m_image);
    cv::Mat dst, cdst;
    cv::Canny(mat_img, dst, 50, 200, 3);
    cv::cvtColor(dst, cdst, CV_GRAY2BGR);
    vector<cv::Vec2f> lines;
    cv::HoughLines(dst, lines, 1, CV_PI/180, 150, 0, 0 );
    IplImage ipl_img = dst;

	if (m_debug) {
		if (m_image != NULL) {
			cvShowImage("LaneFollowImage", &ipl_img);
			cvWaitKey(10);
		}
	}

	TimeStamp currentTime;
	double timeStep = (currentTime.toMicroseconds() - m_previousTime.toMicroseconds()) / (1000.0 * 1000.0);
	m_previousTime = currentTime;

	if (fabs(e) < 1e-2) {
		m_eSum = 0;
	} else {
		m_eSum += e;
	}

	// The following values have been determined by Twiddle algorithm.
    const double Kp = 0.4482626884328734;
    const double Ki = 3.103197570937628;
    const double Kd = 0.030450210485408566;

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
    cerr << "PID: " << "e = " << e << ", eSum = " << m_eSum << ", desiredSteering = " << desiredSteering << ", y = " << y << endl;


    // Go forward.
    m_vehicleControl.setSpeed(2);
    m_vehicleControl.setSteeringWheelAngle(desiredSteering);
}

odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode LaneFollower::body() {

    //KeyValueConfiguration kv = getKeyValueConfiguration();
    m_debug = true;//kv.getValue<int32_t> ("lanefollower.debug") == 1;


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