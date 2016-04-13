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

#include "SerialReceiveBytes.h"

 namespace automotive {
    namespace miniature {

        SerialReceiveBytes::SerialReceiveBytes(string serial_port, uint32_t baud_rate): buffer(""), serial(), SERIAL_PORT(serial_port), BAUD_RATE (baud_rate)
        {}

        void SerialReceiveBytes::nextString(const string &s) {
            //HERE MAYBE WE CAN CREATE THE DATA TYPE AT ONCE?
            buffer+=s;
            //cout << "Received Serial " << s.length() << " bytes containing '" << s << "'" << endl;
        }

        char SerialReceiveBytes::getNextChar() {
            char c = buffer[0];
            buffer = buffer.substr(1);
            return c;
        }

        string SerialReceiveBytes::getPackage() {
            string package = "";
            bool end = false;
            
            while (!end) {
                char c = getNextChar();
                if (c == ')') {
                    package += c;
                    end = true;
                }
                else if (c == '(') {
                    package = c;
                }
                else {
                    package += c;
                }
                cout << "Package is now: " << package << endl;
            }

            return package;
        }

        map<uint32_t, double> SerialReceiveBytes::parseString (const string &s) {
            map<uint32_t, double> newMap;
            if (s.size() >= 2) {
                cout << "here2" << s << endl;
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

        bool SerialReceiveBytes::checkSum(const string &s) {
            return s==s;
        }
        
        string SerialReceiveBytes::getBuffer() {
        	string answer = buffer;
        	buffer = "";
        	return answer;
        }

        // We add some of OpenDaVINCI's namespaces for the sake of readability.
        void SerialReceiveBytes::setUp() {
            try {
            // We are using OpenDaVINCI's std::shared_ptr to automatically
            // release any acquired resources.
            // Get sensor data from IR/US.
                serial = shared_ptr<SerialPort>(SerialPortFactory::createSerialPort(SERIAL_PORT, BAUD_RATE));
                serial->setStringListener(this);
                serial->start();
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

        void SerialReceiveBytes::sendData(const string &s) {
            serial->send(s);
        }
    }
}