/**
 * OpenDaVINCI - Portable middleware for distributed components.
 * Copyright (C) 2008 - 2015 Christian Berger, Bernhard Rumpe
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

#ifndef CORE_SERIALIZATIONTESTSUITE_H_
#define CORE_SERIALIZATIONTESTSUITE_H_

#include <sstream>

#include "cxxtest/TestSuite.h"

#include "opendavinci/generated/example/TestMessage01.h"

using namespace std;

class SerializationTest : public CxxTest::TestSuite {
    public:
        void testSerializationDeserializationListUint8()
        {
            example::TestMessage01 tm1;
            tm1.addTo_ListOfField1(1);
            tm1.addTo_ListOfField1(2);
            tm1.addTo_ListOfField1(3);
            tm1.addTo_ListOfField1(4);
//            tm1.addTo_ListOfField1(12); // Would fail in uint8 case
            tm1.addTo_ListOfField1(6);

            stringstream sstr;
            sstr << tm1;

            example::TestMessage01 tm2;
            sstr >> tm2;

            TS_ASSERT(tm1.getListOfField1().at(0) == tm2.getListOfField1().at(0));
            TS_ASSERT(tm1.getListOfField1().at(1) == tm2.getListOfField1().at(1));
            TS_ASSERT(tm1.getListOfField1().at(2) == tm2.getListOfField1().at(2));
            TS_ASSERT(tm1.getListOfField1().at(3) == tm2.getListOfField1().at(3));
//            TS_ASSERT(tm1.getListOfField1().at(4) == tm2.getListOfField1().at(4));
            TS_ASSERT(tm1.getListOfField1().at(4) == tm2.getListOfField1().at(4));
//            TS_ASSERT(tm1.getListOfField1().at(5) == tm2.getListOfField1().at(5));
        }

        void testSerializationDeserializationListUint16()
        {
            example::TestMessage01 tm1;
            for(uint16_t i = 0; i<10000; i++) {
                tm1.addTo_ListOfField1(65535 - i);
            }

            stringstream sstr;
            sstr << tm1;

            example::TestMessage01 tm2;
            sstr >> tm2;

            for(uint16_t i = 0; i<10000; i++) {
                TS_ASSERT(tm1.getListOfField1().at(i) == tm2.getListOfField1().at(i));
            }
        }
};

#endif /*CORE_ODVDTESTSUITE_H_*/
