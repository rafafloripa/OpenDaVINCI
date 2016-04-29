/**
 * proxy - Sample application to encapsulate HW/SW interfacing with embedded systems.
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

//MKDIR
#include <sys/stat.h>

#include <ctype.h>
#include <cstring>
#include <cmath>
#include <iostream>
#include "SerialReceiveBytes.h"
#include "opendavinci/odcore/base/KeyValueConfiguration.h"
 #include "automotivedata/GeneratedHeaders_AutomotiveData.h"
#include "opendavinci/odcore/data/Container.h"
#include "opendavinci/odcore/data/TimeStamp.h"
#include "OpenCVCamera.h"

#ifdef HAVE_UEYE
    #include "uEyeCamera.h"
#endif

#include "Proxy.h"

 const double pi = 3.1415926535897;

namespace automotive {
    namespace miniature {

        using namespace std;
        using namespace odcore::base;
        using namespace odcore::data;
        using namespace odtools::recorder;

        Proxy::Proxy(const int32_t &argc, char **argv) :
            TimeTriggeredConferenceClientModule(argc, argv, "proxy"),
            m_recorder(),
            m_camera(),
            arduino(),
            buffer(""),
            previousSpeed(0),
            previousAngle(0)
        {}

        Proxy::~Proxy() {
        }

        void Proxy::setUp() {
            // Get configuration data.
            KeyValueConfiguration kv = getKeyValueConfiguration();

            const string serial_port = kv.getValue<string>("proxy.Sensor.SerialPort");
            const uint32_t baud_rate = kv.getValue<uint32_t>("proxy.Sensor.SerialSpeed");
            arduino = unique_ptr<SerialReceiveBytes>(new SerialReceiveBytes(serial_port, baud_rate));
            arduino->setUp();

            // This method will be call automatically _before_ running body().
            if (getFrequency() < 20) {
                cerr << endl << endl << "Proxy: WARNING! Running proxy with a LOW frequency (consequence: data updates are too seldom and will influence your algorithms in a negative manner!) --> suggestions: --freq=20 or higher! Current frequency: " << getFrequency() << " Hz." << endl << endl << endl;
            }

            // Create built-in recorder.
            const bool useRecorder = kv.getValue<uint32_t>("proxy.useRecorder") == 1;
            if (useRecorder) {
                // URL for storing containers.
                stringstream specialURL;
                specialURL << kv.getValue<string>("proxy.recorder.output") << TimeStamp().getYYYYMMDD_HHMMSS() << "/";
                const char* temp = specialURL.str().c_str();
                mkdir(temp, ACCESSPERMS);
                stringstream recordingURL;
                recordingURL << "file://" << specialURL.str() << "recording.rec";
                // Size of memory segments.
                const uint32_t MEMORY_SEGMENT_SIZE = kv.getValue<uint32_t>("global.buffer.memorySegmentSize");
                // Number of memory segments.
                const uint32_t NUMBER_OF_SEGMENTS = kv.getValue<uint32_t>("global.buffer.numberOfMemorySegments");
                // Run recorder in asynchronous mode to allow real-time recording in background.
                const bool THREADING = true;
                // Dump shared images and shared data?
                const bool DUMP_SHARED_DATA = kv.getValue<uint32_t>("proxy.recorder.dumpshareddata") == 1;

                m_recorder = unique_ptr<Recorder>(new Recorder(recordingURL.str(), MEMORY_SEGMENT_SIZE, NUMBER_OF_SEGMENTS, THREADING, DUMP_SHARED_DATA));
            }

            // Create the camera grabber.
            const string NAME = kv.getValue<string>("proxy.camera.name");
            string TYPE = kv.getValue<string>("proxy.camera.type");
            std::transform(TYPE.begin(), TYPE.end(), TYPE.begin(), ::tolower);
            const uint32_t ID = kv.getValue<uint32_t>("proxy.camera.id");
            const uint32_t WIDTH = kv.getValue<uint32_t>("proxy.camera.width");
            const uint32_t HEIGHT = kv.getValue<uint32_t>("proxy.camera.height");
            const uint32_t BPP = kv.getValue<uint32_t>("proxy.camera.bpp");

            if (TYPE.compare("opencv") == 0) {
                m_camera = unique_ptr<Camera>(new OpenCVCamera(NAME, ID, WIDTH, HEIGHT, BPP));
            }
            if (TYPE.compare("ueye") == 0) {
#ifdef HAVE_UEYE
                m_camera = unique_ptr<Camera>(new uEyeCamera(NAME, ID, WIDTH, HEIGHT, BPP));
#endif
            }

            if (m_camera.get() == NULL) {
                cerr << "No valid camera type defined." << endl;
            }
        }

        void Proxy::tearDown() {
           arduino->tearDown();
            // This method will be call automatically _after_ return from body().
        }

        void Proxy::distribute(Container c) {
            // Store data to recorder.
            if (m_recorder.get() != NULL) {
                // Time stamp data before storing.
                c.setReceivedTimeStamp(TimeStamp());
                m_recorder->store(c);
            }

            // Share data.
            getConference().send(c);
        }

        // This method will do the main data processing job.
        odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode Proxy::body() {
            uint32_t captureCounter = 0;
            while (getModuleStateAndWaitForRemainingTimeInTimeslice() == odcore::data::dmcp::ModuleStateMessage::RUNNING) {
                // Capture frame.
                if (m_camera.get() != NULL) {
                    odcore::data::image::SharedImage si = m_camera->capture();

                    Container c(si);
                    distribute(c);
                    captureCounter++;
                }
                if (arduino.get() != NULL) {

                    // HERE ITS MAYBE BETTER TO MOVE THIS CODE TO THE SerialReceiveBytes.cpp at function getData
                    // FUNCTION COULD BE CHANGED TO ALREADY RETURN A WANTED DATATYPE.
                    buffer += arduino->getBuffer();
                    string temp = getPackage();
                    if (!temp.compare("") == 0) {
                        map<uint32_t, double> data = parseString(temp);
                        map<uint32_t, double> sensormap;
                        for(int x = 0; x <=4; x++) {
                            sensormap[x] = data[x];
                        }
                        double gyro = data[5];
                        double encoder = data[6];



                        cout << "after parsing-------->  gyro:" << gyro << " encoder: " << encoder << endl; 




                        if (!sensormap.empty()) {
                            SensorBoardData obj;
                            obj.setMapOfDistances(sensormap);
                            Container sensors(obj);
    //                        cout << "before distribute" << endl;
                            distribute(sensors);
                        }

                        VehicleData* vc = new VehicleData();
                        vc->setHeading(gyro);
                        vc->setAbsTraveledPath(encoder);
                    }

                    //Check the container
                    Container containerVehicleControl = getKeyValueDataStore().get(VehicleControl::ID());
                    VehicleControl vc = containerVehicleControl.getData<VehicleControl> ();
                    int speed = 13;//vc.getSpeed()*50;
                    double angle_radians = vc.getSteeringWheelAngle();
                    int angle = angle_radians*cartesian::Constants::RAD2DEG;

                    int coefficient = 1;
                    if (angle < 0)
                        coefficient = -1;
                    angle = abs(angle);
                    if (angle > 0 && angle <= 10) {
                        angle = 10;
                    } else if (angle > 10 && angle <= 15) {
                        angle = 15;
                    } else if (angle > 15 && angle <= 20) {
                        angle = 20;
                    } else if (angle > 20 && angle <= 25) {
                        angle = 25;
                    } else if (angle > 25) {
                        angle = 30;
                    }
                    angle = angle*coefficient;

                    if ((speed != previousSpeed) || (angle != previousAngle)) {

                        previousSpeed = speed;
                        previousAngle = angle;
                       string sendData = "(" + to_string(speed) + "," + to_string(angle) + ")z";
                        //string sendData = "(15,45)\n";
                       arduino->sendData(sendData);
                    }
                }
            }

            cout << "Proxy: Captured " << captureCounter << " frames." << endl;

            return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;
        }

        string Proxy::getPackage() {
            //buffer = handler->getBuffer();
            string package = "";
            int size = buffer.length();                             //Check the entire buffer
            bool end = false;
            bool start = false;
            int n = 0;
            while (!end && n < size) {                              //Try to make a package
                if ((buffer[n]==')') && (start)) {                               //found the end delimeter 
                    package += buffer[n];
                    end = true;
                }
                else if (buffer[n]=='(') {                          //found the start delimeter
                    start = true;
                    package = "(";
                }
                else {
                    if (start)
                        package += buffer[n];                           //else keep adding
                }
                n++;
                //cout << "HERE: " << package << "--end" << endl;
            }
            size = package.length();
            if (start && end) {                         //checks if the package has the correct delimeters
                buffer.erase(0,n);                                  //erases all the unnecessary bits
                //cout << "package: " << package << endl;
                return package;
            }
            return "";
        }

        map<uint32_t, double> Proxy::parseString (const string &s) {
            map<uint32_t, double> newMap;
            if (s.size() >= 2) {
                //cout << "here2" << s << endl;
                string s2 = s.substr(1, s.size() - 2);              //Remove the delimeters (only leave the sensor values with a comma)
                istringstream line(s2);
                int n= 0;
                double d;
                while(line >> d) {                                  //While there are integers there
                    newMap[n] = d;                                  //Makes the key value map
                    if (line.peek() == ',')                         //ignores the commas
                        line.ignore();
                    n++;
                }
            }
            return newMap;
        }
    }
} // automotive::miniature
