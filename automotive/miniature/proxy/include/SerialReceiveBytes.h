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
#ifndef SerialReceiveBytes_H_
#define SerialReceiveBytes_H_

#include <map>
#include "opendavinci/odcore/io/StringListener.h"
#include <opendavinci/odcore/wrapper/SerialPort.h>
#include <opendavinci/odcore/wrapper/SerialPortFactory.h>

namespace automotive {
    namespace miniature {

        using namespace std;
        using namespace odcore;
        using namespace odcore::wrapper;
		// This class will handle the bytes received via a serial link.
		class SerialReceiveBytes : public odcore::io::StringListener {
		    // Your class needs to implement the method void nextString(const std::string &s).
		public:
			SerialReceiveBytes(string Port, unsigned int BAUD_RATE);
		    virtual void nextString(const string &s);
		    virtual void setUp();
		    virtual void tearDown();
		    map<uint32_t, double> getData();
		    void sendData(const string &s);
		private:
			char getNextChar();
			string getPackage();
		    map<uint32_t, double> parseString(const string &s);
		    bool checkSum(const string &s);
			string buffer;
			shared_ptr<SerialPort> serial;
			const string SERIAL_PORT;
            const uint32_t BAUD_RATE;
		};
	}
}

#endif /*SerialReceiveBytes_H_*/