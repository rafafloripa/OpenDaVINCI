/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef TEST11MAPBOOL_TESTSUITE_H
#define TEST11MAPBOOL_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

// core/platform.h must be included to setup platform-dependent header files and configurations.
#include "core/platform.h"
#include "core/strings/StringToolbox.h"

#include "GeneratedHeaders_Test11.h"


class Test11MapBool_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
	
			Test11MapBool obj1;
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
				std::map<bool, bool> myExternalMap;
				myExternalMap[true] = true;
				myExternalMap[false] = false;
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(false));
			
				obj1.setMapOfMap1(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap1().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap1());
				TS_ASSERT(obj1.containsKey_MapOfMap1(true));
				TS_ASSERT(obj1.getValueForKey_MapOfMap1(true) == true);
				TS_ASSERT(obj1.containsKey_MapOfMap1(false));
				TS_ASSERT(obj1.getValueForKey_MapOfMap1(false) == false);
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(false));
			}
			obj1.putTo_MapOfMap1(true, true);
			TS_ASSERT(obj1.getMapOfMap1().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(true) == true);
			TS_ASSERT(!obj1.containsKey_MapOfMap1(false));
			
			obj1.putTo_MapOfMap1(false, false);
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(true) == true);
			TS_ASSERT(obj1.containsKey_MapOfMap1(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(false) == false);
			
			{
				std::map<bool, char> myExternalMap;
				myExternalMap[true] = 'd';
				myExternalMap[false] = 'e';
			
				obj1.clear_MapOfMap2();
				TS_ASSERT(obj1.getMapOfMap2().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap2());
				TS_ASSERT(!obj1.containsKey_MapOfMap2(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(false));
			
				obj1.setMapOfMap2(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap2().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap2());
				TS_ASSERT(obj1.containsKey_MapOfMap2(true));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(true) == 'd');
				TS_ASSERT(obj1.containsKey_MapOfMap2(false));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(false) == 'e');
			
				obj1.clear_MapOfMap2();
				TS_ASSERT(obj1.getMapOfMap2().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap2());
				TS_ASSERT(!obj1.containsKey_MapOfMap2(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(false));
			}
			obj1.putTo_MapOfMap2(true, 'd');
			TS_ASSERT(obj1.getMapOfMap2().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(true) == 'd');
			TS_ASSERT(!obj1.containsKey_MapOfMap2(false));
			
			obj1.putTo_MapOfMap2(false, 'e');
			TS_ASSERT(obj1.getMapOfMap2().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(true) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(false) == 'e');
			
			{
				std::map<bool, int32_t> myExternalMap;
				myExternalMap[true] = -300;
				myExternalMap[false] = -400;
			
				obj1.clear_MapOfMap3();
				TS_ASSERT(obj1.getMapOfMap3().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap3());
				TS_ASSERT(!obj1.containsKey_MapOfMap3(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(false));
			
				obj1.setMapOfMap3(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap3().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap3());
				TS_ASSERT(obj1.containsKey_MapOfMap3(true));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(true) == -300);
				TS_ASSERT(obj1.containsKey_MapOfMap3(false));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(false) == -400);
			
				obj1.clear_MapOfMap3();
				TS_ASSERT(obj1.getMapOfMap3().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap3());
				TS_ASSERT(!obj1.containsKey_MapOfMap3(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(false));
			}
			obj1.putTo_MapOfMap3(true, -300);
			TS_ASSERT(obj1.getMapOfMap3().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(true) == -300);
			TS_ASSERT(!obj1.containsKey_MapOfMap3(false));
			
			obj1.putTo_MapOfMap3(false, -400);
			TS_ASSERT(obj1.getMapOfMap3().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(true) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(false) == -400);
			
			{
				std::map<bool, uint32_t> myExternalMap;
				myExternalMap[true] = 600;
				myExternalMap[false] = 700;
			
				obj1.clear_MapOfMap4();
				TS_ASSERT(obj1.getMapOfMap4().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap4());
				TS_ASSERT(!obj1.containsKey_MapOfMap4(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(false));
			
				obj1.setMapOfMap4(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap4().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap4());
				TS_ASSERT(obj1.containsKey_MapOfMap4(true));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(true) == 600);
				TS_ASSERT(obj1.containsKey_MapOfMap4(false));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(false) == 700);
			
				obj1.clear_MapOfMap4();
				TS_ASSERT(obj1.getMapOfMap4().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap4());
				TS_ASSERT(!obj1.containsKey_MapOfMap4(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(false));
			}
			obj1.putTo_MapOfMap4(true, 600);
			TS_ASSERT(obj1.getMapOfMap4().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(true) == 600);
			TS_ASSERT(!obj1.containsKey_MapOfMap4(false));
			
			obj1.putTo_MapOfMap4(false, 700);
			TS_ASSERT(obj1.getMapOfMap4().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(true) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(false) == 700);
			
			{
				std::map<bool, float> myExternalMap;
				myExternalMap[true] = 4.5;
				myExternalMap[false] = 5.5;
			
				obj1.clear_MapOfMap5();
				TS_ASSERT(obj1.getMapOfMap5().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap5());
				TS_ASSERT(!obj1.containsKey_MapOfMap5(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(false));
			
				obj1.setMapOfMap5(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap5().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap5());
				TS_ASSERT(obj1.containsKey_MapOfMap5(true));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap5(false));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(false), 5.5, 1e-5);
			
				obj1.clear_MapOfMap5();
				TS_ASSERT(obj1.getMapOfMap5().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap5());
				TS_ASSERT(!obj1.containsKey_MapOfMap5(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(false));
			}
			obj1.putTo_MapOfMap5(true, 4.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(true));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap5(false));
			
			obj1.putTo_MapOfMap5(false, 5.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(true));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(false));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(false), 5.5, 1e-5);
			
			{
				std::map<bool, double> myExternalMap;
				myExternalMap[true] = 1.0;
				myExternalMap[false] = 2.0;
			
				obj1.clear_MapOfMap6();
				TS_ASSERT(obj1.getMapOfMap6().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap6());
				TS_ASSERT(!obj1.containsKey_MapOfMap6(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(false));
			
				obj1.setMapOfMap6(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap6().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap6());
				TS_ASSERT(obj1.containsKey_MapOfMap6(true));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap6(false));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(false), 2.0, 1e-5);
			
				obj1.clear_MapOfMap6();
				TS_ASSERT(obj1.getMapOfMap6().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap6());
				TS_ASSERT(!obj1.containsKey_MapOfMap6(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(false));
			}
			obj1.putTo_MapOfMap6(true, 1.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(true));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap6(false));
			
			obj1.putTo_MapOfMap6(false, 2.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(true));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(false));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(false), 2.0, 1e-5);
			
			{
				std::map<bool, std::string> myExternalMap;
				myExternalMap[true] = "Hello World!";
				myExternalMap[false] = "Hello Solar System!";
			
				obj1.clear_MapOfMap7();
				TS_ASSERT(obj1.getMapOfMap7().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap7());
				TS_ASSERT(!obj1.containsKey_MapOfMap7(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(false));
			
				obj1.setMapOfMap7(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap7().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap7());
				TS_ASSERT(obj1.containsKey_MapOfMap7(true));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(true), "Hello World!"));
				TS_ASSERT(obj1.containsKey_MapOfMap7(false));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(false), "Hello Solar System!"));
			
				obj1.clear_MapOfMap7();
				TS_ASSERT(obj1.getMapOfMap7().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap7());
				TS_ASSERT(!obj1.containsKey_MapOfMap7(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(false));
			}
			obj1.putTo_MapOfMap7(true, "Hello World!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(true));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(true), "Hello World!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap7(false));
			
			obj1.putTo_MapOfMap7(false, "Hello Solar System!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(true));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(true), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap7(false));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(false), "Hello Solar System!"));
			
	
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(true) == true);
			TS_ASSERT(obj1.containsKey_MapOfMap1(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(false) == false);
			TS_ASSERT(obj1.getMapOfMap2().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(true) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(false) == 'e');
			TS_ASSERT(obj1.getMapOfMap3().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(true) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(false) == -400);
			TS_ASSERT(obj1.getMapOfMap4().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(true) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(false) == 700);
			TS_ASSERT(obj1.getMapOfMap5().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(false));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(false), 5.5, 1e-5);
			TS_ASSERT(obj1.getMapOfMap6().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(false));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(false), 2.0, 1e-5);
			TS_ASSERT(obj1.getMapOfMap7().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(true) == "Hello World!");
			TS_ASSERT(obj1.containsKey_MapOfMap7(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(false) == "Hello Solar System!");
		}
	
		void testCreateAndCopyObject() {
	
			Test11MapBool obj1;
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
	
			Test11MapBool obj2(obj1);
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
				std::map<bool, bool> myExternalMap;
				myExternalMap[true] = true;
				myExternalMap[false] = false;
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(false));
			
				obj1.setMapOfMap1(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap1().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap1());
				TS_ASSERT(obj1.containsKey_MapOfMap1(true));
				TS_ASSERT(obj1.getValueForKey_MapOfMap1(true) == true);
				TS_ASSERT(obj1.containsKey_MapOfMap1(false));
				TS_ASSERT(obj1.getValueForKey_MapOfMap1(false) == false);
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(false));
			}
			obj1.putTo_MapOfMap1(true, true);
			TS_ASSERT(obj1.getMapOfMap1().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(true) == true);
			TS_ASSERT(!obj1.containsKey_MapOfMap1(false));
			
			obj1.putTo_MapOfMap1(false, false);
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(true) == true);
			TS_ASSERT(obj1.containsKey_MapOfMap1(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(false) == false);
			
			{
				std::map<bool, char> myExternalMap;
				myExternalMap[true] = 'd';
				myExternalMap[false] = 'e';
			
				obj1.clear_MapOfMap2();
				TS_ASSERT(obj1.getMapOfMap2().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap2());
				TS_ASSERT(!obj1.containsKey_MapOfMap2(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(false));
			
				obj1.setMapOfMap2(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap2().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap2());
				TS_ASSERT(obj1.containsKey_MapOfMap2(true));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(true) == 'd');
				TS_ASSERT(obj1.containsKey_MapOfMap2(false));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(false) == 'e');
			
				obj1.clear_MapOfMap2();
				TS_ASSERT(obj1.getMapOfMap2().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap2());
				TS_ASSERT(!obj1.containsKey_MapOfMap2(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(false));
			}
			obj1.putTo_MapOfMap2(true, 'd');
			TS_ASSERT(obj1.getMapOfMap2().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(true) == 'd');
			TS_ASSERT(!obj1.containsKey_MapOfMap2(false));
			
			obj1.putTo_MapOfMap2(false, 'e');
			TS_ASSERT(obj1.getMapOfMap2().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(true) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(false) == 'e');
			
			{
				std::map<bool, int32_t> myExternalMap;
				myExternalMap[true] = -300;
				myExternalMap[false] = -400;
			
				obj1.clear_MapOfMap3();
				TS_ASSERT(obj1.getMapOfMap3().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap3());
				TS_ASSERT(!obj1.containsKey_MapOfMap3(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(false));
			
				obj1.setMapOfMap3(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap3().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap3());
				TS_ASSERT(obj1.containsKey_MapOfMap3(true));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(true) == -300);
				TS_ASSERT(obj1.containsKey_MapOfMap3(false));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(false) == -400);
			
				obj1.clear_MapOfMap3();
				TS_ASSERT(obj1.getMapOfMap3().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap3());
				TS_ASSERT(!obj1.containsKey_MapOfMap3(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(false));
			}
			obj1.putTo_MapOfMap3(true, -300);
			TS_ASSERT(obj1.getMapOfMap3().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(true) == -300);
			TS_ASSERT(!obj1.containsKey_MapOfMap3(false));
			
			obj1.putTo_MapOfMap3(false, -400);
			TS_ASSERT(obj1.getMapOfMap3().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(true) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(false) == -400);
			
			{
				std::map<bool, uint32_t> myExternalMap;
				myExternalMap[true] = 600;
				myExternalMap[false] = 700;
			
				obj1.clear_MapOfMap4();
				TS_ASSERT(obj1.getMapOfMap4().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap4());
				TS_ASSERT(!obj1.containsKey_MapOfMap4(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(false));
			
				obj1.setMapOfMap4(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap4().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap4());
				TS_ASSERT(obj1.containsKey_MapOfMap4(true));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(true) == 600);
				TS_ASSERT(obj1.containsKey_MapOfMap4(false));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(false) == 700);
			
				obj1.clear_MapOfMap4();
				TS_ASSERT(obj1.getMapOfMap4().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap4());
				TS_ASSERT(!obj1.containsKey_MapOfMap4(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(false));
			}
			obj1.putTo_MapOfMap4(true, 600);
			TS_ASSERT(obj1.getMapOfMap4().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(true) == 600);
			TS_ASSERT(!obj1.containsKey_MapOfMap4(false));
			
			obj1.putTo_MapOfMap4(false, 700);
			TS_ASSERT(obj1.getMapOfMap4().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(true) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(false) == 700);
			
			{
				std::map<bool, float> myExternalMap;
				myExternalMap[true] = 4.5;
				myExternalMap[false] = 5.5;
			
				obj1.clear_MapOfMap5();
				TS_ASSERT(obj1.getMapOfMap5().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap5());
				TS_ASSERT(!obj1.containsKey_MapOfMap5(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(false));
			
				obj1.setMapOfMap5(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap5().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap5());
				TS_ASSERT(obj1.containsKey_MapOfMap5(true));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap5(false));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(false), 5.5, 1e-5);
			
				obj1.clear_MapOfMap5();
				TS_ASSERT(obj1.getMapOfMap5().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap5());
				TS_ASSERT(!obj1.containsKey_MapOfMap5(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(false));
			}
			obj1.putTo_MapOfMap5(true, 4.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(true));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap5(false));
			
			obj1.putTo_MapOfMap5(false, 5.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(true));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(false));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(false), 5.5, 1e-5);
			
			{
				std::map<bool, double> myExternalMap;
				myExternalMap[true] = 1.0;
				myExternalMap[false] = 2.0;
			
				obj1.clear_MapOfMap6();
				TS_ASSERT(obj1.getMapOfMap6().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap6());
				TS_ASSERT(!obj1.containsKey_MapOfMap6(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(false));
			
				obj1.setMapOfMap6(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap6().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap6());
				TS_ASSERT(obj1.containsKey_MapOfMap6(true));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap6(false));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(false), 2.0, 1e-5);
			
				obj1.clear_MapOfMap6();
				TS_ASSERT(obj1.getMapOfMap6().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap6());
				TS_ASSERT(!obj1.containsKey_MapOfMap6(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(false));
			}
			obj1.putTo_MapOfMap6(true, 1.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(true));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap6(false));
			
			obj1.putTo_MapOfMap6(false, 2.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(true));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(false));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(false), 2.0, 1e-5);
			
			{
				std::map<bool, std::string> myExternalMap;
				myExternalMap[true] = "Hello World!";
				myExternalMap[false] = "Hello Solar System!";
			
				obj1.clear_MapOfMap7();
				TS_ASSERT(obj1.getMapOfMap7().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap7());
				TS_ASSERT(!obj1.containsKey_MapOfMap7(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(false));
			
				obj1.setMapOfMap7(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap7().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap7());
				TS_ASSERT(obj1.containsKey_MapOfMap7(true));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(true), "Hello World!"));
				TS_ASSERT(obj1.containsKey_MapOfMap7(false));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(false), "Hello Solar System!"));
			
				obj1.clear_MapOfMap7();
				TS_ASSERT(obj1.getMapOfMap7().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap7());
				TS_ASSERT(!obj1.containsKey_MapOfMap7(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(false));
			}
			obj1.putTo_MapOfMap7(true, "Hello World!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(true));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(true), "Hello World!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap7(false));
			
			obj1.putTo_MapOfMap7(false, "Hello Solar System!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(true));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(true), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap7(false));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(false), "Hello Solar System!"));
			
	
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(true) == true);
			TS_ASSERT(obj1.containsKey_MapOfMap1(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(false) == false);
			TS_ASSERT(obj1.getMapOfMap2().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(true) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(false) == 'e');
			TS_ASSERT(obj1.getMapOfMap3().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(true) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(false) == -400);
			TS_ASSERT(obj1.getMapOfMap4().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(true) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(false) == 700);
			TS_ASSERT(obj1.getMapOfMap5().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(false));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(false), 5.5, 1e-5);
			TS_ASSERT(obj1.getMapOfMap6().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(false));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(false), 2.0, 1e-5);
			TS_ASSERT(obj1.getMapOfMap7().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(true) == "Hello World!");
			TS_ASSERT(obj1.containsKey_MapOfMap7(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(false) == "Hello Solar System!");
	
			Test11MapBool obj3(obj1);
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
			TS_ASSERT(obj3.getValueForKey_MapOfMap1(true) == true);
			TS_ASSERT(obj3.containsKey_MapOfMap1(false));
			TS_ASSERT(obj3.getValueForKey_MapOfMap1(false) == false);
			TS_ASSERT(obj3.getMapOfMap2().size() == 2);
			TS_ASSERT(obj3.getSize_MapOfMap2() == 2);
			TS_ASSERT(!obj3.isEmpty_MapOfMap2());
			TS_ASSERT(obj3.getValueForKey_MapOfMap2(true) == 'd');
			TS_ASSERT(obj3.containsKey_MapOfMap2(false));
			TS_ASSERT(obj3.getValueForKey_MapOfMap2(false) == 'e');
			TS_ASSERT(obj3.getMapOfMap3().size() == 2);
			TS_ASSERT(obj3.getSize_MapOfMap3() == 2);
			TS_ASSERT(!obj3.isEmpty_MapOfMap3());
			TS_ASSERT(obj3.getValueForKey_MapOfMap3(true) == -300);
			TS_ASSERT(obj3.containsKey_MapOfMap3(false));
			TS_ASSERT(obj3.getValueForKey_MapOfMap3(false) == -400);
			TS_ASSERT(obj3.getMapOfMap4().size() == 2);
			TS_ASSERT(obj3.getSize_MapOfMap4() == 2);
			TS_ASSERT(!obj3.isEmpty_MapOfMap4());
			TS_ASSERT(obj3.getValueForKey_MapOfMap4(true) == 600);
			TS_ASSERT(obj3.containsKey_MapOfMap4(false));
			TS_ASSERT(obj3.getValueForKey_MapOfMap4(false) == 700);
			TS_ASSERT(obj3.getMapOfMap5().size() == 2);
			TS_ASSERT(obj3.getSize_MapOfMap5() == 2);
			TS_ASSERT(!obj3.isEmpty_MapOfMap5());
			TS_ASSERT_DELTA(obj3.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
			TS_ASSERT(obj3.containsKey_MapOfMap5(false));
			TS_ASSERT_DELTA(obj3.getValueForKey_MapOfMap5(false), 5.5, 1e-5);
			TS_ASSERT(obj3.getMapOfMap6().size() == 2);
			TS_ASSERT(obj3.getSize_MapOfMap6() == 2);
			TS_ASSERT(!obj3.isEmpty_MapOfMap6());
			TS_ASSERT_DELTA(obj3.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
			TS_ASSERT(obj3.containsKey_MapOfMap6(false));
			TS_ASSERT_DELTA(obj3.getValueForKey_MapOfMap6(false), 2.0, 1e-5);
			TS_ASSERT(obj3.getMapOfMap7().size() == 2);
			TS_ASSERT(obj3.getSize_MapOfMap7() == 2);
			TS_ASSERT(!obj3.isEmpty_MapOfMap7());
			TS_ASSERT(obj3.getValueForKey_MapOfMap7(true) == "Hello World!");
			TS_ASSERT(obj3.containsKey_MapOfMap7(false));
			TS_ASSERT(obj3.getValueForKey_MapOfMap7(false) == "Hello Solar System!");
	
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
	
			Test11MapBool obj1;
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
	
			Test11MapBool obj2;
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
				std::map<bool, bool> myExternalMap;
				myExternalMap[true] = true;
				myExternalMap[false] = false;
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(false));
			
				obj1.setMapOfMap1(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap1().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap1());
				TS_ASSERT(obj1.containsKey_MapOfMap1(true));
				TS_ASSERT(obj1.getValueForKey_MapOfMap1(true) == true);
				TS_ASSERT(obj1.containsKey_MapOfMap1(false));
				TS_ASSERT(obj1.getValueForKey_MapOfMap1(false) == false);
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(false));
			}
			obj1.putTo_MapOfMap1(true, true);
			TS_ASSERT(obj1.getMapOfMap1().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(true) == true);
			TS_ASSERT(!obj1.containsKey_MapOfMap1(false));
			
			obj1.putTo_MapOfMap1(false, false);
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(true) == true);
			TS_ASSERT(obj1.containsKey_MapOfMap1(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(false) == false);
			
			{
				std::map<bool, char> myExternalMap;
				myExternalMap[true] = 'd';
				myExternalMap[false] = 'e';
			
				obj1.clear_MapOfMap2();
				TS_ASSERT(obj1.getMapOfMap2().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap2());
				TS_ASSERT(!obj1.containsKey_MapOfMap2(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(false));
			
				obj1.setMapOfMap2(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap2().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap2());
				TS_ASSERT(obj1.containsKey_MapOfMap2(true));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(true) == 'd');
				TS_ASSERT(obj1.containsKey_MapOfMap2(false));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(false) == 'e');
			
				obj1.clear_MapOfMap2();
				TS_ASSERT(obj1.getMapOfMap2().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap2());
				TS_ASSERT(!obj1.containsKey_MapOfMap2(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(false));
			}
			obj1.putTo_MapOfMap2(true, 'd');
			TS_ASSERT(obj1.getMapOfMap2().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(true) == 'd');
			TS_ASSERT(!obj1.containsKey_MapOfMap2(false));
			
			obj1.putTo_MapOfMap2(false, 'e');
			TS_ASSERT(obj1.getMapOfMap2().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(true) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(false) == 'e');
			
			{
				std::map<bool, int32_t> myExternalMap;
				myExternalMap[true] = -300;
				myExternalMap[false] = -400;
			
				obj1.clear_MapOfMap3();
				TS_ASSERT(obj1.getMapOfMap3().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap3());
				TS_ASSERT(!obj1.containsKey_MapOfMap3(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(false));
			
				obj1.setMapOfMap3(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap3().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap3());
				TS_ASSERT(obj1.containsKey_MapOfMap3(true));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(true) == -300);
				TS_ASSERT(obj1.containsKey_MapOfMap3(false));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(false) == -400);
			
				obj1.clear_MapOfMap3();
				TS_ASSERT(obj1.getMapOfMap3().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap3());
				TS_ASSERT(!obj1.containsKey_MapOfMap3(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(false));
			}
			obj1.putTo_MapOfMap3(true, -300);
			TS_ASSERT(obj1.getMapOfMap3().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(true) == -300);
			TS_ASSERT(!obj1.containsKey_MapOfMap3(false));
			
			obj1.putTo_MapOfMap3(false, -400);
			TS_ASSERT(obj1.getMapOfMap3().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(true) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(false) == -400);
			
			{
				std::map<bool, uint32_t> myExternalMap;
				myExternalMap[true] = 600;
				myExternalMap[false] = 700;
			
				obj1.clear_MapOfMap4();
				TS_ASSERT(obj1.getMapOfMap4().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap4());
				TS_ASSERT(!obj1.containsKey_MapOfMap4(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(false));
			
				obj1.setMapOfMap4(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap4().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap4());
				TS_ASSERT(obj1.containsKey_MapOfMap4(true));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(true) == 600);
				TS_ASSERT(obj1.containsKey_MapOfMap4(false));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(false) == 700);
			
				obj1.clear_MapOfMap4();
				TS_ASSERT(obj1.getMapOfMap4().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap4());
				TS_ASSERT(!obj1.containsKey_MapOfMap4(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(false));
			}
			obj1.putTo_MapOfMap4(true, 600);
			TS_ASSERT(obj1.getMapOfMap4().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(true) == 600);
			TS_ASSERT(!obj1.containsKey_MapOfMap4(false));
			
			obj1.putTo_MapOfMap4(false, 700);
			TS_ASSERT(obj1.getMapOfMap4().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(true) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(false) == 700);
			
			{
				std::map<bool, float> myExternalMap;
				myExternalMap[true] = 4.5;
				myExternalMap[false] = 5.5;
			
				obj1.clear_MapOfMap5();
				TS_ASSERT(obj1.getMapOfMap5().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap5());
				TS_ASSERT(!obj1.containsKey_MapOfMap5(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(false));
			
				obj1.setMapOfMap5(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap5().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap5());
				TS_ASSERT(obj1.containsKey_MapOfMap5(true));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap5(false));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(false), 5.5, 1e-5);
			
				obj1.clear_MapOfMap5();
				TS_ASSERT(obj1.getMapOfMap5().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap5());
				TS_ASSERT(!obj1.containsKey_MapOfMap5(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(false));
			}
			obj1.putTo_MapOfMap5(true, 4.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(true));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap5(false));
			
			obj1.putTo_MapOfMap5(false, 5.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(true));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(false));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(false), 5.5, 1e-5);
			
			{
				std::map<bool, double> myExternalMap;
				myExternalMap[true] = 1.0;
				myExternalMap[false] = 2.0;
			
				obj1.clear_MapOfMap6();
				TS_ASSERT(obj1.getMapOfMap6().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap6());
				TS_ASSERT(!obj1.containsKey_MapOfMap6(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(false));
			
				obj1.setMapOfMap6(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap6().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap6());
				TS_ASSERT(obj1.containsKey_MapOfMap6(true));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap6(false));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(false), 2.0, 1e-5);
			
				obj1.clear_MapOfMap6();
				TS_ASSERT(obj1.getMapOfMap6().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap6());
				TS_ASSERT(!obj1.containsKey_MapOfMap6(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(false));
			}
			obj1.putTo_MapOfMap6(true, 1.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(true));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap6(false));
			
			obj1.putTo_MapOfMap6(false, 2.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(true));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(false));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(false), 2.0, 1e-5);
			
			{
				std::map<bool, std::string> myExternalMap;
				myExternalMap[true] = "Hello World!";
				myExternalMap[false] = "Hello Solar System!";
			
				obj1.clear_MapOfMap7();
				TS_ASSERT(obj1.getMapOfMap7().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap7());
				TS_ASSERT(!obj1.containsKey_MapOfMap7(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(false));
			
				obj1.setMapOfMap7(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap7().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap7());
				TS_ASSERT(obj1.containsKey_MapOfMap7(true));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(true), "Hello World!"));
				TS_ASSERT(obj1.containsKey_MapOfMap7(false));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(false), "Hello Solar System!"));
			
				obj1.clear_MapOfMap7();
				TS_ASSERT(obj1.getMapOfMap7().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap7());
				TS_ASSERT(!obj1.containsKey_MapOfMap7(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(false));
			}
			obj1.putTo_MapOfMap7(true, "Hello World!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(true));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(true), "Hello World!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap7(false));
			
			obj1.putTo_MapOfMap7(false, "Hello Solar System!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(true));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(true), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap7(false));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(false), "Hello Solar System!"));
			
	
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(true) == true);
			TS_ASSERT(obj1.containsKey_MapOfMap1(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(false) == false);
			TS_ASSERT(obj1.getMapOfMap2().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(true) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(false) == 'e');
			TS_ASSERT(obj1.getMapOfMap3().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(true) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(false) == -400);
			TS_ASSERT(obj1.getMapOfMap4().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(true) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(false) == 700);
			TS_ASSERT(obj1.getMapOfMap5().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(false));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(false), 5.5, 1e-5);
			TS_ASSERT(obj1.getMapOfMap6().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(false));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(false), 2.0, 1e-5);
			TS_ASSERT(obj1.getMapOfMap7().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(true) == "Hello World!");
			TS_ASSERT(obj1.containsKey_MapOfMap7(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(false) == "Hello Solar System!");
	
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
			TS_ASSERT(obj2.getValueForKey_MapOfMap1(true) == true);
			TS_ASSERT(obj2.containsKey_MapOfMap1(false));
			TS_ASSERT(obj2.getValueForKey_MapOfMap1(false) == false);
			TS_ASSERT(obj2.getMapOfMap2().size() == 2);
			TS_ASSERT(obj2.getSize_MapOfMap2() == 2);
			TS_ASSERT(!obj2.isEmpty_MapOfMap2());
			TS_ASSERT(obj2.getValueForKey_MapOfMap2(true) == 'd');
			TS_ASSERT(obj2.containsKey_MapOfMap2(false));
			TS_ASSERT(obj2.getValueForKey_MapOfMap2(false) == 'e');
			TS_ASSERT(obj2.getMapOfMap3().size() == 2);
			TS_ASSERT(obj2.getSize_MapOfMap3() == 2);
			TS_ASSERT(!obj2.isEmpty_MapOfMap3());
			TS_ASSERT(obj2.getValueForKey_MapOfMap3(true) == -300);
			TS_ASSERT(obj2.containsKey_MapOfMap3(false));
			TS_ASSERT(obj2.getValueForKey_MapOfMap3(false) == -400);
			TS_ASSERT(obj2.getMapOfMap4().size() == 2);
			TS_ASSERT(obj2.getSize_MapOfMap4() == 2);
			TS_ASSERT(!obj2.isEmpty_MapOfMap4());
			TS_ASSERT(obj2.getValueForKey_MapOfMap4(true) == 600);
			TS_ASSERT(obj2.containsKey_MapOfMap4(false));
			TS_ASSERT(obj2.getValueForKey_MapOfMap4(false) == 700);
			TS_ASSERT(obj2.getMapOfMap5().size() == 2);
			TS_ASSERT(obj2.getSize_MapOfMap5() == 2);
			TS_ASSERT(!obj2.isEmpty_MapOfMap5());
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
			TS_ASSERT(obj2.containsKey_MapOfMap5(false));
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap5(false), 5.5, 1e-5);
			TS_ASSERT(obj2.getMapOfMap6().size() == 2);
			TS_ASSERT(obj2.getSize_MapOfMap6() == 2);
			TS_ASSERT(!obj2.isEmpty_MapOfMap6());
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
			TS_ASSERT(obj2.containsKey_MapOfMap6(false));
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap6(false), 2.0, 1e-5);
			TS_ASSERT(obj2.getMapOfMap7().size() == 2);
			TS_ASSERT(obj2.getSize_MapOfMap7() == 2);
			TS_ASSERT(!obj2.isEmpty_MapOfMap7());
			TS_ASSERT(obj2.getValueForKey_MapOfMap7(true) == "Hello World!");
			TS_ASSERT(obj2.containsKey_MapOfMap7(false));
			TS_ASSERT(obj2.getValueForKey_MapOfMap7(false) == "Hello Solar System!");
	
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
	
			Test11MapBool obj1;
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
	
			Test11MapBool obj2;
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
				std::map<bool, bool> myExternalMap;
				myExternalMap[true] = true;
				myExternalMap[false] = false;
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(false));
			
				obj1.setMapOfMap1(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap1().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap1());
				TS_ASSERT(obj1.containsKey_MapOfMap1(true));
				TS_ASSERT(obj1.getValueForKey_MapOfMap1(true) == true);
				TS_ASSERT(obj1.containsKey_MapOfMap1(false));
				TS_ASSERT(obj1.getValueForKey_MapOfMap1(false) == false);
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(false));
			}
			obj1.putTo_MapOfMap1(true, true);
			TS_ASSERT(obj1.getMapOfMap1().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(true) == true);
			TS_ASSERT(!obj1.containsKey_MapOfMap1(false));
			
			obj1.putTo_MapOfMap1(false, false);
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(true) == true);
			TS_ASSERT(obj1.containsKey_MapOfMap1(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(false) == false);
			
			{
				std::map<bool, char> myExternalMap;
				myExternalMap[true] = 'd';
				myExternalMap[false] = 'e';
			
				obj1.clear_MapOfMap2();
				TS_ASSERT(obj1.getMapOfMap2().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap2());
				TS_ASSERT(!obj1.containsKey_MapOfMap2(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(false));
			
				obj1.setMapOfMap2(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap2().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap2());
				TS_ASSERT(obj1.containsKey_MapOfMap2(true));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(true) == 'd');
				TS_ASSERT(obj1.containsKey_MapOfMap2(false));
				TS_ASSERT(obj1.getValueForKey_MapOfMap2(false) == 'e');
			
				obj1.clear_MapOfMap2();
				TS_ASSERT(obj1.getMapOfMap2().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap2());
				TS_ASSERT(!obj1.containsKey_MapOfMap2(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap2(false));
			}
			obj1.putTo_MapOfMap2(true, 'd');
			TS_ASSERT(obj1.getMapOfMap2().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(true) == 'd');
			TS_ASSERT(!obj1.containsKey_MapOfMap2(false));
			
			obj1.putTo_MapOfMap2(false, 'e');
			TS_ASSERT(obj1.getMapOfMap2().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.containsKey_MapOfMap2(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(true) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(false) == 'e');
			
			{
				std::map<bool, int32_t> myExternalMap;
				myExternalMap[true] = -300;
				myExternalMap[false] = -400;
			
				obj1.clear_MapOfMap3();
				TS_ASSERT(obj1.getMapOfMap3().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap3());
				TS_ASSERT(!obj1.containsKey_MapOfMap3(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(false));
			
				obj1.setMapOfMap3(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap3().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap3());
				TS_ASSERT(obj1.containsKey_MapOfMap3(true));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(true) == -300);
				TS_ASSERT(obj1.containsKey_MapOfMap3(false));
				TS_ASSERT(obj1.getValueForKey_MapOfMap3(false) == -400);
			
				obj1.clear_MapOfMap3();
				TS_ASSERT(obj1.getMapOfMap3().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap3() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap3());
				TS_ASSERT(!obj1.containsKey_MapOfMap3(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap3(false));
			}
			obj1.putTo_MapOfMap3(true, -300);
			TS_ASSERT(obj1.getMapOfMap3().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(true) == -300);
			TS_ASSERT(!obj1.containsKey_MapOfMap3(false));
			
			obj1.putTo_MapOfMap3(false, -400);
			TS_ASSERT(obj1.getMapOfMap3().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.containsKey_MapOfMap3(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(true) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(false) == -400);
			
			{
				std::map<bool, uint32_t> myExternalMap;
				myExternalMap[true] = 600;
				myExternalMap[false] = 700;
			
				obj1.clear_MapOfMap4();
				TS_ASSERT(obj1.getMapOfMap4().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap4());
				TS_ASSERT(!obj1.containsKey_MapOfMap4(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(false));
			
				obj1.setMapOfMap4(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap4().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap4());
				TS_ASSERT(obj1.containsKey_MapOfMap4(true));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(true) == 600);
				TS_ASSERT(obj1.containsKey_MapOfMap4(false));
				TS_ASSERT(obj1.getValueForKey_MapOfMap4(false) == 700);
			
				obj1.clear_MapOfMap4();
				TS_ASSERT(obj1.getMapOfMap4().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap4() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap4());
				TS_ASSERT(!obj1.containsKey_MapOfMap4(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap4(false));
			}
			obj1.putTo_MapOfMap4(true, 600);
			TS_ASSERT(obj1.getMapOfMap4().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(true) == 600);
			TS_ASSERT(!obj1.containsKey_MapOfMap4(false));
			
			obj1.putTo_MapOfMap4(false, 700);
			TS_ASSERT(obj1.getMapOfMap4().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.containsKey_MapOfMap4(true));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(true) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(false) == 700);
			
			{
				std::map<bool, float> myExternalMap;
				myExternalMap[true] = 4.5;
				myExternalMap[false] = 5.5;
			
				obj1.clear_MapOfMap5();
				TS_ASSERT(obj1.getMapOfMap5().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap5());
				TS_ASSERT(!obj1.containsKey_MapOfMap5(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(false));
			
				obj1.setMapOfMap5(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap5().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap5());
				TS_ASSERT(obj1.containsKey_MapOfMap5(true));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap5(false));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(false), 5.5, 1e-5);
			
				obj1.clear_MapOfMap5();
				TS_ASSERT(obj1.getMapOfMap5().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap5() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap5());
				TS_ASSERT(!obj1.containsKey_MapOfMap5(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap5(false));
			}
			obj1.putTo_MapOfMap5(true, 4.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(true));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap5(false));
			
			obj1.putTo_MapOfMap5(false, 5.5);
			TS_ASSERT(obj1.getMapOfMap5().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT(obj1.containsKey_MapOfMap5(true));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(false));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(false), 5.5, 1e-5);
			
			{
				std::map<bool, double> myExternalMap;
				myExternalMap[true] = 1.0;
				myExternalMap[false] = 2.0;
			
				obj1.clear_MapOfMap6();
				TS_ASSERT(obj1.getMapOfMap6().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap6());
				TS_ASSERT(!obj1.containsKey_MapOfMap6(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(false));
			
				obj1.setMapOfMap6(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap6().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap6());
				TS_ASSERT(obj1.containsKey_MapOfMap6(true));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
				TS_ASSERT(obj1.containsKey_MapOfMap6(false));
				TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(false), 2.0, 1e-5);
			
				obj1.clear_MapOfMap6();
				TS_ASSERT(obj1.getMapOfMap6().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap6() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap6());
				TS_ASSERT(!obj1.containsKey_MapOfMap6(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap6(false));
			}
			obj1.putTo_MapOfMap6(true, 1.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(true));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
			TS_ASSERT(!obj1.containsKey_MapOfMap6(false));
			
			obj1.putTo_MapOfMap6(false, 2.0);
			TS_ASSERT(obj1.getMapOfMap6().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT(obj1.containsKey_MapOfMap6(true));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(false));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(false), 2.0, 1e-5);
			
			{
				std::map<bool, std::string> myExternalMap;
				myExternalMap[true] = "Hello World!";
				myExternalMap[false] = "Hello Solar System!";
			
				obj1.clear_MapOfMap7();
				TS_ASSERT(obj1.getMapOfMap7().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap7());
				TS_ASSERT(!obj1.containsKey_MapOfMap7(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(false));
			
				obj1.setMapOfMap7(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap7().size() == 2);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 2);
				TS_ASSERT(!obj1.isEmpty_MapOfMap7());
				TS_ASSERT(obj1.containsKey_MapOfMap7(true));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(true), "Hello World!"));
				TS_ASSERT(obj1.containsKey_MapOfMap7(false));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(false), "Hello Solar System!"));
			
				obj1.clear_MapOfMap7();
				TS_ASSERT(obj1.getMapOfMap7().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap7() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap7());
				TS_ASSERT(!obj1.containsKey_MapOfMap7(true));
				TS_ASSERT(!obj1.containsKey_MapOfMap7(false));
			}
			obj1.putTo_MapOfMap7(true, "Hello World!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(true));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(true), "Hello World!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap7(false));
			
			obj1.putTo_MapOfMap7(false, "Hello Solar System!");
			TS_ASSERT(obj1.getMapOfMap7().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.containsKey_MapOfMap7(true));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(true), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap7(false));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap7(false), "Hello Solar System!"));
			
	
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(true) == true);
			TS_ASSERT(obj1.containsKey_MapOfMap1(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(false) == false);
			TS_ASSERT(obj1.getMapOfMap2().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap2());
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(true) == 'd');
			TS_ASSERT(obj1.containsKey_MapOfMap2(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap2(false) == 'e');
			TS_ASSERT(obj1.getMapOfMap3().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap3() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap3());
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(true) == -300);
			TS_ASSERT(obj1.containsKey_MapOfMap3(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap3(false) == -400);
			TS_ASSERT(obj1.getMapOfMap4().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap4() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap4());
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(true) == 600);
			TS_ASSERT(obj1.containsKey_MapOfMap4(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap4(false) == 700);
			TS_ASSERT(obj1.getMapOfMap5().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap5() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap5());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap5(false));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap5(false), 5.5, 1e-5);
			TS_ASSERT(obj1.getMapOfMap6().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap6() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap6());
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
			TS_ASSERT(obj1.containsKey_MapOfMap6(false));
			TS_ASSERT_DELTA(obj1.getValueForKey_MapOfMap6(false), 2.0, 1e-5);
			TS_ASSERT(obj1.getMapOfMap7().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap7() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap7());
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(true) == "Hello World!");
			TS_ASSERT(obj1.containsKey_MapOfMap7(false));
			TS_ASSERT(obj1.getValueForKey_MapOfMap7(false) == "Hello Solar System!");
	
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
			TS_ASSERT(obj2.getValueForKey_MapOfMap1(true) == true);
			TS_ASSERT(obj2.containsKey_MapOfMap1(false));
			TS_ASSERT(obj2.getValueForKey_MapOfMap1(false) == false);
			TS_ASSERT(obj2.getMapOfMap2().size() == 2);
			TS_ASSERT(obj2.getSize_MapOfMap2() == 2);
			TS_ASSERT(!obj2.isEmpty_MapOfMap2());
			TS_ASSERT(obj2.getValueForKey_MapOfMap2(true) == 'd');
			TS_ASSERT(obj2.containsKey_MapOfMap2(false));
			TS_ASSERT(obj2.getValueForKey_MapOfMap2(false) == 'e');
			TS_ASSERT(obj2.getMapOfMap3().size() == 2);
			TS_ASSERT(obj2.getSize_MapOfMap3() == 2);
			TS_ASSERT(!obj2.isEmpty_MapOfMap3());
			TS_ASSERT(obj2.getValueForKey_MapOfMap3(true) == -300);
			TS_ASSERT(obj2.containsKey_MapOfMap3(false));
			TS_ASSERT(obj2.getValueForKey_MapOfMap3(false) == -400);
			TS_ASSERT(obj2.getMapOfMap4().size() == 2);
			TS_ASSERT(obj2.getSize_MapOfMap4() == 2);
			TS_ASSERT(!obj2.isEmpty_MapOfMap4());
			TS_ASSERT(obj2.getValueForKey_MapOfMap4(true) == 600);
			TS_ASSERT(obj2.containsKey_MapOfMap4(false));
			TS_ASSERT(obj2.getValueForKey_MapOfMap4(false) == 700);
			TS_ASSERT(obj2.getMapOfMap5().size() == 2);
			TS_ASSERT(obj2.getSize_MapOfMap5() == 2);
			TS_ASSERT(!obj2.isEmpty_MapOfMap5());
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap5(true), 4.5, 1e-5);
			TS_ASSERT(obj2.containsKey_MapOfMap5(false));
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap5(false), 5.5, 1e-5);
			TS_ASSERT(obj2.getMapOfMap6().size() == 2);
			TS_ASSERT(obj2.getSize_MapOfMap6() == 2);
			TS_ASSERT(!obj2.isEmpty_MapOfMap6());
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap6(true), 1.0, 1e-5);
			TS_ASSERT(obj2.containsKey_MapOfMap6(false));
			TS_ASSERT_DELTA(obj2.getValueForKey_MapOfMap6(false), 2.0, 1e-5);
			TS_ASSERT(obj2.getMapOfMap7().size() == 2);
			TS_ASSERT(obj2.getSize_MapOfMap7() == 2);
			TS_ASSERT(!obj2.isEmpty_MapOfMap7());
			TS_ASSERT(obj2.getValueForKey_MapOfMap7(true) == "Hello World!");
			TS_ASSERT(obj2.containsKey_MapOfMap7(false));
			TS_ASSERT(obj2.getValueForKey_MapOfMap7(false) == "Hello Solar System!");
	
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*TEST11MAPBOOL_TESTSUITE_H*/
