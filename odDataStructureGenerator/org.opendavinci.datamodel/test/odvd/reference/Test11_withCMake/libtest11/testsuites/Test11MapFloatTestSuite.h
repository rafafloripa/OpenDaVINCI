/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef TEST11MAPFLOAT_TESTSUITE_H
#define TEST11MAPFLOAT_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "core/opendavinci.h"
#include "core/strings/StringToolbox.h"

#include "GeneratedHeaders_Test11.h"


class Test11MapFloat_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
	
			Test11MapFloat obj1;
			TS_ASSERT(obj1.getMapOfMap1().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getMapOfMap2().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.getMapOfMap3().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.getMapOfMap4().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.getMapOfMap5().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.getMapOfMap6().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.getMapOfMap7().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap7());
	
			{
				std::map<float, bool> myExternalMap;
				myExternalMap[4.5] = true;
				myExternalMap[5.5] = false;
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(5.5));
			
				obj1.setMapOfMap1(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap1().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap1());
				TS_ASSERT(obj1.containsKey_MapOfMap1(4.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap1(4.5) == true);
				TS_ASSERT(obj1.containsKey_MapOfMap1(5.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap1(5.5) == false);
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(5.5));
			}
			obj1.putTo_MapOfMap1(4.5, true);
			TS_ASSERT(obj1.getMapOfMap1().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(4.5) == true);
			TS_ASSERT(!obj1.containsKey_MapOfMap1(5.5));
			
			obj1.putTo_MapOfMap1(5.5, false);
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(4.5) == true);
			TS_ASSERT(obj1.containsKey_MapOfMap1(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(5.5) == false);
			
			{
				std::map<float, char> myExternalMap;
				myExternalMap[4.5] = 'd';
				myExternalMap[5.5] = 'e';
				myExternalMap[6.5] = 'f';
			
				obj1.clear_MapOfMap2();
				TS_ASSERT(obj1.getMapOfMap2().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap2());
				TS_ASSERT(!obj1.containsKey_MapOfMap2(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(6.5));
			
				obj1.setMapOfMap2(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap2().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap2());
				TS_ASSERT(obj1.containsKey_MapOfMap2(4.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
				TS_ASSERT(obj1.containsKey_MapOfMap2(5.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(5.5) == 'e');
				TS_ASSERT(obj1.containsKey_MapOfMap2(6.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(6.5) == 'f');
			
				obj1.clear_MapOfMap2();
				TS_ASSERT(obj1.getMapOfMap2().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap2());
				TS_ASSERT(!obj1.containsKey_MapOfMap2(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(6.5));
			}
			obj1.putTo_MapOfMap2(4.5, 'd');
			TS_ASSERT(obj1.getMapOfMap2().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(!obj1.containsKey_MapOfMap2(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap2(6.5));
			
			obj1.putTo_MapOfMap2(5.5, 'e');
			TS_ASSERT(obj1.getMapOfMap2().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(5.5) == 'e');
			TS_ASSERT(!obj1.containsKey_MapOfMap2(6.5));
			
			obj1.putTo_MapOfMap2(6.5, 'f');
			TS_ASSERT(obj1.getMapOfMap2().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(5.5) == 'e');
			TS_ASSERT(obj1.containsKey_MapOfMap2(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(6.5) == 'f');
			{
				std::map<float, int32_t> myExternalMap;
				myExternalMap[4.5] = -300;
				myExternalMap[5.5] = -400;
				myExternalMap[6.5] = -500;
			
				obj1.clear_MapOfMap3();
				TS_ASSERT(obj1.getMapOfMap3().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap3());
				TS_ASSERT(!obj1.containsKey_MapOfMap3(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(6.5));
			
				obj1.setMapOfMap3(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap3().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap3());
				TS_ASSERT(obj1.containsKey_MapOfMap3(4.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
				TS_ASSERT(obj1.containsKey_MapOfMap3(5.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(5.5) == -400);
				TS_ASSERT(obj1.containsKey_MapOfMap3(6.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(6.5) == -500);
			
				obj1.clear_MapOfMap3();
				TS_ASSERT(obj1.getMapOfMap3().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap3());
				TS_ASSERT(!obj1.containsKey_MapOfMap3(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(6.5));
			}
			obj1.putTo_MapOfMap3(4.5, -300);
			TS_ASSERT(obj1.getMapOfMap3().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(!obj1.containsKey_MapOfMap3(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap3(6.5));
			
			obj1.putTo_MapOfMap3(5.5, -400);
			TS_ASSERT(obj1.getMapOfMap3().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(5.5) == -400);
			TS_ASSERT(!obj1.containsKey_MapOfMap3(6.5));
			
			obj1.putTo_MapOfMap3(6.5, -500);
			TS_ASSERT(obj1.getMapOfMap3().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(5.5) == -400);
			TS_ASSERT(obj1.containsKey_MapOfMap3(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(6.5) == -500);
			{
				std::map<float, uint32_t> myExternalMap;
				myExternalMap[4.5] = 600;
				myExternalMap[5.5] = 700;
				myExternalMap[6.5] = 800;
			
				obj1.clear_MapOfMap4();
				TS_ASSERT(obj1.getMapOfMap4().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap4());
				TS_ASSERT(!obj1.containsKey_MapOfMap4(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(6.5));
			
				obj1.setMapOfMap4(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap4().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap4());
				TS_ASSERT(obj1.containsKey_MapOfMap4(4.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
				TS_ASSERT(obj1.containsKey_MapOfMap4(5.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(5.5) == 700);
				TS_ASSERT(obj1.containsKey_MapOfMap4(6.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(6.5) == 800);
			
				obj1.clear_MapOfMap4();
				TS_ASSERT(obj1.getMapOfMap4().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap4());
				TS_ASSERT(!obj1.containsKey_MapOfMap4(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(6.5));
			}
			obj1.putTo_MapOfMap4(4.5, 600);
			TS_ASSERT(obj1.getMapOfMap4().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(!obj1.containsKey_MapOfMap4(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap4(6.5));
			
			obj1.putTo_MapOfMap4(5.5, 700);
			TS_ASSERT(obj1.getMapOfMap4().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(5.5) == 700);
			TS_ASSERT(!obj1.containsKey_MapOfMap4(6.5));
			
			obj1.putTo_MapOfMap4(6.5, 800);
			TS_ASSERT(obj1.getMapOfMap4().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(5.5) == 700);
			TS_ASSERT(obj1.containsKey_MapOfMap4(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(6.5) == 800);
			{
				std::map<float, float> myExternalMap;
				myExternalMap[4.5] = 4.5;
				myExternalMap[5.5] = 5.5;
				myExternalMap[6.5] = 6.5;
			
				obj1.clear_MapOfMap5();
				TS_ASSERT(obj1.getMapOfMap5().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap5());
				TS_ASSERT(!obj1.containsKey_MapOfMap5(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(6.5));
			
				obj1.setMapOfMap5(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap5().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap5());
				TS_ASSERT(obj1.containsKey_MapOfMap5(4.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap5(5.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap5(6.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(6.5), 6.5, 1e-5);
			
				obj1.clear_MapOfMap5();
				TS_ASSERT(obj1.getMapOfMap5().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap5());
				TS_ASSERT(!obj1.containsKey_MapOfMap5(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(6.5));
			}
			obj1.putTo_MapOfMap5(4.5, 4.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap5(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap5(6.5));
			
			obj1.putTo_MapOfMap5(5.5, 5.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap5(6.5));
			
			obj1.putTo_MapOfMap5(6.5, 6.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(6.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(6.5), 6.5, 1e-5);
			{
				std::map<float, double> myExternalMap;
				myExternalMap[4.5] = 1.0;
				myExternalMap[5.5] = 2.0;
				myExternalMap[6.5] = 3.0;
			
				obj1.clear_MapOfMap6();
				TS_ASSERT(obj1.getMapOfMap6().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap6());
				TS_ASSERT(!obj1.containsKey_MapOfMap6(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(6.5));
			
				obj1.setMapOfMap6(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap6().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap6());
				TS_ASSERT(obj1.containsKey_MapOfMap6(4.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap6(5.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap6(6.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(6.5), 3.0, 1e-5);
			
				obj1.clear_MapOfMap6();
				TS_ASSERT(obj1.getMapOfMap6().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap6());
				TS_ASSERT(!obj1.containsKey_MapOfMap6(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(6.5));
			}
			obj1.putTo_MapOfMap6(4.5, 1.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap6(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap6(6.5));
			
			obj1.putTo_MapOfMap6(5.5, 2.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap6(6.5));
			
			obj1.putTo_MapOfMap6(6.5, 3.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(6.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(6.5), 3.0, 1e-5);
			{
				std::map<float, std::string> myExternalMap;
				myExternalMap[4.5] = "Hello World!";
				myExternalMap[5.5] = "Hello Solar System!";
				myExternalMap[6.5] = "Hello Milky Way!";
			
				obj1.clear_MapOfMap7();
				TS_ASSERT(obj1.getMapOfMap7().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap7());
				TS_ASSERT(!obj1.containsKey_MapOfMap7(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(6.5));
			
				obj1.setMapOfMap7(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap7().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap7());
				TS_ASSERT(obj1.containsKey_MapOfMap7(4.5));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(4.5), "Hello World!"));
				TS_ASSERT(obj1.containsKey_MapOfMap7(5.5));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(5.5), "Hello Solar System!"));
				TS_ASSERT(obj1.containsKey_MapOfMap7(6.5));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(6.5), "Hello Milky Way!"));
			
				obj1.clear_MapOfMap7();
				TS_ASSERT(obj1.getMapOfMap7().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap7());
				TS_ASSERT(!obj1.containsKey_MapOfMap7(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(6.5));
			}
			obj1.putTo_MapOfMap7(4.5, "Hello World!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(4.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(4.5), "Hello World!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap7(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap7(6.5));
			
			obj1.putTo_MapOfMap7(5.5, "Hello Solar System!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(4.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(4.5), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap7(5.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(5.5), "Hello Solar System!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap7(6.5));
			
			obj1.putTo_MapOfMap7(6.5, "Hello Milky Way!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(4.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(4.5), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap7(5.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(5.5), "Hello Solar System!"));
			TS_ASSERT(obj1.containsKey_MapOfMap7(6.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(6.5), "Hello Milky Way!"));
	
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(4.5) == true);
			TS_ASSERT(obj1.containsKey_MapOfMap1(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(5.5) == false);
			TS_ASSERT(obj1.getMapOfMap2().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(5.5) == 'e');
			TS_ASSERT(obj1.containsKey_MapOfMap2(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(6.5) == 'f');
			TS_ASSERT(obj1.getMapOfMap3().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(5.5) == -400);
			TS_ASSERT(obj1.containsKey_MapOfMap3(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(6.5) == -500);
			TS_ASSERT(obj1.getMapOfMap4().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(5.5) == 700);
			TS_ASSERT(obj1.containsKey_MapOfMap4(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(6.5) == 800);
			TS_ASSERT(obj1.getMapOfMap5().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(6.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(6.5), 6.5, 1e-5);
			TS_ASSERT(obj1.getMapOfMap6().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(6.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(6.5), 3.0, 1e-5);
			TS_ASSERT(obj1.getMapOfMap7().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(4.5) == "Hello World!");
			TS_ASSERT(obj1.containsKey_MapOfMap7(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(5.5) == "Hello Solar System!");
			TS_ASSERT(obj1.containsKey_MapOfMap7(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(6.5) == "Hello Milky Way!");
		}
	
		void testCreateAndCopyObject() {
	
			Test11MapFloat obj1;
			TS_ASSERT(obj1.getMapOfMap1().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getMapOfMap2().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.getMapOfMap3().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.getMapOfMap4().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.getMapOfMap5().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.getMapOfMap6().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.getMapOfMap7().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap7());
	
			Test11MapFloat obj2(obj1);
			TS_ASSERT(obj1.getSize_MapOfMap1() == obj2.getSize_MapOfMap1());
			TS_ASSERT(obj1.isEmpty_MapOfMap1() == obj2.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getSize_MapOfMap2() == obj2.getSize_MapOfMap2());
			TS_ASSERT(obj1.isEmpty_MapOfMap2() == obj2.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.getSize_MapOfMap3() == obj2.getSize_MapOfMap3());
			TS_ASSERT(obj1.isEmpty_MapOfMap3() == obj2.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.getSize_MapOfMap4() == obj2.getSize_MapOfMap4());
			TS_ASSERT(obj1.isEmpty_MapOfMap4() == obj2.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.getSize_MapOfMap5() == obj2.getSize_MapOfMap5());
			TS_ASSERT(obj1.isEmpty_MapOfMap5() == obj2.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.getSize_MapOfMap6() == obj2.getSize_MapOfMap6());
			TS_ASSERT(obj1.isEmpty_MapOfMap6() == obj2.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.getSize_MapOfMap7() == obj2.getSize_MapOfMap7());
			TS_ASSERT(obj1.isEmpty_MapOfMap7() == obj2.isEmpty_MapOfMap7());
	
			{
				std::map<float, bool> myExternalMap;
				myExternalMap[4.5] = true;
				myExternalMap[5.5] = false;
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(5.5));
			
				obj1.setMapOfMap1(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap1().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap1());
				TS_ASSERT(obj1.containsKey_MapOfMap1(4.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap1(4.5) == true);
				TS_ASSERT(obj1.containsKey_MapOfMap1(5.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap1(5.5) == false);
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(5.5));
			}
			obj1.putTo_MapOfMap1(4.5, true);
			TS_ASSERT(obj1.getMapOfMap1().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(4.5) == true);
			TS_ASSERT(!obj1.containsKey_MapOfMap1(5.5));
			
			obj1.putTo_MapOfMap1(5.5, false);
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(4.5) == true);
			TS_ASSERT(obj1.containsKey_MapOfMap1(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(5.5) == false);
			
			{
				std::map<float, char> myExternalMap;
				myExternalMap[4.5] = 'd';
				myExternalMap[5.5] = 'e';
				myExternalMap[6.5] = 'f';
			
				obj1.clear_MapOfMap2();
				TS_ASSERT(obj1.getMapOfMap2().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap2());
				TS_ASSERT(!obj1.containsKey_MapOfMap2(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(6.5));
			
				obj1.setMapOfMap2(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap2().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap2());
				TS_ASSERT(obj1.containsKey_MapOfMap2(4.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
				TS_ASSERT(obj1.containsKey_MapOfMap2(5.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(5.5) == 'e');
				TS_ASSERT(obj1.containsKey_MapOfMap2(6.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(6.5) == 'f');
			
				obj1.clear_MapOfMap2();
				TS_ASSERT(obj1.getMapOfMap2().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap2());
				TS_ASSERT(!obj1.containsKey_MapOfMap2(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(6.5));
			}
			obj1.putTo_MapOfMap2(4.5, 'd');
			TS_ASSERT(obj1.getMapOfMap2().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(!obj1.containsKey_MapOfMap2(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap2(6.5));
			
			obj1.putTo_MapOfMap2(5.5, 'e');
			TS_ASSERT(obj1.getMapOfMap2().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(5.5) == 'e');
			TS_ASSERT(!obj1.containsKey_MapOfMap2(6.5));
			
			obj1.putTo_MapOfMap2(6.5, 'f');
			TS_ASSERT(obj1.getMapOfMap2().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(5.5) == 'e');
			TS_ASSERT(obj1.containsKey_MapOfMap2(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(6.5) == 'f');
			{
				std::map<float, int32_t> myExternalMap;
				myExternalMap[4.5] = -300;
				myExternalMap[5.5] = -400;
				myExternalMap[6.5] = -500;
			
				obj1.clear_MapOfMap3();
				TS_ASSERT(obj1.getMapOfMap3().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap3());
				TS_ASSERT(!obj1.containsKey_MapOfMap3(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(6.5));
			
				obj1.setMapOfMap3(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap3().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap3());
				TS_ASSERT(obj1.containsKey_MapOfMap3(4.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
				TS_ASSERT(obj1.containsKey_MapOfMap3(5.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(5.5) == -400);
				TS_ASSERT(obj1.containsKey_MapOfMap3(6.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(6.5) == -500);
			
				obj1.clear_MapOfMap3();
				TS_ASSERT(obj1.getMapOfMap3().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap3());
				TS_ASSERT(!obj1.containsKey_MapOfMap3(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(6.5));
			}
			obj1.putTo_MapOfMap3(4.5, -300);
			TS_ASSERT(obj1.getMapOfMap3().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(!obj1.containsKey_MapOfMap3(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap3(6.5));
			
			obj1.putTo_MapOfMap3(5.5, -400);
			TS_ASSERT(obj1.getMapOfMap3().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(5.5) == -400);
			TS_ASSERT(!obj1.containsKey_MapOfMap3(6.5));
			
			obj1.putTo_MapOfMap3(6.5, -500);
			TS_ASSERT(obj1.getMapOfMap3().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(5.5) == -400);
			TS_ASSERT(obj1.containsKey_MapOfMap3(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(6.5) == -500);
			{
				std::map<float, uint32_t> myExternalMap;
				myExternalMap[4.5] = 600;
				myExternalMap[5.5] = 700;
				myExternalMap[6.5] = 800;
			
				obj1.clear_MapOfMap4();
				TS_ASSERT(obj1.getMapOfMap4().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap4());
				TS_ASSERT(!obj1.containsKey_MapOfMap4(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(6.5));
			
				obj1.setMapOfMap4(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap4().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap4());
				TS_ASSERT(obj1.containsKey_MapOfMap4(4.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
				TS_ASSERT(obj1.containsKey_MapOfMap4(5.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(5.5) == 700);
				TS_ASSERT(obj1.containsKey_MapOfMap4(6.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(6.5) == 800);
			
				obj1.clear_MapOfMap4();
				TS_ASSERT(obj1.getMapOfMap4().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap4());
				TS_ASSERT(!obj1.containsKey_MapOfMap4(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(6.5));
			}
			obj1.putTo_MapOfMap4(4.5, 600);
			TS_ASSERT(obj1.getMapOfMap4().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(!obj1.containsKey_MapOfMap4(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap4(6.5));
			
			obj1.putTo_MapOfMap4(5.5, 700);
			TS_ASSERT(obj1.getMapOfMap4().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(5.5) == 700);
			TS_ASSERT(!obj1.containsKey_MapOfMap4(6.5));
			
			obj1.putTo_MapOfMap4(6.5, 800);
			TS_ASSERT(obj1.getMapOfMap4().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(5.5) == 700);
			TS_ASSERT(obj1.containsKey_MapOfMap4(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(6.5) == 800);
			{
				std::map<float, float> myExternalMap;
				myExternalMap[4.5] = 4.5;
				myExternalMap[5.5] = 5.5;
				myExternalMap[6.5] = 6.5;
			
				obj1.clear_MapOfMap5();
				TS_ASSERT(obj1.getMapOfMap5().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap5());
				TS_ASSERT(!obj1.containsKey_MapOfMap5(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(6.5));
			
				obj1.setMapOfMap5(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap5().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap5());
				TS_ASSERT(obj1.containsKey_MapOfMap5(4.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap5(5.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap5(6.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(6.5), 6.5, 1e-5);
			
				obj1.clear_MapOfMap5();
				TS_ASSERT(obj1.getMapOfMap5().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap5());
				TS_ASSERT(!obj1.containsKey_MapOfMap5(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(6.5));
			}
			obj1.putTo_MapOfMap5(4.5, 4.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap5(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap5(6.5));
			
			obj1.putTo_MapOfMap5(5.5, 5.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap5(6.5));
			
			obj1.putTo_MapOfMap5(6.5, 6.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(6.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(6.5), 6.5, 1e-5);
			{
				std::map<float, double> myExternalMap;
				myExternalMap[4.5] = 1.0;
				myExternalMap[5.5] = 2.0;
				myExternalMap[6.5] = 3.0;
			
				obj1.clear_MapOfMap6();
				TS_ASSERT(obj1.getMapOfMap6().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap6());
				TS_ASSERT(!obj1.containsKey_MapOfMap6(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(6.5));
			
				obj1.setMapOfMap6(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap6().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap6());
				TS_ASSERT(obj1.containsKey_MapOfMap6(4.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap6(5.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap6(6.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(6.5), 3.0, 1e-5);
			
				obj1.clear_MapOfMap6();
				TS_ASSERT(obj1.getMapOfMap6().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap6());
				TS_ASSERT(!obj1.containsKey_MapOfMap6(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(6.5));
			}
			obj1.putTo_MapOfMap6(4.5, 1.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap6(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap6(6.5));
			
			obj1.putTo_MapOfMap6(5.5, 2.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap6(6.5));
			
			obj1.putTo_MapOfMap6(6.5, 3.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(6.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(6.5), 3.0, 1e-5);
			{
				std::map<float, std::string> myExternalMap;
				myExternalMap[4.5] = "Hello World!";
				myExternalMap[5.5] = "Hello Solar System!";
				myExternalMap[6.5] = "Hello Milky Way!";
			
				obj1.clear_MapOfMap7();
				TS_ASSERT(obj1.getMapOfMap7().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap7());
				TS_ASSERT(!obj1.containsKey_MapOfMap7(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(6.5));
			
				obj1.setMapOfMap7(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap7().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap7());
				TS_ASSERT(obj1.containsKey_MapOfMap7(4.5));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(4.5), "Hello World!"));
				TS_ASSERT(obj1.containsKey_MapOfMap7(5.5));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(5.5), "Hello Solar System!"));
				TS_ASSERT(obj1.containsKey_MapOfMap7(6.5));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(6.5), "Hello Milky Way!"));
			
				obj1.clear_MapOfMap7();
				TS_ASSERT(obj1.getMapOfMap7().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap7());
				TS_ASSERT(!obj1.containsKey_MapOfMap7(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(6.5));
			}
			obj1.putTo_MapOfMap7(4.5, "Hello World!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(4.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(4.5), "Hello World!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap7(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap7(6.5));
			
			obj1.putTo_MapOfMap7(5.5, "Hello Solar System!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(4.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(4.5), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap7(5.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(5.5), "Hello Solar System!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap7(6.5));
			
			obj1.putTo_MapOfMap7(6.5, "Hello Milky Way!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(4.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(4.5), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap7(5.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(5.5), "Hello Solar System!"));
			TS_ASSERT(obj1.containsKey_MapOfMap7(6.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(6.5), "Hello Milky Way!"));
	
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(4.5) == true);
			TS_ASSERT(obj1.containsKey_MapOfMap1(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(5.5) == false);
			TS_ASSERT(obj1.getMapOfMap2().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(5.5) == 'e');
			TS_ASSERT(obj1.containsKey_MapOfMap2(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(6.5) == 'f');
			TS_ASSERT(obj1.getMapOfMap3().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(5.5) == -400);
			TS_ASSERT(obj1.containsKey_MapOfMap3(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(6.5) == -500);
			TS_ASSERT(obj1.getMapOfMap4().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(5.5) == 700);
			TS_ASSERT(obj1.containsKey_MapOfMap4(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(6.5) == 800);
			TS_ASSERT(obj1.getMapOfMap5().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(6.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(6.5), 6.5, 1e-5);
			TS_ASSERT(obj1.getMapOfMap6().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(6.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(6.5), 3.0, 1e-5);
			TS_ASSERT(obj1.getMapOfMap7().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(4.5) == "Hello World!");
			TS_ASSERT(obj1.containsKey_MapOfMap7(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(5.5) == "Hello Solar System!");
			TS_ASSERT(obj1.containsKey_MapOfMap7(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(6.5) == "Hello Milky Way!");
	
			Test11MapFloat obj3(obj1);
			TS_ASSERT(obj1.getSize_MapOfMap1() == obj3.getSize_MapOfMap1());
			TS_ASSERT(obj1.isEmpty_MapOfMap1() == obj3.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getSize_MapOfMap2() == obj3.getSize_MapOfMap2());
			TS_ASSERT(obj1.isEmpty_MapOfMap2() == obj3.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.getSize_MapOfMap3() == obj3.getSize_MapOfMap3());
			TS_ASSERT(obj1.isEmpty_MapOfMap3() == obj3.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.getSize_MapOfMap4() == obj3.getSize_MapOfMap4());
			TS_ASSERT(obj1.isEmpty_MapOfMap4() == obj3.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.getSize_MapOfMap5() == obj3.getSize_MapOfMap5());
			TS_ASSERT(obj1.isEmpty_MapOfMap5() == obj3.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.getSize_MapOfMap6() == obj3.getSize_MapOfMap6());
			TS_ASSERT(obj1.isEmpty_MapOfMap6() == obj3.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.getSize_MapOfMap7() == obj3.getSize_MapOfMap7());
			TS_ASSERT(obj1.isEmpty_MapOfMap7() == obj3.isEmpty_MapOfMap7());
	
			TS_ASSERT(obj3.getMapOfMap1().size() == 2);
			TS_ASSERT(obj3.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj3.isEmpty_MapOfMap1());
			TS_ASSERT(obj3.getValueForKey_MapOfMap1(4.5) == true);
			TS_ASSERT(obj3.containsKey_MapOfMap1(5.5));
			TS_ASSERT(obj3.getValueForKey_MapOfMap1(5.5) == false);
			TS_ASSERT(obj3.getMapOfMap2().size() == 3);
			TS_ASSERT(obj3.getSize_MapOfMap2() == 3);
			TS_ASSERT(!obj3.isEmpty_MapOfMap2());
			TS_ASSERT(obj3.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(obj3.containsKey_MapOfMap2(5.5));
			TS_ASSERT(obj3.getValueForKey_MapOfMap2(5.5) == 'e');
			TS_ASSERT(obj3.containsKey_MapOfMap2(6.5));
			TS_ASSERT(obj3.getValueForKey_MapOfMap2(6.5) == 'f');
			TS_ASSERT(obj3.getMapOfMap3().size() == 3);
			TS_ASSERT(obj3.getSize_MapOfMap3() == 3);
			TS_ASSERT(!obj3.isEmpty_MapOfMap3());
			TS_ASSERT(obj3.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(obj3.containsKey_MapOfMap3(5.5));
			TS_ASSERT(obj3.getValueForKey_MapOfMap3(5.5) == -400);
			TS_ASSERT(obj3.containsKey_MapOfMap3(6.5));
			TS_ASSERT(obj3.getValueForKey_MapOfMap3(6.5) == -500);
			TS_ASSERT(obj3.getMapOfMap4().size() == 3);
			TS_ASSERT(obj3.getSize_MapOfMap4() == 3);
			TS_ASSERT(!obj3.isEmpty_MapOfMap4());
			TS_ASSERT(obj3.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(obj3.containsKey_MapOfMap4(5.5));
			TS_ASSERT(obj3.getValueForKey_MapOfMap4(5.5) == 700);
			TS_ASSERT(obj3.containsKey_MapOfMap4(6.5));
			TS_ASSERT(obj3.getValueForKey_MapOfMap4(6.5) == 800);
			TS_ASSERT(obj3.getMapOfMap5().size() == 3);
			TS_ASSERT(obj3.getSize_MapOfMap5() == 3);
			TS_ASSERT(!obj3.isEmpty_MapOfMap5());
			TS_ASSERT_DELTA(obj3.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(obj3.containsKey_MapOfMap5(5.5));
			TS_ASSERT_DELTA(obj3.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
			TS_ASSERT(obj3.containsKey_MapOfMap5(6.5));
			TS_ASSERT_DELTA(obj3.getValueForKey_MapOfMap5(6.5), 6.5, 1e-5);
			TS_ASSERT(obj3.getMapOfMap6().size() == 3);
			TS_ASSERT(obj3.getSize_MapOfMap6() == 3);
			TS_ASSERT(!obj3.isEmpty_MapOfMap6());
			TS_ASSERT_DELTA(obj3.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(obj3.containsKey_MapOfMap6(5.5));
			TS_ASSERT_DELTA(obj3.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
			TS_ASSERT(obj3.containsKey_MapOfMap6(6.5));
			TS_ASSERT_DELTA(obj3.getValueForKey_MapOfMap6(6.5), 3.0, 1e-5);
			TS_ASSERT(obj3.getMapOfMap7().size() == 3);
			TS_ASSERT(obj3.getSize_MapOfMap7() == 3);
			TS_ASSERT(!obj3.isEmpty_MapOfMap7());
			TS_ASSERT(obj3.getValueForKey_MapOfMap7(4.5) == "Hello World!");
			TS_ASSERT(obj3.containsKey_MapOfMap7(5.5));
			TS_ASSERT(obj3.getValueForKey_MapOfMap7(5.5) == "Hello Solar System!");
			TS_ASSERT(obj3.containsKey_MapOfMap7(6.5));
			TS_ASSERT(obj3.getValueForKey_MapOfMap7(6.5) == "Hello Milky Way!");
	
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
	
			Test11MapFloat obj1;
			TS_ASSERT(obj1.getMapOfMap1().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getMapOfMap2().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.getMapOfMap3().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.getMapOfMap4().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.getMapOfMap5().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.getMapOfMap6().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.getMapOfMap7().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap7());
	
			Test11MapFloat obj2;
			TS_ASSERT(obj2.getMapOfMap1().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap1() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap1());
			TS_ASSERT(obj2.getMapOfMap2().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap2() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap2());
			TS_ASSERT(obj2.getMapOfMap3().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap3() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap3());
			TS_ASSERT(obj2.getMapOfMap4().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap4() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap4());
			TS_ASSERT(obj2.getMapOfMap5().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap5() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap5());
			TS_ASSERT(obj2.getMapOfMap6().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap6() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap6());
			TS_ASSERT(obj2.getMapOfMap7().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap7() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap7());
	
			{
				std::map<float, bool> myExternalMap;
				myExternalMap[4.5] = true;
				myExternalMap[5.5] = false;
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(5.5));
			
				obj1.setMapOfMap1(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap1().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap1());
				TS_ASSERT(obj1.containsKey_MapOfMap1(4.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap1(4.5) == true);
				TS_ASSERT(obj1.containsKey_MapOfMap1(5.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap1(5.5) == false);
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(5.5));
			}
			obj1.putTo_MapOfMap1(4.5, true);
			TS_ASSERT(obj1.getMapOfMap1().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(4.5) == true);
			TS_ASSERT(!obj1.containsKey_MapOfMap1(5.5));
			
			obj1.putTo_MapOfMap1(5.5, false);
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(4.5) == true);
			TS_ASSERT(obj1.containsKey_MapOfMap1(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(5.5) == false);
			
			{
				std::map<float, char> myExternalMap;
				myExternalMap[4.5] = 'd';
				myExternalMap[5.5] = 'e';
				myExternalMap[6.5] = 'f';
			
				obj1.clear_MapOfMap2();
				TS_ASSERT(obj1.getMapOfMap2().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap2());
				TS_ASSERT(!obj1.containsKey_MapOfMap2(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(6.5));
			
				obj1.setMapOfMap2(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap2().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap2());
				TS_ASSERT(obj1.containsKey_MapOfMap2(4.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
				TS_ASSERT(obj1.containsKey_MapOfMap2(5.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(5.5) == 'e');
				TS_ASSERT(obj1.containsKey_MapOfMap2(6.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(6.5) == 'f');
			
				obj1.clear_MapOfMap2();
				TS_ASSERT(obj1.getMapOfMap2().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap2());
				TS_ASSERT(!obj1.containsKey_MapOfMap2(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(6.5));
			}
			obj1.putTo_MapOfMap2(4.5, 'd');
			TS_ASSERT(obj1.getMapOfMap2().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(!obj1.containsKey_MapOfMap2(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap2(6.5));
			
			obj1.putTo_MapOfMap2(5.5, 'e');
			TS_ASSERT(obj1.getMapOfMap2().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(5.5) == 'e');
			TS_ASSERT(!obj1.containsKey_MapOfMap2(6.5));
			
			obj1.putTo_MapOfMap2(6.5, 'f');
			TS_ASSERT(obj1.getMapOfMap2().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(5.5) == 'e');
			TS_ASSERT(obj1.containsKey_MapOfMap2(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(6.5) == 'f');
			{
				std::map<float, int32_t> myExternalMap;
				myExternalMap[4.5] = -300;
				myExternalMap[5.5] = -400;
				myExternalMap[6.5] = -500;
			
				obj1.clear_MapOfMap3();
				TS_ASSERT(obj1.getMapOfMap3().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap3());
				TS_ASSERT(!obj1.containsKey_MapOfMap3(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(6.5));
			
				obj1.setMapOfMap3(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap3().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap3());
				TS_ASSERT(obj1.containsKey_MapOfMap3(4.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
				TS_ASSERT(obj1.containsKey_MapOfMap3(5.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(5.5) == -400);
				TS_ASSERT(obj1.containsKey_MapOfMap3(6.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(6.5) == -500);
			
				obj1.clear_MapOfMap3();
				TS_ASSERT(obj1.getMapOfMap3().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap3());
				TS_ASSERT(!obj1.containsKey_MapOfMap3(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(6.5));
			}
			obj1.putTo_MapOfMap3(4.5, -300);
			TS_ASSERT(obj1.getMapOfMap3().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(!obj1.containsKey_MapOfMap3(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap3(6.5));
			
			obj1.putTo_MapOfMap3(5.5, -400);
			TS_ASSERT(obj1.getMapOfMap3().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(5.5) == -400);
			TS_ASSERT(!obj1.containsKey_MapOfMap3(6.5));
			
			obj1.putTo_MapOfMap3(6.5, -500);
			TS_ASSERT(obj1.getMapOfMap3().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(5.5) == -400);
			TS_ASSERT(obj1.containsKey_MapOfMap3(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(6.5) == -500);
			{
				std::map<float, uint32_t> myExternalMap;
				myExternalMap[4.5] = 600;
				myExternalMap[5.5] = 700;
				myExternalMap[6.5] = 800;
			
				obj1.clear_MapOfMap4();
				TS_ASSERT(obj1.getMapOfMap4().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap4());
				TS_ASSERT(!obj1.containsKey_MapOfMap4(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(6.5));
			
				obj1.setMapOfMap4(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap4().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap4());
				TS_ASSERT(obj1.containsKey_MapOfMap4(4.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
				TS_ASSERT(obj1.containsKey_MapOfMap4(5.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(5.5) == 700);
				TS_ASSERT(obj1.containsKey_MapOfMap4(6.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(6.5) == 800);
			
				obj1.clear_MapOfMap4();
				TS_ASSERT(obj1.getMapOfMap4().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap4());
				TS_ASSERT(!obj1.containsKey_MapOfMap4(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(6.5));
			}
			obj1.putTo_MapOfMap4(4.5, 600);
			TS_ASSERT(obj1.getMapOfMap4().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(!obj1.containsKey_MapOfMap4(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap4(6.5));
			
			obj1.putTo_MapOfMap4(5.5, 700);
			TS_ASSERT(obj1.getMapOfMap4().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(5.5) == 700);
			TS_ASSERT(!obj1.containsKey_MapOfMap4(6.5));
			
			obj1.putTo_MapOfMap4(6.5, 800);
			TS_ASSERT(obj1.getMapOfMap4().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(5.5) == 700);
			TS_ASSERT(obj1.containsKey_MapOfMap4(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(6.5) == 800);
			{
				std::map<float, float> myExternalMap;
				myExternalMap[4.5] = 4.5;
				myExternalMap[5.5] = 5.5;
				myExternalMap[6.5] = 6.5;
			
				obj1.clear_MapOfMap5();
				TS_ASSERT(obj1.getMapOfMap5().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap5());
				TS_ASSERT(!obj1.containsKey_MapOfMap5(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(6.5));
			
				obj1.setMapOfMap5(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap5().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap5());
				TS_ASSERT(obj1.containsKey_MapOfMap5(4.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap5(5.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap5(6.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(6.5), 6.5, 1e-5);
			
				obj1.clear_MapOfMap5();
				TS_ASSERT(obj1.getMapOfMap5().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap5());
				TS_ASSERT(!obj1.containsKey_MapOfMap5(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(6.5));
			}
			obj1.putTo_MapOfMap5(4.5, 4.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap5(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap5(6.5));
			
			obj1.putTo_MapOfMap5(5.5, 5.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap5(6.5));
			
			obj1.putTo_MapOfMap5(6.5, 6.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(6.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(6.5), 6.5, 1e-5);
			{
				std::map<float, double> myExternalMap;
				myExternalMap[4.5] = 1.0;
				myExternalMap[5.5] = 2.0;
				myExternalMap[6.5] = 3.0;
			
				obj1.clear_MapOfMap6();
				TS_ASSERT(obj1.getMapOfMap6().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap6());
				TS_ASSERT(!obj1.containsKey_MapOfMap6(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(6.5));
			
				obj1.setMapOfMap6(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap6().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap6());
				TS_ASSERT(obj1.containsKey_MapOfMap6(4.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap6(5.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap6(6.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(6.5), 3.0, 1e-5);
			
				obj1.clear_MapOfMap6();
				TS_ASSERT(obj1.getMapOfMap6().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap6());
				TS_ASSERT(!obj1.containsKey_MapOfMap6(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(6.5));
			}
			obj1.putTo_MapOfMap6(4.5, 1.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap6(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap6(6.5));
			
			obj1.putTo_MapOfMap6(5.5, 2.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap6(6.5));
			
			obj1.putTo_MapOfMap6(6.5, 3.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(6.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(6.5), 3.0, 1e-5);
			{
				std::map<float, std::string> myExternalMap;
				myExternalMap[4.5] = "Hello World!";
				myExternalMap[5.5] = "Hello Solar System!";
				myExternalMap[6.5] = "Hello Milky Way!";
			
				obj1.clear_MapOfMap7();
				TS_ASSERT(obj1.getMapOfMap7().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap7());
				TS_ASSERT(!obj1.containsKey_MapOfMap7(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(6.5));
			
				obj1.setMapOfMap7(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap7().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap7());
				TS_ASSERT(obj1.containsKey_MapOfMap7(4.5));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(4.5), "Hello World!"));
				TS_ASSERT(obj1.containsKey_MapOfMap7(5.5));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(5.5), "Hello Solar System!"));
				TS_ASSERT(obj1.containsKey_MapOfMap7(6.5));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(6.5), "Hello Milky Way!"));
			
				obj1.clear_MapOfMap7();
				TS_ASSERT(obj1.getMapOfMap7().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap7());
				TS_ASSERT(!obj1.containsKey_MapOfMap7(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(6.5));
			}
			obj1.putTo_MapOfMap7(4.5, "Hello World!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(4.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(4.5), "Hello World!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap7(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap7(6.5));
			
			obj1.putTo_MapOfMap7(5.5, "Hello Solar System!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(4.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(4.5), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap7(5.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(5.5), "Hello Solar System!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap7(6.5));
			
			obj1.putTo_MapOfMap7(6.5, "Hello Milky Way!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(4.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(4.5), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap7(5.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(5.5), "Hello Solar System!"));
			TS_ASSERT(obj1.containsKey_MapOfMap7(6.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(6.5), "Hello Milky Way!"));
	
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(4.5) == true);
			TS_ASSERT(obj1.containsKey_MapOfMap1(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(5.5) == false);
			TS_ASSERT(obj1.getMapOfMap2().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(5.5) == 'e');
			TS_ASSERT(obj1.containsKey_MapOfMap2(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(6.5) == 'f');
			TS_ASSERT(obj1.getMapOfMap3().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(5.5) == -400);
			TS_ASSERT(obj1.containsKey_MapOfMap3(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(6.5) == -500);
			TS_ASSERT(obj1.getMapOfMap4().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(5.5) == 700);
			TS_ASSERT(obj1.containsKey_MapOfMap4(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(6.5) == 800);
			TS_ASSERT(obj1.getMapOfMap5().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(6.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(6.5), 6.5, 1e-5);
			TS_ASSERT(obj1.getMapOfMap6().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(6.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(6.5), 3.0, 1e-5);
			TS_ASSERT(obj1.getMapOfMap7().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(4.5) == "Hello World!");
			TS_ASSERT(obj1.containsKey_MapOfMap7(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(5.5) == "Hello Solar System!");
			TS_ASSERT(obj1.containsKey_MapOfMap7(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(6.5) == "Hello Milky Way!");
	
			obj2 = obj1;
			TS_ASSERT(obj1.getSize_MapOfMap1() == obj2.getSize_MapOfMap1());
			TS_ASSERT(obj1.isEmpty_MapOfMap1() == obj2.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getSize_MapOfMap2() == obj2.getSize_MapOfMap2());
			TS_ASSERT(obj1.isEmpty_MapOfMap2() == obj2.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.getSize_MapOfMap3() == obj2.getSize_MapOfMap3());
			TS_ASSERT(obj1.isEmpty_MapOfMap3() == obj2.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.getSize_MapOfMap4() == obj2.getSize_MapOfMap4());
			TS_ASSERT(obj1.isEmpty_MapOfMap4() == obj2.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.getSize_MapOfMap5() == obj2.getSize_MapOfMap5());
			TS_ASSERT(obj1.isEmpty_MapOfMap5() == obj2.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.getSize_MapOfMap6() == obj2.getSize_MapOfMap6());
			TS_ASSERT(obj1.isEmpty_MapOfMap6() == obj2.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.getSize_MapOfMap7() == obj2.getSize_MapOfMap7());
			TS_ASSERT(obj1.isEmpty_MapOfMap7() == obj2.isEmpty_MapOfMap7());
	
			TS_ASSERT(obj2.getMapOfMap1().size() == 2);
			TS_ASSERT(obj2.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj2.isEmpty_MapOfMap1());
			TS_ASSERT(obj2.getValueForKey_MapOfMap1(4.5) == true);
			TS_ASSERT(obj2.containsKey_MapOfMap1(5.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap1(5.5) == false);
			TS_ASSERT(obj2.getMapOfMap2().size() == 3);
			TS_ASSERT(obj2.getSize_MapOfMap2() == 3);
			TS_ASSERT(!obj2.isEmpty_MapOfMap2());
			TS_ASSERT(obj2.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(obj2.containsKey_MapOfMap2(5.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap2(5.5) == 'e');
			TS_ASSERT(obj2.containsKey_MapOfMap2(6.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap2(6.5) == 'f');
			TS_ASSERT(obj2.getMapOfMap3().size() == 3);
			TS_ASSERT(obj2.getSize_MapOfMap3() == 3);
			TS_ASSERT(!obj2.isEmpty_MapOfMap3());
			TS_ASSERT(obj2.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(obj2.containsKey_MapOfMap3(5.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap3(5.5) == -400);
			TS_ASSERT(obj2.containsKey_MapOfMap3(6.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap3(6.5) == -500);
			TS_ASSERT(obj2.getMapOfMap4().size() == 3);
			TS_ASSERT(obj2.getSize_MapOfMap4() == 3);
			TS_ASSERT(!obj2.isEmpty_MapOfMap4());
			TS_ASSERT(obj2.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(obj2.containsKey_MapOfMap4(5.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap4(5.5) == 700);
			TS_ASSERT(obj2.containsKey_MapOfMap4(6.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap4(6.5) == 800);
			TS_ASSERT(obj2.getMapOfMap5().size() == 3);
			TS_ASSERT(obj2.getSize_MapOfMap5() == 3);
			TS_ASSERT(!obj2.isEmpty_MapOfMap5());
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(obj2.containsKey_MapOfMap5(5.5));
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
			TS_ASSERT(obj2.containsKey_MapOfMap5(6.5));
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap5(6.5), 6.5, 1e-5);
			TS_ASSERT(obj2.getMapOfMap6().size() == 3);
			TS_ASSERT(obj2.getSize_MapOfMap6() == 3);
			TS_ASSERT(!obj2.isEmpty_MapOfMap6());
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(obj2.containsKey_MapOfMap6(5.5));
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
			TS_ASSERT(obj2.containsKey_MapOfMap6(6.5));
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap6(6.5), 3.0, 1e-5);
			TS_ASSERT(obj2.getMapOfMap7().size() == 3);
			TS_ASSERT(obj2.getSize_MapOfMap7() == 3);
			TS_ASSERT(!obj2.isEmpty_MapOfMap7());
			TS_ASSERT(obj2.getValueForKey_MapOfMap7(4.5) == "Hello World!");
			TS_ASSERT(obj2.containsKey_MapOfMap7(5.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap7(5.5) == "Hello Solar System!");
			TS_ASSERT(obj2.containsKey_MapOfMap7(6.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap7(6.5) == "Hello Milky Way!");
	
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
	
			Test11MapFloat obj1;
			TS_ASSERT(obj1.getMapOfMap1().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getMapOfMap2().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.getMapOfMap3().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.getMapOfMap4().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.getMapOfMap5().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.getMapOfMap6().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.getMapOfMap7().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap7());
	
			Test11MapFloat obj2;
			TS_ASSERT(obj2.getMapOfMap1().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap1() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap1());
			TS_ASSERT(obj2.getMapOfMap2().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap2() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap2());
			TS_ASSERT(obj2.getMapOfMap3().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap3() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap3());
			TS_ASSERT(obj2.getMapOfMap4().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap4() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap4());
			TS_ASSERT(obj2.getMapOfMap5().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap5() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap5());
			TS_ASSERT(obj2.getMapOfMap6().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap6() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap6());
			TS_ASSERT(obj2.getMapOfMap7().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap7() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap7());
	
			{
				std::map<float, bool> myExternalMap;
				myExternalMap[4.5] = true;
				myExternalMap[5.5] = false;
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(5.5));
			
				obj1.setMapOfMap1(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap1().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap1());
				TS_ASSERT(obj1.containsKey_MapOfMap1(4.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap1(4.5) == true);
				TS_ASSERT(obj1.containsKey_MapOfMap1(5.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap1(5.5) == false);
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(5.5));
			}
			obj1.putTo_MapOfMap1(4.5, true);
			TS_ASSERT(obj1.getMapOfMap1().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(4.5) == true);
			TS_ASSERT(!obj1.containsKey_MapOfMap1(5.5));
			
			obj1.putTo_MapOfMap1(5.5, false);
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(4.5) == true);
			TS_ASSERT(obj1.containsKey_MapOfMap1(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(5.5) == false);
			
			{
				std::map<float, char> myExternalMap;
				myExternalMap[4.5] = 'd';
				myExternalMap[5.5] = 'e';
				myExternalMap[6.5] = 'f';
			
				obj1.clear_MapOfMap2();
				TS_ASSERT(obj1.getMapOfMap2().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap2());
				TS_ASSERT(!obj1.containsKey_MapOfMap2(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(6.5));
			
				obj1.setMapOfMap2(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap2().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap2());
				TS_ASSERT(obj1.containsKey_MapOfMap2(4.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
				TS_ASSERT(obj1.containsKey_MapOfMap2(5.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(5.5) == 'e');
				TS_ASSERT(obj1.containsKey_MapOfMap2(6.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(6.5) == 'f');
			
				obj1.clear_MapOfMap2();
				TS_ASSERT(obj1.getMapOfMap2().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap2());
				TS_ASSERT(!obj1.containsKey_MapOfMap2(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(6.5));
			}
			obj1.putTo_MapOfMap2(4.5, 'd');
			TS_ASSERT(obj1.getMapOfMap2().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(!obj1.containsKey_MapOfMap2(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap2(6.5));
			
			obj1.putTo_MapOfMap2(5.5, 'e');
			TS_ASSERT(obj1.getMapOfMap2().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(5.5) == 'e');
			TS_ASSERT(!obj1.containsKey_MapOfMap2(6.5));
			
			obj1.putTo_MapOfMap2(6.5, 'f');
			TS_ASSERT(obj1.getMapOfMap2().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(5.5) == 'e');
			TS_ASSERT(obj1.containsKey_MapOfMap2(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(6.5) == 'f');
			{
				std::map<float, int32_t> myExternalMap;
				myExternalMap[4.5] = -300;
				myExternalMap[5.5] = -400;
				myExternalMap[6.5] = -500;
			
				obj1.clear_MapOfMap3();
				TS_ASSERT(obj1.getMapOfMap3().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap3());
				TS_ASSERT(!obj1.containsKey_MapOfMap3(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(6.5));
			
				obj1.setMapOfMap3(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap3().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap3());
				TS_ASSERT(obj1.containsKey_MapOfMap3(4.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
				TS_ASSERT(obj1.containsKey_MapOfMap3(5.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(5.5) == -400);
				TS_ASSERT(obj1.containsKey_MapOfMap3(6.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(6.5) == -500);
			
				obj1.clear_MapOfMap3();
				TS_ASSERT(obj1.getMapOfMap3().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap3());
				TS_ASSERT(!obj1.containsKey_MapOfMap3(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(6.5));
			}
			obj1.putTo_MapOfMap3(4.5, -300);
			TS_ASSERT(obj1.getMapOfMap3().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(!obj1.containsKey_MapOfMap3(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap3(6.5));
			
			obj1.putTo_MapOfMap3(5.5, -400);
			TS_ASSERT(obj1.getMapOfMap3().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(5.5) == -400);
			TS_ASSERT(!obj1.containsKey_MapOfMap3(6.5));
			
			obj1.putTo_MapOfMap3(6.5, -500);
			TS_ASSERT(obj1.getMapOfMap3().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(5.5) == -400);
			TS_ASSERT(obj1.containsKey_MapOfMap3(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(6.5) == -500);
			{
				std::map<float, uint32_t> myExternalMap;
				myExternalMap[4.5] = 600;
				myExternalMap[5.5] = 700;
				myExternalMap[6.5] = 800;
			
				obj1.clear_MapOfMap4();
				TS_ASSERT(obj1.getMapOfMap4().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap4());
				TS_ASSERT(!obj1.containsKey_MapOfMap4(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(6.5));
			
				obj1.setMapOfMap4(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap4().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap4());
				TS_ASSERT(obj1.containsKey_MapOfMap4(4.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
				TS_ASSERT(obj1.containsKey_MapOfMap4(5.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(5.5) == 700);
				TS_ASSERT(obj1.containsKey_MapOfMap4(6.5));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(6.5) == 800);
			
				obj1.clear_MapOfMap4();
				TS_ASSERT(obj1.getMapOfMap4().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap4());
				TS_ASSERT(!obj1.containsKey_MapOfMap4(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(6.5));
			}
			obj1.putTo_MapOfMap4(4.5, 600);
			TS_ASSERT(obj1.getMapOfMap4().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(!obj1.containsKey_MapOfMap4(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap4(6.5));
			
			obj1.putTo_MapOfMap4(5.5, 700);
			TS_ASSERT(obj1.getMapOfMap4().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(5.5) == 700);
			TS_ASSERT(!obj1.containsKey_MapOfMap4(6.5));
			
			obj1.putTo_MapOfMap4(6.5, 800);
			TS_ASSERT(obj1.getMapOfMap4().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(4.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(5.5) == 700);
			TS_ASSERT(obj1.containsKey_MapOfMap4(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(6.5) == 800);
			{
				std::map<float, float> myExternalMap;
				myExternalMap[4.5] = 4.5;
				myExternalMap[5.5] = 5.5;
				myExternalMap[6.5] = 6.5;
			
				obj1.clear_MapOfMap5();
				TS_ASSERT(obj1.getMapOfMap5().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap5());
				TS_ASSERT(!obj1.containsKey_MapOfMap5(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(6.5));
			
				obj1.setMapOfMap5(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap5().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap5());
				TS_ASSERT(obj1.containsKey_MapOfMap5(4.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap5(5.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap5(6.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(6.5), 6.5, 1e-5);
			
				obj1.clear_MapOfMap5();
				TS_ASSERT(obj1.getMapOfMap5().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap5());
				TS_ASSERT(!obj1.containsKey_MapOfMap5(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(6.5));
			}
			obj1.putTo_MapOfMap5(4.5, 4.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap5(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap5(6.5));
			
			obj1.putTo_MapOfMap5(5.5, 5.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap5(6.5));
			
			obj1.putTo_MapOfMap5(6.5, 6.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(6.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(6.5), 6.5, 1e-5);
			{
				std::map<float, double> myExternalMap;
				myExternalMap[4.5] = 1.0;
				myExternalMap[5.5] = 2.0;
				myExternalMap[6.5] = 3.0;
			
				obj1.clear_MapOfMap6();
				TS_ASSERT(obj1.getMapOfMap6().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap6());
				TS_ASSERT(!obj1.containsKey_MapOfMap6(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(6.5));
			
				obj1.setMapOfMap6(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap6().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap6());
				TS_ASSERT(obj1.containsKey_MapOfMap6(4.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap6(5.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap6(6.5));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(6.5), 3.0, 1e-5);
			
				obj1.clear_MapOfMap6();
				TS_ASSERT(obj1.getMapOfMap6().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap6());
				TS_ASSERT(!obj1.containsKey_MapOfMap6(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(6.5));
			}
			obj1.putTo_MapOfMap6(4.5, 1.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap6(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap6(6.5));
			
			obj1.putTo_MapOfMap6(5.5, 2.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap6(6.5));
			
			obj1.putTo_MapOfMap6(6.5, 3.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(4.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(6.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(6.5), 3.0, 1e-5);
			{
				std::map<float, std::string> myExternalMap;
				myExternalMap[4.5] = "Hello World!";
				myExternalMap[5.5] = "Hello Solar System!";
				myExternalMap[6.5] = "Hello Milky Way!";
			
				obj1.clear_MapOfMap7();
				TS_ASSERT(obj1.getMapOfMap7().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap7());
				TS_ASSERT(!obj1.containsKey_MapOfMap7(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(6.5));
			
				obj1.setMapOfMap7(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap7().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap7());
				TS_ASSERT(obj1.containsKey_MapOfMap7(4.5));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(4.5), "Hello World!"));
				TS_ASSERT(obj1.containsKey_MapOfMap7(5.5));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(5.5), "Hello Solar System!"));
				TS_ASSERT(obj1.containsKey_MapOfMap7(6.5));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(6.5), "Hello Milky Way!"));
			
				obj1.clear_MapOfMap7();
				TS_ASSERT(obj1.getMapOfMap7().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap7());
				TS_ASSERT(!obj1.containsKey_MapOfMap7(4.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(5.5));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(6.5));
			}
			obj1.putTo_MapOfMap7(4.5, "Hello World!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(4.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(4.5), "Hello World!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap7(5.5));
			TS_ASSERT(!obj1.containsKey_MapOfMap7(6.5));
			
			obj1.putTo_MapOfMap7(5.5, "Hello Solar System!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(4.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(4.5), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap7(5.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(5.5), "Hello Solar System!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap7(6.5));
			
			obj1.putTo_MapOfMap7(6.5, "Hello Milky Way!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(4.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(4.5), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap7(5.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(5.5), "Hello Solar System!"));
			TS_ASSERT(obj1.containsKey_MapOfMap7(6.5));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(6.5), "Hello Milky Way!"));
	
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(4.5) == true);
			TS_ASSERT(obj1.containsKey_MapOfMap1(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(5.5) == false);
			TS_ASSERT(obj1.getMapOfMap2().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(5.5) == 'e');
			TS_ASSERT(obj1.containsKey_MapOfMap2(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(6.5) == 'f');
			TS_ASSERT(obj1.getMapOfMap3().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(5.5) == -400);
			TS_ASSERT(obj1.containsKey_MapOfMap3(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(6.5) == -500);
			TS_ASSERT(obj1.getMapOfMap4().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(5.5) == 700);
			TS_ASSERT(obj1.containsKey_MapOfMap4(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(6.5) == 800);
			TS_ASSERT(obj1.getMapOfMap5().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(6.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(6.5), 6.5, 1e-5);
			TS_ASSERT(obj1.getMapOfMap6().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(5.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(6.5));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(6.5), 3.0, 1e-5);
			TS_ASSERT(obj1.getMapOfMap7().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(4.5) == "Hello World!");
			TS_ASSERT(obj1.containsKey_MapOfMap7(5.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(5.5) == "Hello Solar System!");
			TS_ASSERT(obj1.containsKey_MapOfMap7(6.5));
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(6.5) == "Hello Milky Way!");
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getSize_MapOfMap1() == obj2.getSize_MapOfMap1());
			TS_ASSERT(obj1.isEmpty_MapOfMap1() == obj2.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getSize_MapOfMap2() == obj2.getSize_MapOfMap2());
			TS_ASSERT(obj1.isEmpty_MapOfMap2() == obj2.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.getSize_MapOfMap3() == obj2.getSize_MapOfMap3());
			TS_ASSERT(obj1.isEmpty_MapOfMap3() == obj2.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.getSize_MapOfMap4() == obj2.getSize_MapOfMap4());
			TS_ASSERT(obj1.isEmpty_MapOfMap4() == obj2.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.getSize_MapOfMap5() == obj2.getSize_MapOfMap5());
			TS_ASSERT(obj1.isEmpty_MapOfMap5() == obj2.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.getSize_MapOfMap6() == obj2.getSize_MapOfMap6());
			TS_ASSERT(obj1.isEmpty_MapOfMap6() == obj2.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.getSize_MapOfMap7() == obj2.getSize_MapOfMap7());
			TS_ASSERT(obj1.isEmpty_MapOfMap7() == obj2.isEmpty_MapOfMap7());
	
			TS_ASSERT(obj2.getMapOfMap1().size() == 2);
			TS_ASSERT(obj2.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj2.isEmpty_MapOfMap1());
			TS_ASSERT(obj2.getValueForKey_MapOfMap1(4.5) == true);
			TS_ASSERT(obj2.containsKey_MapOfMap1(5.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap1(5.5) == false);
			TS_ASSERT(obj2.getMapOfMap2().size() == 3);
			TS_ASSERT(obj2.getSize_MapOfMap2() == 3);
			TS_ASSERT(!obj2.isEmpty_MapOfMap2());
			TS_ASSERT(obj2.getValueForKey_MapOfMap2(4.5) == 'd');
			TS_ASSERT(obj2.containsKey_MapOfMap2(5.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap2(5.5) == 'e');
			TS_ASSERT(obj2.containsKey_MapOfMap2(6.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap2(6.5) == 'f');
			TS_ASSERT(obj2.getMapOfMap3().size() == 3);
			TS_ASSERT(obj2.getSize_MapOfMap3() == 3);
			TS_ASSERT(!obj2.isEmpty_MapOfMap3());
			TS_ASSERT(obj2.getValueForKey_MapOfMap3(4.5) == -300);
			TS_ASSERT(obj2.containsKey_MapOfMap3(5.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap3(5.5) == -400);
			TS_ASSERT(obj2.containsKey_MapOfMap3(6.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap3(6.5) == -500);
			TS_ASSERT(obj2.getMapOfMap4().size() == 3);
			TS_ASSERT(obj2.getSize_MapOfMap4() == 3);
			TS_ASSERT(!obj2.isEmpty_MapOfMap4());
			TS_ASSERT(obj2.getValueForKey_MapOfMap4(4.5) == 600);
			TS_ASSERT(obj2.containsKey_MapOfMap4(5.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap4(5.5) == 700);
			TS_ASSERT(obj2.containsKey_MapOfMap4(6.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap4(6.5) == 800);
			TS_ASSERT(obj2.getMapOfMap5().size() == 3);
			TS_ASSERT(obj2.getSize_MapOfMap5() == 3);
			TS_ASSERT(!obj2.isEmpty_MapOfMap5());
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap5(4.5), 4.5, 1e-5);
			TS_ASSERT(obj2.containsKey_MapOfMap5(5.5));
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap5(5.5), 5.5, 1e-5);
			TS_ASSERT(obj2.containsKey_MapOfMap5(6.5));
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap5(6.5), 6.5, 1e-5);
			TS_ASSERT(obj2.getMapOfMap6().size() == 3);
			TS_ASSERT(obj2.getSize_MapOfMap6() == 3);
			TS_ASSERT(!obj2.isEmpty_MapOfMap6());
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap6(4.5), 1.0, 1e-5);
			TS_ASSERT(obj2.containsKey_MapOfMap6(5.5));
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap6(5.5), 2.0, 1e-5);
			TS_ASSERT(obj2.containsKey_MapOfMap6(6.5));
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap6(6.5), 3.0, 1e-5);
			TS_ASSERT(obj2.getMapOfMap7().size() == 3);
			TS_ASSERT(obj2.getSize_MapOfMap7() == 3);
			TS_ASSERT(!obj2.isEmpty_MapOfMap7());
			TS_ASSERT(obj2.getValueForKey_MapOfMap7(4.5) == "Hello World!");
			TS_ASSERT(obj2.containsKey_MapOfMap7(5.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap7(5.5) == "Hello Solar System!");
			TS_ASSERT(obj2.containsKey_MapOfMap7(6.5));
			TS_ASSERT(obj2.getValueForKey_MapOfMap7(6.5) == "Hello Milky Way!");
	
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*TEST11MAPFLOAT_TESTSUITE_H*/
