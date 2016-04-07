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

#include <ctype.h>
#include <cstring>
#include <cmath>
#include <iostream>
/*
//FOR SERIAL
#include <string>
#include <memory>
#include <opendavinci/odcore/base/Thread.h>
#include <opendavinci/odcore/wrapper/SerialPort.h>
#include <opendavinci/odcore/wrapper/SerialPortFactory.h>

#include "/home/arnolf/Downloads/OpenDaVINCI/tutorials/serialreceivebytes/SerialReceiveBytes.hpp"
//FOR SERIAL
*/
#include "opendavinci/odcore/base/KeyValueConfiguration.h"
#include "opendavinci/odcore/data/Container.h"
#include "opendavinci/odcore/data/TimeStamp.h"

#include "OpenCVCamera.h"

#ifdef HAVE_UEYE
    #include "uEyeCamera.h"
#endif

#include "Proxy.h"

namespace automotive {
    namespace miniature {

        using namespace std;
        using namespace odcore::base;
        using namespace odcore::data;
        using namespace odtools::recorder;
/*
        // We add some of OpenDaVINCI's namespaces for the sake of readability.
        //FOR SERIAL
        using namespace odcore;
        using namespace odcore::wrapper;
*//*
        //FOR SERIAL
        void SerialReceiveBytes::nextString(const string &s) {
            cout << "Received " << s.length() << " bytes containing '" << s << "'" << endl;
        }

        void receiveData() {
            const string SERIAL_PORT = "/dev/pts/31"; ///dev/ttyACM0
            const uint32_t BAUD_RATE = 19200;

            // We are using OpenDaVINCI's std::shared_ptr to automatically
            // release any acquired resources.
            try {
                std::shared_ptr<SerialPort>
                    serial(SerialPortFactory::createSerialPort(SERIAL_PORT, BAUD_RATE));

                // This instance will handle any bytes that are received
                // from our serial port.
                SerialReceiveBytes handler;
                serial->setStringListener(&handler);

                // Start receiving bytes.
                serial->start();

                const uint32_t ONE_SECOND = 1000 * 1000;
                //Reading bytes for (x * 1) seconds...
                odcore::base::Thread::usleepFor(20 * ONE_SECOND);

                // Stop receiving bytes and unregister our handler.
                serial->stop();
                serial->setStringListener(NULL);
            }
            catch(string &exception) {
                cerr << "Error while creating serial port: " << exception << endl;
            }
    }

        //FOR SERIAL
*/
        Proxy::Proxy(const int32_t &argc, char **argv) :
            TimeTriggeredConferenceClientModule(argc, argv, "proxy"),
            m_recorder(),
            m_camera()
        {}

        Proxy::~Proxy() {
        }

        void Proxy::setUp() {
            // This method will be call automatically _before_ running body().
            if (getFrequency() < 20) {
                cerr << endl << endl << "Proxy: WARNING! Running proxy with a LOW frequency (consequence: data updates are too seldom and will influence your algorithms in a negative manner!) --> suggestions: --freq=20 or higher! Current frequency: " << getFrequency() << " Hz." << endl << endl << endl;
            }

            // Get configuration data.
            KeyValueConfiguration kv = getKeyValueConfiguration();

            // Create built-in recorder.
            const bool useRecorder = kv.getValue<uint32_t>("proxy.useRecorder") == 0;
            if (useRecorder) {
                // URL for storing containers.
                stringstream recordingURL;
                //Added this string to add folder location from config (NOT WORKING PROPERLY)
                //string recFileLocation = getKeyValueConfiguration().getValue<string>("proxy.recorder.output");
                //Added line to change the output directory
                //Can change line to (but getting error): recordingURL << getKeyValueConfiguration().getValue<string>("proxy.recorder.output") << "proxy_" << TimeStamp().getYYYYMMDD_HHMMSS() << ".rec";
                recordingURL << "file://" << "proxy_" << TimeStamp().getYYYYMMDD_HHMMSS() << ".rec";

                // Size of memory segments.
                const uint32_t MEMORY_SEGMENT_SIZE = getKeyValueConfiguration().getValue<uint32_t>("global.buffer.memorySegmentSize");
                // Number of memory segments.
                const uint32_t NUMBER_OF_SEGMENTS = getKeyValueConfiguration().getValue<uint32_t>("global.buffer.numberOfMemorySegments");
                // Run recorder in asynchronous mode to allow real-time recording in background.
                const bool THREADING = true;
                // Dump shared images and shared data?
                const bool DUMP_SHARED_DATA = getKeyValueConfiguration().getValue<uint32_t>("proxy.recorder.dumpshareddata") == 1;

                m_recorder = unique_ptr<Recorder>(new Recorder(recordingURL.str(), MEMORY_SEGMENT_SIZE, NUMBER_OF_SEGMENTS, THREADING, DUMP_SHARED_DATA));
            }

            // Create the camera grabber.
            const string NAME = getKeyValueConfiguration().getValue<string>("proxy.camera.name");
            string TYPE = getKeyValueConfiguration().getValue<string>("proxy.camera.type");
            std::transform(TYPE.begin(), TYPE.end(), TYPE.begin(), ::tolower);
            const uint32_t ID = getKeyValueConfiguration().getValue<uint32_t>("proxy.camera.id");
            const uint32_t WIDTH = getKeyValueConfiguration().getValue<uint32_t>("proxy.camera.width");
            const uint32_t HEIGHT = getKeyValueConfiguration().getValue<uint32_t>("proxy.camera.height");
            const uint32_t BPP = getKeyValueConfiguration().getValue<uint32_t>("proxy.camera.bpp");

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

                // Get sensor data from IR/US.
            }

            cout << "Proxy: Captured " << captureCounter << " frames." << endl;

            return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;
        }

    }
} // automotive::miniature

