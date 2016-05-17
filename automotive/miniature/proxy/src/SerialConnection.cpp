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
#include <memory>
#include <opendavinci/odcore/base/Thread.h>
#include <opendavinci/odcore/wrapper/SerialPort.h>
#include <opendavinci/odcore/wrapper/SerialPortFactory.h>

#include "SerialConnection.h"

 namespace automotive {
    namespace miniature {

        SerialConnection::SerialConnection(string serial_port, uint32_t baud_rate): buffer(""), serial(), SERIAL_PORT(serial_port), BAUD_RATE (baud_rate), running(false)
        {}

        void SerialConnection::nextString(const string &s) {
            //Function implemented from String Listener.
            buffer+=s;
        }
        
        string SerialConnection::getBuffer() {
            // Get the buffer and clean it.
            string answer = buffer;
            buffer="";
            return answer;
        }

        // We add some of OpenDaVINCI's namespaces for the sake of readability.
        void SerialConnection::setUp() {
            try {
            // We are using OpenDaVINCI's std::shared_ptr to automatically
            // release any acquired resources.
            // Get sensor data from IR/US.
                serial = shared_ptr<SerialPort>(SerialPortFactory::createSerialPort(SERIAL_PORT, BAUD_RATE));
                serial->setStringListener(this);
                serial->start();
                running = true;
            }
            catch(string &exception) {
                running = false;
                cerr << "Error while creating serial port: " << exception << endl;
            }
        }

        void SerialConnection::tearDown() {
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

        void SerialConnection::sendData(const string &s) {
            // Check first if the serial was created correctly.
        	if (running) {
                cout << "trying to send data: " << s << endl;
                serial->send(s);
        	}
        	else {
        	   cerr <<  "Error sending data. Serial Port not Created." << endl;
        	}
        }
    }
}
