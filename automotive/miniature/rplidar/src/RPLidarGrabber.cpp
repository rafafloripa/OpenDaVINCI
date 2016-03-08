/**
 * RPLidarGrabber - Sample application to encapsulate the interfacing with the rplidar.
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

#include <opendavinci/odcore/wrapper/SerialPort.h>
#include <opendavinci/odcore/wrapper/SerialPortFactory.h>

#include "RPLidarGrabber.h"
//#include "RPLidarSerialInterface.cpp"
#include "rplidar_reader.cpp"

namespace automotive {
    namespace miniature {

        using namespace odcore;
        using namespace odcore::data;
        using namespace odcore::wrapper;


        class RPLidarSerialInterface : public odcore::io::StringListener {
            void nextString(const std::string &s)
            {
                cout << "Received " << s.length() << " bytes containing '" << s << "'" << endl;
            }
        };

        RPLidarGrabber::RPLidarGrabber(const int32_t &argc, char **argv) :
            TimeTriggeredConferenceClientModule(argc, argv, "RPLidarGrabber")
        {}

        RPLidarGrabber::~RPLidarGrabber() {
        }

        void RPLidarGrabber::setUp() {
            // This method will be call automatically _before_ running body().
            if (getFrequency() < 20) {
                cerr << endl << endl << "RPLidarGrabber: WARNING! Running proxy with a LOW frequency (consequence: data updates are too seldom and will influence your algorithms in a negative manner!) --> suggestions: --freq=20 or higher! Current frequency: " << getFrequency() << " Hz." << endl << endl << endl;
            }
        }

        void RPLidarGrabber::tearDown() {
            // This method will be call automatically _after_ return from body().
        }

        // This method will do the main data processing job.
        odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode RPLidarGrabber::body() {
            
            const string SERIAL_PORT = "/dev/ttyUSB0";
            const uint32_t BAUD_RATE = 115200;
            
            try {
                std::shared_ptr<SerialPort> serial_port(SerialPortFactory::createSerialPort(SERIAL_PORT, BAUD_RATE));

                char cmd=0x52;
                std::string str=cmd+"";
                
                // This instance will handle any bytes that are received from our serial port.
                RPLidarSerialInterface handler;
                serial_port->setStringListener(&handler);

                // Start receiving bytes.
                serial_port->start(); // WHEN THE PROGRAM REACHES THIS POINT, THE LIDAR STOPS.
                //serial_port->send(str);//0x52

                const uint32_t ONE_SECOND = 1000 * 1000;
                odcore::base::Thread::usleepFor(10 * ONE_SECOND);

                // Stop receiving bytes and unregister our handler.
                serial_port->stop();
                serial_port->setStringListener(NULL);
            }
            catch(string &exception) {
                cerr << "Serial port could not be created: " << exception << endl;
            }

            while (getModuleStateAndWaitForRemainingTimeInTimeslice() == odcore::data::dmcp::ModuleStateMessage::RUNNING) {
                
                cout << "RPLidarGrabber::body" << endl;
                //rplidar_read_once();
//                Container c(s);
//                // Time stamp data before storing.
//                c.setReceivedTimeStamp(TimeStamp());
//                // Share data.
//                getConference().send(c);
            }
            return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;
        }

    }
} // automotive::miniature

