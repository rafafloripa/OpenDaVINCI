/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef TEST10_TESTSUITE_H
#define TEST10_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "core/opendavinci.h"
#include "core/strings/StringToolbox.h"

#include "GeneratedHeaders_Test10.h"

#include "generated/Test10Point.h"
#include "generated/Test10Point.h"

class Test10_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
	
			Test10 obj1;
			TS_ASSERT(obj1.getListOfList1().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList1() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.getListOfList2().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList2() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.getMapOfMap1().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getMapOfMap2().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap2());
	
			{
				std::vector<std::string> myExternalList;
				myExternalList.push_back("Hello World!");
				myExternalList.push_back("Hello Solar System!");
				myExternalList.push_back("Hello Milky Way!");
			
				obj1.clear_ListOfList1();
				TS_ASSERT(obj1.getListOfList1().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList1() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList1());
				TS_ASSERT(!obj1.contains_ListOfList1("Hello World!"));
				TS_ASSERT(!obj1.contains_ListOfList1("Hello Solar System!"));
				TS_ASSERT(!obj1.contains_ListOfList1("Hello Milky Way!"));
			
				obj1.setListOfList1(myExternalList);
				TS_ASSERT(obj1.getListOfList1().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList1() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList1());
				TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
				TS_ASSERT(obj1.contains_ListOfList1("Hello Solar System!"));
				TS_ASSERT(obj1.contains_ListOfList1("Hello Milky Way!"));
			
				obj1.clear_ListOfList1();
				TS_ASSERT(obj1.getListOfList1().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList1() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList1());
				TS_ASSERT(!obj1.contains_ListOfList1("Hello World!"));
				TS_ASSERT(!obj1.contains_ListOfList1("Hello Solar System!"));
				TS_ASSERT(!obj1.contains_ListOfList1("Hello Milky Way!"));
			}
			obj1.addTo_ListOfList1("Hello World!");
			TS_ASSERT(obj1.getListOfList1().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList1() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
			TS_ASSERT(!obj1.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(!obj1.contains_ListOfList1("Hello Milky Way!"));
			
			obj1.addTo_ListOfList1("Hello Solar System!");
			TS_ASSERT(obj1.getListOfList1().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList1() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(!obj1.contains_ListOfList1("Hello Milky Way!"));
			
			obj1.insertTo_ListOfList1("Hello Milky Way!");
			TS_ASSERT(obj1.getListOfList1().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList1() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Milky Way!"));
			{
				std::map<int32_t, std::string> myExternalMap;
				myExternalMap[-300] = "Hello World!";
				myExternalMap[-400] = "Hello Solar System!";
				myExternalMap[-500] = "Hello Milky Way!";
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-300));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-400));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-500));
			
				obj1.setMapOfMap1(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap1().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap1());
				TS_ASSERT(obj1.containsKey_MapOfMap1(-300));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-300), "Hello World!"));
				TS_ASSERT(obj1.containsKey_MapOfMap1(-400));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-400), "Hello Solar System!"));
				TS_ASSERT(obj1.containsKey_MapOfMap1(-500));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-500), "Hello Milky Way!"));
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-300));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-400));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-500));
			}
			obj1.putTo_MapOfMap1(-300, "Hello World!");
			TS_ASSERT(obj1.getMapOfMap1().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(-300));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-300), "Hello World!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap1(-400));
			TS_ASSERT(!obj1.containsKey_MapOfMap1(-500));
			
			obj1.putTo_MapOfMap1(-400, "Hello Solar System!");
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(-300));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-300), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap1(-400));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-400), "Hello Solar System!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap1(-500));
			
			obj1.putTo_MapOfMap1(-500, "Hello Milky Way!");
			TS_ASSERT(obj1.getMapOfMap1().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(-300));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-300), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap1(-400));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-400), "Hello Solar System!"));
			TS_ASSERT(obj1.containsKey_MapOfMap1(-500));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-500), "Hello Milky Way!"));
	
			TS_ASSERT(obj1.getListOfList1().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList1() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Milky Way!"));
			TS_ASSERT(obj1.getMapOfMap1().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(-300) == "Hello World!");
			TS_ASSERT(obj1.containsKey_MapOfMap1(-400));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(-400) == "Hello Solar System!");
			TS_ASSERT(obj1.containsKey_MapOfMap1(-500));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(-500) == "Hello Milky Way!");
		}
	
		void testCreateAndCopyObject() {
	
			Test10 obj1;
			TS_ASSERT(obj1.getListOfList1().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList1() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.getListOfList2().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList2() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.getMapOfMap1().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getMapOfMap2().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap2());
	
			Test10 obj2(obj1);
			TS_ASSERT(obj1.getSize_ListOfList1() == obj2.getSize_ListOfList1());
			TS_ASSERT(obj1.isEmpty_ListOfList1() == obj2.isEmpty_ListOfList1());
			TS_ASSERT(obj1.getSize_ListOfList2() == obj2.getSize_ListOfList2());
			TS_ASSERT(obj1.isEmpty_ListOfList2() == obj2.isEmpty_ListOfList2());
			TS_ASSERT(obj1.getSize_MapOfMap1() == obj2.getSize_MapOfMap1());
			TS_ASSERT(obj1.isEmpty_MapOfMap1() == obj2.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getSize_MapOfMap2() == obj2.getSize_MapOfMap2());
			TS_ASSERT(obj1.isEmpty_MapOfMap2() == obj2.isEmpty_MapOfMap2());
	
			{
				std::vector<std::string> myExternalList;
				myExternalList.push_back("Hello World!");
				myExternalList.push_back("Hello Solar System!");
				myExternalList.push_back("Hello Milky Way!");
			
				obj1.clear_ListOfList1();
				TS_ASSERT(obj1.getListOfList1().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList1() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList1());
				TS_ASSERT(!obj1.contains_ListOfList1("Hello World!"));
				TS_ASSERT(!obj1.contains_ListOfList1("Hello Solar System!"));
				TS_ASSERT(!obj1.contains_ListOfList1("Hello Milky Way!"));
			
				obj1.setListOfList1(myExternalList);
				TS_ASSERT(obj1.getListOfList1().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList1() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList1());
				TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
				TS_ASSERT(obj1.contains_ListOfList1("Hello Solar System!"));
				TS_ASSERT(obj1.contains_ListOfList1("Hello Milky Way!"));
			
				obj1.clear_ListOfList1();
				TS_ASSERT(obj1.getListOfList1().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList1() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList1());
				TS_ASSERT(!obj1.contains_ListOfList1("Hello World!"));
				TS_ASSERT(!obj1.contains_ListOfList1("Hello Solar System!"));
				TS_ASSERT(!obj1.contains_ListOfList1("Hello Milky Way!"));
			}
			obj1.addTo_ListOfList1("Hello World!");
			TS_ASSERT(obj1.getListOfList1().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList1() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
			TS_ASSERT(!obj1.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(!obj1.contains_ListOfList1("Hello Milky Way!"));
			
			obj1.addTo_ListOfList1("Hello Solar System!");
			TS_ASSERT(obj1.getListOfList1().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList1() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(!obj1.contains_ListOfList1("Hello Milky Way!"));
			
			obj1.insertTo_ListOfList1("Hello Milky Way!");
			TS_ASSERT(obj1.getListOfList1().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList1() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Milky Way!"));
			{
				std::map<int32_t, std::string> myExternalMap;
				myExternalMap[-300] = "Hello World!";
				myExternalMap[-400] = "Hello Solar System!";
				myExternalMap[-500] = "Hello Milky Way!";
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-300));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-400));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-500));
			
				obj1.setMapOfMap1(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap1().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap1());
				TS_ASSERT(obj1.containsKey_MapOfMap1(-300));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-300), "Hello World!"));
				TS_ASSERT(obj1.containsKey_MapOfMap1(-400));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-400), "Hello Solar System!"));
				TS_ASSERT(obj1.containsKey_MapOfMap1(-500));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-500), "Hello Milky Way!"));
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-300));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-400));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-500));
			}
			obj1.putTo_MapOfMap1(-300, "Hello World!");
			TS_ASSERT(obj1.getMapOfMap1().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(-300));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-300), "Hello World!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap1(-400));
			TS_ASSERT(!obj1.containsKey_MapOfMap1(-500));
			
			obj1.putTo_MapOfMap1(-400, "Hello Solar System!");
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(-300));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-300), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap1(-400));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-400), "Hello Solar System!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap1(-500));
			
			obj1.putTo_MapOfMap1(-500, "Hello Milky Way!");
			TS_ASSERT(obj1.getMapOfMap1().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(-300));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-300), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap1(-400));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-400), "Hello Solar System!"));
			TS_ASSERT(obj1.containsKey_MapOfMap1(-500));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-500), "Hello Milky Way!"));
	
			TS_ASSERT(obj1.getListOfList1().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList1() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Milky Way!"));
			TS_ASSERT(obj1.getMapOfMap1().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(-300) == "Hello World!");
			TS_ASSERT(obj1.containsKey_MapOfMap1(-400));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(-400) == "Hello Solar System!");
			TS_ASSERT(obj1.containsKey_MapOfMap1(-500));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(-500) == "Hello Milky Way!");
	
			Test10 obj3(obj1);
			TS_ASSERT(obj1.getSize_ListOfList1() == obj3.getSize_ListOfList1());
			TS_ASSERT(obj1.isEmpty_ListOfList1() == obj3.isEmpty_ListOfList1());
			TS_ASSERT(obj1.getSize_ListOfList2() == obj3.getSize_ListOfList2());
			TS_ASSERT(obj1.isEmpty_ListOfList2() == obj3.isEmpty_ListOfList2());
			TS_ASSERT(obj1.getSize_MapOfMap1() == obj3.getSize_MapOfMap1());
			TS_ASSERT(obj1.isEmpty_MapOfMap1() == obj3.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getSize_MapOfMap2() == obj3.getSize_MapOfMap2());
			TS_ASSERT(obj1.isEmpty_MapOfMap2() == obj3.isEmpty_MapOfMap2());
	
			TS_ASSERT(obj3.getListOfList1().size() == 3);
			TS_ASSERT(obj3.getSize_ListOfList1() == 3);
			TS_ASSERT(!obj3.isEmpty_ListOfList1());
			TS_ASSERT(obj3.contains_ListOfList1("Hello World!"));
			TS_ASSERT(obj3.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(obj3.contains_ListOfList1("Hello Milky Way!"));
			TS_ASSERT(obj3.getMapOfMap1().size() == 3);
			TS_ASSERT(obj3.getSize_MapOfMap1() == 3);
			TS_ASSERT(!obj3.isEmpty_MapOfMap1());
			TS_ASSERT(obj3.getValueForKey_MapOfMap1(-300) == "Hello World!");
			TS_ASSERT(obj3.containsKey_MapOfMap1(-400));
			TS_ASSERT(obj3.getValueForKey_MapOfMap1(-400) == "Hello Solar System!");
			TS_ASSERT(obj3.containsKey_MapOfMap1(-500));
			TS_ASSERT(obj3.getValueForKey_MapOfMap1(-500) == "Hello Milky Way!");
	
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
	
			Test10 obj1;
			TS_ASSERT(obj1.getListOfList1().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList1() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.getListOfList2().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList2() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.getMapOfMap1().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getMapOfMap2().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap2());
	
			Test10 obj2;
			TS_ASSERT(obj2.getListOfList1().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList1() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList1());
			TS_ASSERT(obj2.getListOfList2().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList2() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList2());
			TS_ASSERT(obj2.getMapOfMap1().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap1() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap1());
			TS_ASSERT(obj2.getMapOfMap2().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap2() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap2());
	
			{
				std::vector<std::string> myExternalList;
				myExternalList.push_back("Hello World!");
				myExternalList.push_back("Hello Solar System!");
				myExternalList.push_back("Hello Milky Way!");
			
				obj1.clear_ListOfList1();
				TS_ASSERT(obj1.getListOfList1().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList1() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList1());
				TS_ASSERT(!obj1.contains_ListOfList1("Hello World!"));
				TS_ASSERT(!obj1.contains_ListOfList1("Hello Solar System!"));
				TS_ASSERT(!obj1.contains_ListOfList1("Hello Milky Way!"));
			
				obj1.setListOfList1(myExternalList);
				TS_ASSERT(obj1.getListOfList1().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList1() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList1());
				TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
				TS_ASSERT(obj1.contains_ListOfList1("Hello Solar System!"));
				TS_ASSERT(obj1.contains_ListOfList1("Hello Milky Way!"));
			
				obj1.clear_ListOfList1();
				TS_ASSERT(obj1.getListOfList1().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList1() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList1());
				TS_ASSERT(!obj1.contains_ListOfList1("Hello World!"));
				TS_ASSERT(!obj1.contains_ListOfList1("Hello Solar System!"));
				TS_ASSERT(!obj1.contains_ListOfList1("Hello Milky Way!"));
			}
			obj1.addTo_ListOfList1("Hello World!");
			TS_ASSERT(obj1.getListOfList1().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList1() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
			TS_ASSERT(!obj1.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(!obj1.contains_ListOfList1("Hello Milky Way!"));
			
			obj1.addTo_ListOfList1("Hello Solar System!");
			TS_ASSERT(obj1.getListOfList1().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList1() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(!obj1.contains_ListOfList1("Hello Milky Way!"));
			
			obj1.insertTo_ListOfList1("Hello Milky Way!");
			TS_ASSERT(obj1.getListOfList1().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList1() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Milky Way!"));
			{
				std::map<int32_t, std::string> myExternalMap;
				myExternalMap[-300] = "Hello World!";
				myExternalMap[-400] = "Hello Solar System!";
				myExternalMap[-500] = "Hello Milky Way!";
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-300));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-400));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-500));
			
				obj1.setMapOfMap1(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap1().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap1());
				TS_ASSERT(obj1.containsKey_MapOfMap1(-300));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-300), "Hello World!"));
				TS_ASSERT(obj1.containsKey_MapOfMap1(-400));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-400), "Hello Solar System!"));
				TS_ASSERT(obj1.containsKey_MapOfMap1(-500));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-500), "Hello Milky Way!"));
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-300));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-400));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-500));
			}
			obj1.putTo_MapOfMap1(-300, "Hello World!");
			TS_ASSERT(obj1.getMapOfMap1().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(-300));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-300), "Hello World!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap1(-400));
			TS_ASSERT(!obj1.containsKey_MapOfMap1(-500));
			
			obj1.putTo_MapOfMap1(-400, "Hello Solar System!");
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(-300));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-300), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap1(-400));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-400), "Hello Solar System!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap1(-500));
			
			obj1.putTo_MapOfMap1(-500, "Hello Milky Way!");
			TS_ASSERT(obj1.getMapOfMap1().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(-300));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-300), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap1(-400));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-400), "Hello Solar System!"));
			TS_ASSERT(obj1.containsKey_MapOfMap1(-500));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-500), "Hello Milky Way!"));
	
			TS_ASSERT(obj1.getListOfList1().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList1() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Milky Way!"));
			TS_ASSERT(obj1.getMapOfMap1().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(-300) == "Hello World!");
			TS_ASSERT(obj1.containsKey_MapOfMap1(-400));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(-400) == "Hello Solar System!");
			TS_ASSERT(obj1.containsKey_MapOfMap1(-500));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(-500) == "Hello Milky Way!");
	
			obj2 = obj1;
			TS_ASSERT(obj1.getSize_ListOfList1() == obj2.getSize_ListOfList1());
			TS_ASSERT(obj1.isEmpty_ListOfList1() == obj2.isEmpty_ListOfList1());
			TS_ASSERT(obj1.getSize_ListOfList2() == obj2.getSize_ListOfList2());
			TS_ASSERT(obj1.isEmpty_ListOfList2() == obj2.isEmpty_ListOfList2());
			TS_ASSERT(obj1.getSize_MapOfMap1() == obj2.getSize_MapOfMap1());
			TS_ASSERT(obj1.isEmpty_MapOfMap1() == obj2.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getSize_MapOfMap2() == obj2.getSize_MapOfMap2());
			TS_ASSERT(obj1.isEmpty_MapOfMap2() == obj2.isEmpty_MapOfMap2());
	
			TS_ASSERT(obj2.getListOfList1().size() == 3);
			TS_ASSERT(obj2.getSize_ListOfList1() == 3);
			TS_ASSERT(!obj2.isEmpty_ListOfList1());
			TS_ASSERT(obj2.contains_ListOfList1("Hello World!"));
			TS_ASSERT(obj2.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(obj2.contains_ListOfList1("Hello Milky Way!"));
			TS_ASSERT(obj2.getMapOfMap1().size() == 3);
			TS_ASSERT(obj2.getSize_MapOfMap1() == 3);
			TS_ASSERT(!obj2.isEmpty_MapOfMap1());
			TS_ASSERT(obj2.getValueForKey_MapOfMap1(-300) == "Hello World!");
			TS_ASSERT(obj2.containsKey_MapOfMap1(-400));
			TS_ASSERT(obj2.getValueForKey_MapOfMap1(-400) == "Hello Solar System!");
			TS_ASSERT(obj2.containsKey_MapOfMap1(-500));
			TS_ASSERT(obj2.getValueForKey_MapOfMap1(-500) == "Hello Milky Way!");
	
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
	
			Test10 obj1;
			TS_ASSERT(obj1.getListOfList1().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList1() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.getListOfList2().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList2() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.getMapOfMap1().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getMapOfMap2().size() == 0);
			TS_ASSERT(obj1.getSize_MapOfMap2() == 0);
			TS_ASSERT(obj1.isEmpty_MapOfMap2());
	
			Test10 obj2;
			TS_ASSERT(obj2.getListOfList1().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList1() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList1());
			TS_ASSERT(obj2.getListOfList2().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList2() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList2());
			TS_ASSERT(obj2.getMapOfMap1().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap1() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap1());
			TS_ASSERT(obj2.getMapOfMap2().size() == 0);
			TS_ASSERT(obj2.getSize_MapOfMap2() == 0);
			TS_ASSERT(obj2.isEmpty_MapOfMap2());
	
			{
				std::vector<std::string> myExternalList;
				myExternalList.push_back("Hello World!");
				myExternalList.push_back("Hello Solar System!");
				myExternalList.push_back("Hello Milky Way!");
			
				obj1.clear_ListOfList1();
				TS_ASSERT(obj1.getListOfList1().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList1() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList1());
				TS_ASSERT(!obj1.contains_ListOfList1("Hello World!"));
				TS_ASSERT(!obj1.contains_ListOfList1("Hello Solar System!"));
				TS_ASSERT(!obj1.contains_ListOfList1("Hello Milky Way!"));
			
				obj1.setListOfList1(myExternalList);
				TS_ASSERT(obj1.getListOfList1().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList1() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList1());
				TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
				TS_ASSERT(obj1.contains_ListOfList1("Hello Solar System!"));
				TS_ASSERT(obj1.contains_ListOfList1("Hello Milky Way!"));
			
				obj1.clear_ListOfList1();
				TS_ASSERT(obj1.getListOfList1().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList1() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList1());
				TS_ASSERT(!obj1.contains_ListOfList1("Hello World!"));
				TS_ASSERT(!obj1.contains_ListOfList1("Hello Solar System!"));
				TS_ASSERT(!obj1.contains_ListOfList1("Hello Milky Way!"));
			}
			obj1.addTo_ListOfList1("Hello World!");
			TS_ASSERT(obj1.getListOfList1().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList1() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
			TS_ASSERT(!obj1.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(!obj1.contains_ListOfList1("Hello Milky Way!"));
			
			obj1.addTo_ListOfList1("Hello Solar System!");
			TS_ASSERT(obj1.getListOfList1().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList1() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(!obj1.contains_ListOfList1("Hello Milky Way!"));
			
			obj1.insertTo_ListOfList1("Hello Milky Way!");
			TS_ASSERT(obj1.getListOfList1().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList1() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Milky Way!"));
			{
				std::map<int32_t, std::string> myExternalMap;
				myExternalMap[-300] = "Hello World!";
				myExternalMap[-400] = "Hello Solar System!";
				myExternalMap[-500] = "Hello Milky Way!";
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-300));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-400));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-500));
			
				obj1.setMapOfMap1(myExternalMap);
				TS_ASSERT(obj1.getMapOfMap1().size() == 3);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 3);
				TS_ASSERT(!obj1.isEmpty_MapOfMap1());
				TS_ASSERT(obj1.containsKey_MapOfMap1(-300));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-300), "Hello World!"));
				TS_ASSERT(obj1.containsKey_MapOfMap1(-400));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-400), "Hello Solar System!"));
				TS_ASSERT(obj1.containsKey_MapOfMap1(-500));
				TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-500), "Hello Milky Way!"));
			
				obj1.clear_MapOfMap1();
				TS_ASSERT(obj1.getMapOfMap1().size() == 0);
				TS_ASSERT(obj1.getSize_MapOfMap1() == 0);
				TS_ASSERT(obj1.isEmpty_MapOfMap1());
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-300));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-400));
				TS_ASSERT(!obj1.containsKey_MapOfMap1(-500));
			}
			obj1.putTo_MapOfMap1(-300, "Hello World!");
			TS_ASSERT(obj1.getMapOfMap1().size() == 1);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 1);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(-300));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-300), "Hello World!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap1(-400));
			TS_ASSERT(!obj1.containsKey_MapOfMap1(-500));
			
			obj1.putTo_MapOfMap1(-400, "Hello Solar System!");
			TS_ASSERT(obj1.getMapOfMap1().size() == 2);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 2);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(-300));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-300), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap1(-400));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-400), "Hello Solar System!"));
			TS_ASSERT(!obj1.containsKey_MapOfMap1(-500));
			
			obj1.putTo_MapOfMap1(-500, "Hello Milky Way!");
			TS_ASSERT(obj1.getMapOfMap1().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.containsKey_MapOfMap1(-300));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-300), "Hello World!"));
			TS_ASSERT(obj1.containsKey_MapOfMap1(-400));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-400), "Hello Solar System!"));
			TS_ASSERT(obj1.containsKey_MapOfMap1(-500));
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.getValueForKey_MapOfMap1(-500), "Hello Milky Way!"));
	
			TS_ASSERT(obj1.getListOfList1().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList1() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(obj1.contains_ListOfList1("Hello Milky Way!"));
			TS_ASSERT(obj1.getMapOfMap1().size() == 3);
			TS_ASSERT(obj1.getSize_MapOfMap1() == 3);
			TS_ASSERT(!obj1.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(-300) == "Hello World!");
			TS_ASSERT(obj1.containsKey_MapOfMap1(-400));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(-400) == "Hello Solar System!");
			TS_ASSERT(obj1.containsKey_MapOfMap1(-500));
			TS_ASSERT(obj1.getValueForKey_MapOfMap1(-500) == "Hello Milky Way!");
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getSize_ListOfList1() == obj2.getSize_ListOfList1());
			TS_ASSERT(obj1.isEmpty_ListOfList1() == obj2.isEmpty_ListOfList1());
			TS_ASSERT(obj1.getSize_ListOfList2() == obj2.getSize_ListOfList2());
			TS_ASSERT(obj1.isEmpty_ListOfList2() == obj2.isEmpty_ListOfList2());
			TS_ASSERT(obj1.getSize_MapOfMap1() == obj2.getSize_MapOfMap1());
			TS_ASSERT(obj1.isEmpty_MapOfMap1() == obj2.isEmpty_MapOfMap1());
			TS_ASSERT(obj1.getSize_MapOfMap2() == obj2.getSize_MapOfMap2());
			TS_ASSERT(obj1.isEmpty_MapOfMap2() == obj2.isEmpty_MapOfMap2());
	
			TS_ASSERT(obj2.getListOfList1().size() == 3);
			TS_ASSERT(obj2.getSize_ListOfList1() == 3);
			TS_ASSERT(!obj2.isEmpty_ListOfList1());
			TS_ASSERT(obj2.contains_ListOfList1("Hello World!"));
			TS_ASSERT(obj2.contains_ListOfList1("Hello Solar System!"));
			TS_ASSERT(obj2.contains_ListOfList1("Hello Milky Way!"));
			TS_ASSERT(obj2.getMapOfMap1().size() == 3);
			TS_ASSERT(obj2.getSize_MapOfMap1() == 3);
			TS_ASSERT(!obj2.isEmpty_MapOfMap1());
			TS_ASSERT(obj2.getValueForKey_MapOfMap1(-300) == "Hello World!");
			TS_ASSERT(obj2.containsKey_MapOfMap1(-400));
			TS_ASSERT(obj2.getValueForKey_MapOfMap1(-400) == "Hello Solar System!");
			TS_ASSERT(obj2.containsKey_MapOfMap1(-500));
			TS_ASSERT(obj2.getValueForKey_MapOfMap1(-500) == "Hello Milky Way!");
	
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*TEST10_TESTSUITE_H*/
