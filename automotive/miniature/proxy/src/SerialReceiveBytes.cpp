/**
 * OpenDaVINCI - Tutorial.
 * Copyright (C) 2015 Christian Berger
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <stdint.h>
#include <iostream>
#include <string>
#include <cstring>
#include <memory>
#include <opendavinci/odcore/base/Thread.h>
#include <opendavinci/odcore/wrapper/SerialPort.h>
#include <opendavinci/odcore/wrapper/SerialPortFactory.h>

#include "SerialReceiveBytes.h"

 namespace automotive {
    namespace miniature {

            SerialReceiveBytes::SerialReceiveBytes(string serial_port, uint32_t baud_rate): current(""), serial(), SERIAL_PORT(serial_port), BAUD_RATE (baud_rate) 
            {}

            void SerialReceiveBytes::nextString(const string &s) {
                //HERE MAYBE WE CAN CREATE THE DATA TYPE AT ONCE?
                current = s;
                //cout << "Received Serial " << current.length() << " bytes containing '" << current << "'" << endl;
            }

            // We add some of OpenDaVINCI's namespaces for the sake of readability.
            void SerialReceiveBytes::setUp() {
                try {
                // We are using OpenDaVINCI's std::shared_ptr to automatically
                // release any acquired resources.
                // Get sensor data from IR/US.
            
                    // const string SERIAL_PORT2 = "/dev/ttyUSB1";
                    // const uint32_t BAUD_RATE2 = 19200;// Get sensor data from IR/US.
                    //cout << "SerialPort: " << SERIAL_PORT << " baud_rate: " << BAUD_RATE << endl;
                    serial = shared_ptr<SerialPort>(SerialPortFactory::createSerialPort(SERIAL_PORT, BAUD_RATE));
                    // This instance will handle any bytes that are received
                    // from our serial port.
                    //SerialReceiveBytes handler(SERIAL_PORT2, BAUD_RATE2);
                    serial->setStringListener(this);

                    // Start receiving bytes.
                    serial->start();

                    // const uint32_t timeMicros = 100 * 1000;
                    // odcore::base::Thread::usleepFor(timeMicros);

                    // serial->stop();
                    // serial->setStringListener(NULL);

                    //return current;
                    // Stop receiving bytes and unregister our handler.
                }
                catch(string &exception) {
                    cerr << "Error while creating serial port: " << exception << endl;
                }
            }

            void SerialReceiveBytes::tearDown() {
                // Stop receiving bytes and unregister our handler.
                cout << "Cleaning up the SerialReceiver" << endl;
                try {
                    serial->stop();
                    serial->setStringListener(NULL);
                }
                catch(string &exception) {
                    cerr << "Error while creating serial port: " << exception << endl;
                }
            }

             string SerialReceiveBytes::getData()  {
            //     try {
            //         setUp();
            //         tearDown();
            //         cout << "hello" << endl;
            //     }
            //     catch(string &exception) {
            //             cerr << "Error while creating serial port: " << exception << endl;
            //     }
                 return current;
             }
            
    }
}