/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef TEST11LISTS_TESTSUITE_H
#define TEST11LISTS_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "core/opendavinci.h"
#include "core/strings/StringToolbox.h"

#include "GeneratedHeaders_Test11.h"


class Test11Lists_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
	
			Test11Lists obj1;
			TS_ASSERT(obj1.getListOfList1().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList1() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.getListOfList2().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList2() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.getListOfList3().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList3() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.getListOfList4().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList4() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.getListOfList5().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList5() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.getListOfList6().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList6() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.getListOfList7().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList7() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList7());
	
			{
				std::vector<bool> myExternalList;
				myExternalList.push_back(true);
				myExternalList.push_back(false);
			
				obj1.clear_ListOfList1();
				TS_ASSERT(obj1.getListOfList1().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList1() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList1());
				TS_ASSERT(!obj1.contains_ListOfList1(true));
				TS_ASSERT(!obj1.contains_ListOfList1(false));
			
				obj1.setListOfList1(myExternalList);
				TS_ASSERT(obj1.getListOfList1().size() == 2);
				TS_ASSERT(obj1.getSize_ListOfList1() == 2);
				TS_ASSERT(!obj1.isEmpty_ListOfList1());
				TS_ASSERT(obj1.contains_ListOfList1(true));
				TS_ASSERT(obj1.contains_ListOfList1(false));
			
				obj1.clear_ListOfList1();
				TS_ASSERT(obj1.getListOfList1().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList1() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList1());
				TS_ASSERT(!obj1.contains_ListOfList1(true));
				TS_ASSERT(!obj1.contains_ListOfList1(false));
			}
			obj1.addTo_ListOfList1(true);
			TS_ASSERT(obj1.getListOfList1().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList1() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1(true));
			TS_ASSERT(!obj1.contains_ListOfList1(false));
			
			obj1.addTo_ListOfList1(false);
			TS_ASSERT(obj1.getListOfList1().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList1() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1(true));
			TS_ASSERT(obj1.contains_ListOfList1(false));
			
			{
				std::vector<char> myExternalList;
				myExternalList.push_back('d');
				myExternalList.push_back('e');
				myExternalList.push_back('f');
			
				obj1.clear_ListOfList2();
				TS_ASSERT(obj1.getListOfList2().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList2() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList2());
				TS_ASSERT(!obj1.contains_ListOfList2('d'));
				TS_ASSERT(!obj1.contains_ListOfList2('e'));
				TS_ASSERT(!obj1.contains_ListOfList2('f'));
			
				obj1.setListOfList2(myExternalList);
				TS_ASSERT(obj1.getListOfList2().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList2() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList2());
				TS_ASSERT(obj1.contains_ListOfList2('d'));
				TS_ASSERT(obj1.contains_ListOfList2('e'));
				TS_ASSERT(obj1.contains_ListOfList2('f'));
			
				obj1.clear_ListOfList2();
				TS_ASSERT(obj1.getListOfList2().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList2() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList2());
				TS_ASSERT(!obj1.contains_ListOfList2('d'));
				TS_ASSERT(!obj1.contains_ListOfList2('e'));
				TS_ASSERT(!obj1.contains_ListOfList2('f'));
			}
			obj1.addTo_ListOfList2('d');
			TS_ASSERT(obj1.getListOfList2().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList2() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.contains_ListOfList2('d'));
			TS_ASSERT(!obj1.contains_ListOfList2('e'));
			TS_ASSERT(!obj1.contains_ListOfList2('f'));
			
			obj1.addTo_ListOfList2('e');
			TS_ASSERT(obj1.getListOfList2().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList2() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.contains_ListOfList2('d'));
			TS_ASSERT(obj1.contains_ListOfList2('e'));
			TS_ASSERT(!obj1.contains_ListOfList2('f'));
			
			obj1.insertTo_ListOfList2('f');
			TS_ASSERT(obj1.getListOfList2().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList2() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.contains_ListOfList2('d'));
			TS_ASSERT(obj1.contains_ListOfList2('e'));
			TS_ASSERT(obj1.contains_ListOfList2('f'));
			{
				std::vector<int32_t> myExternalList;
				myExternalList.push_back(-300);
				myExternalList.push_back(-400);
				myExternalList.push_back(-500);
			
				obj1.clear_ListOfList3();
				TS_ASSERT(obj1.getListOfList3().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList3() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList3());
				TS_ASSERT(!obj1.contains_ListOfList3(-300));
				TS_ASSERT(!obj1.contains_ListOfList3(-400));
				TS_ASSERT(!obj1.contains_ListOfList3(-500));
			
				obj1.setListOfList3(myExternalList);
				TS_ASSERT(obj1.getListOfList3().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList3() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList3());
				TS_ASSERT(obj1.contains_ListOfList3(-300));
				TS_ASSERT(obj1.contains_ListOfList3(-400));
				TS_ASSERT(obj1.contains_ListOfList3(-500));
			
				obj1.clear_ListOfList3();
				TS_ASSERT(obj1.getListOfList3().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList3() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList3());
				TS_ASSERT(!obj1.contains_ListOfList3(-300));
				TS_ASSERT(!obj1.contains_ListOfList3(-400));
				TS_ASSERT(!obj1.contains_ListOfList3(-500));
			}
			obj1.addTo_ListOfList3(-300);
			TS_ASSERT(obj1.getListOfList3().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList3() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.contains_ListOfList3(-300));
			TS_ASSERT(!obj1.contains_ListOfList3(-400));
			TS_ASSERT(!obj1.contains_ListOfList3(-500));
			
			obj1.addTo_ListOfList3(-400);
			TS_ASSERT(obj1.getListOfList3().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList3() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.contains_ListOfList3(-300));
			TS_ASSERT(obj1.contains_ListOfList3(-400));
			TS_ASSERT(!obj1.contains_ListOfList3(-500));
			
			obj1.insertTo_ListOfList3(-500);
			TS_ASSERT(obj1.getListOfList3().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList3() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.contains_ListOfList3(-300));
			TS_ASSERT(obj1.contains_ListOfList3(-400));
			TS_ASSERT(obj1.contains_ListOfList3(-500));
			{
				std::vector<uint32_t> myExternalList;
				myExternalList.push_back(600);
				myExternalList.push_back(700);
				myExternalList.push_back(800);
			
				obj1.clear_ListOfList4();
				TS_ASSERT(obj1.getListOfList4().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList4() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList4());
				TS_ASSERT(!obj1.contains_ListOfList4(600));
				TS_ASSERT(!obj1.contains_ListOfList4(700));
				TS_ASSERT(!obj1.contains_ListOfList4(800));
			
				obj1.setListOfList4(myExternalList);
				TS_ASSERT(obj1.getListOfList4().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList4() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList4());
				TS_ASSERT(obj1.contains_ListOfList4(600));
				TS_ASSERT(obj1.contains_ListOfList4(700));
				TS_ASSERT(obj1.contains_ListOfList4(800));
			
				obj1.clear_ListOfList4();
				TS_ASSERT(obj1.getListOfList4().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList4() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList4());
				TS_ASSERT(!obj1.contains_ListOfList4(600));
				TS_ASSERT(!obj1.contains_ListOfList4(700));
				TS_ASSERT(!obj1.contains_ListOfList4(800));
			}
			obj1.addTo_ListOfList4(600);
			TS_ASSERT(obj1.getListOfList4().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList4() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.contains_ListOfList4(600));
			TS_ASSERT(!obj1.contains_ListOfList4(700));
			TS_ASSERT(!obj1.contains_ListOfList4(800));
			
			obj1.addTo_ListOfList4(700);
			TS_ASSERT(obj1.getListOfList4().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList4() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.contains_ListOfList4(600));
			TS_ASSERT(obj1.contains_ListOfList4(700));
			TS_ASSERT(!obj1.contains_ListOfList4(800));
			
			obj1.insertTo_ListOfList4(800);
			TS_ASSERT(obj1.getListOfList4().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList4() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.contains_ListOfList4(600));
			TS_ASSERT(obj1.contains_ListOfList4(700));
			TS_ASSERT(obj1.contains_ListOfList4(800));
			{
				std::vector<float> myExternalList;
				myExternalList.push_back(4.5);
				myExternalList.push_back(5.5);
				myExternalList.push_back(6.5);
			
				obj1.clear_ListOfList5();
				TS_ASSERT(obj1.getListOfList5().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList5() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList5());
				TS_ASSERT(!obj1.contains_ListOfList5(4.5));
				TS_ASSERT(!obj1.contains_ListOfList5(5.5));
				TS_ASSERT(!obj1.contains_ListOfList5(6.5));
			
				obj1.setListOfList5(myExternalList);
				TS_ASSERT(obj1.getListOfList5().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList5() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList5());
				TS_ASSERT(obj1.contains_ListOfList5(4.5));
				TS_ASSERT(obj1.contains_ListOfList5(5.5));
				TS_ASSERT(obj1.contains_ListOfList5(6.5));
			
				obj1.clear_ListOfList5();
				TS_ASSERT(obj1.getListOfList5().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList5() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList5());
				TS_ASSERT(!obj1.contains_ListOfList5(4.5));
				TS_ASSERT(!obj1.contains_ListOfList5(5.5));
				TS_ASSERT(!obj1.contains_ListOfList5(6.5));
			}
			obj1.addTo_ListOfList5(4.5);
			TS_ASSERT(obj1.getListOfList5().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList5() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.contains_ListOfList5(4.5));
			TS_ASSERT(!obj1.contains_ListOfList5(5.5));
			TS_ASSERT(!obj1.contains_ListOfList5(6.5));
			
			obj1.addTo_ListOfList5(5.5);
			TS_ASSERT(obj1.getListOfList5().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList5() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.contains_ListOfList5(4.5));
			TS_ASSERT(obj1.contains_ListOfList5(5.5));
			TS_ASSERT(!obj1.contains_ListOfList5(6.5));
			
			obj1.insertTo_ListOfList5(6.5);
			TS_ASSERT(obj1.getListOfList5().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList5() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.contains_ListOfList5(4.5));
			TS_ASSERT(obj1.contains_ListOfList5(5.5));
			TS_ASSERT(obj1.contains_ListOfList5(6.5));
			{
				std::vector<double> myExternalList;
				myExternalList.push_back(1.0);
				myExternalList.push_back(2.0);
				myExternalList.push_back(3.0);
			
				obj1.clear_ListOfList6();
				TS_ASSERT(obj1.getListOfList6().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList6() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList6());
				TS_ASSERT(!obj1.contains_ListOfList6(1.0));
				TS_ASSERT(!obj1.contains_ListOfList6(2.0));
				TS_ASSERT(!obj1.contains_ListOfList6(3.0));
			
				obj1.setListOfList6(myExternalList);
				TS_ASSERT(obj1.getListOfList6().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList6() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList6());
				TS_ASSERT(obj1.contains_ListOfList6(1.0));
				TS_ASSERT(obj1.contains_ListOfList6(2.0));
				TS_ASSERT(obj1.contains_ListOfList6(3.0));
			
				obj1.clear_ListOfList6();
				TS_ASSERT(obj1.getListOfList6().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList6() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList6());
				TS_ASSERT(!obj1.contains_ListOfList6(1.0));
				TS_ASSERT(!obj1.contains_ListOfList6(2.0));
				TS_ASSERT(!obj1.contains_ListOfList6(3.0));
			}
			obj1.addTo_ListOfList6(1.0);
			TS_ASSERT(obj1.getListOfList6().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList6() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.contains_ListOfList6(1.0));
			TS_ASSERT(!obj1.contains_ListOfList6(2.0));
			TS_ASSERT(!obj1.contains_ListOfList6(3.0));
			
			obj1.addTo_ListOfList6(2.0);
			TS_ASSERT(obj1.getListOfList6().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList6() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.contains_ListOfList6(1.0));
			TS_ASSERT(obj1.contains_ListOfList6(2.0));
			TS_ASSERT(!obj1.contains_ListOfList6(3.0));
			
			obj1.insertTo_ListOfList6(3.0);
			TS_ASSERT(obj1.getListOfList6().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList6() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.contains_ListOfList6(1.0));
			TS_ASSERT(obj1.contains_ListOfList6(2.0));
			TS_ASSERT(obj1.contains_ListOfList6(3.0));
			{
				std::vector<std::string> myExternalList;
				myExternalList.push_back("Hello World!");
				myExternalList.push_back("Hello Solar System!");
				myExternalList.push_back("Hello Milky Way!");
			
				obj1.clear_ListOfList7();
				TS_ASSERT(obj1.getListOfList7().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList7() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList7());
				TS_ASSERT(!obj1.contains_ListOfList7("Hello World!"));
				TS_ASSERT(!obj1.contains_ListOfList7("Hello Solar System!"));
				TS_ASSERT(!obj1.contains_ListOfList7("Hello Milky Way!"));
			
				obj1.setListOfList7(myExternalList);
				TS_ASSERT(obj1.getListOfList7().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList7() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList7());
				TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
				TS_ASSERT(obj1.contains_ListOfList7("Hello Solar System!"));
				TS_ASSERT(obj1.contains_ListOfList7("Hello Milky Way!"));
			
				obj1.clear_ListOfList7();
				TS_ASSERT(obj1.getListOfList7().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList7() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList7());
				TS_ASSERT(!obj1.contains_ListOfList7("Hello World!"));
				TS_ASSERT(!obj1.contains_ListOfList7("Hello Solar System!"));
				TS_ASSERT(!obj1.contains_ListOfList7("Hello Milky Way!"));
			}
			obj1.addTo_ListOfList7("Hello World!");
			TS_ASSERT(obj1.getListOfList7().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList7() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList7());
			TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
			TS_ASSERT(!obj1.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(!obj1.contains_ListOfList7("Hello Milky Way!"));
			
			obj1.addTo_ListOfList7("Hello Solar System!");
			TS_ASSERT(obj1.getListOfList7().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList7() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList7());
			TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(!obj1.contains_ListOfList7("Hello Milky Way!"));
			
			obj1.insertTo_ListOfList7("Hello Milky Way!");
			TS_ASSERT(obj1.getListOfList7().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList7() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList7());
			TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Milky Way!"));
	
			TS_ASSERT(obj1.getListOfList1().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList1() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1(true));
			TS_ASSERT(obj1.contains_ListOfList1(false));
			TS_ASSERT(obj1.getListOfList2().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList2() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.contains_ListOfList2('d'));
			TS_ASSERT(obj1.contains_ListOfList2('e'));
			TS_ASSERT(obj1.contains_ListOfList2('f'));
			TS_ASSERT(obj1.getListOfList3().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList3() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.contains_ListOfList3(-300));
			TS_ASSERT(obj1.contains_ListOfList3(-400));
			TS_ASSERT(obj1.contains_ListOfList3(-500));
			TS_ASSERT(obj1.getListOfList4().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList4() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.contains_ListOfList4(600));
			TS_ASSERT(obj1.contains_ListOfList4(700));
			TS_ASSERT(obj1.contains_ListOfList4(800));
			TS_ASSERT(obj1.getListOfList5().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList5() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.contains_ListOfList5(4.5));
			TS_ASSERT(obj1.contains_ListOfList5(5.5));
			TS_ASSERT(obj1.contains_ListOfList5(6.5));
			TS_ASSERT(obj1.getListOfList6().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList6() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.contains_ListOfList6(1.0));
			TS_ASSERT(obj1.contains_ListOfList6(2.0));
			TS_ASSERT(obj1.contains_ListOfList6(3.0));
			TS_ASSERT(obj1.getListOfList7().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList7() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList7());
			TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Milky Way!"));
		}
	
		void testCreateAndCopyObject() {
	
			Test11Lists obj1;
			TS_ASSERT(obj1.getListOfList1().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList1() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.getListOfList2().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList2() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.getListOfList3().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList3() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.getListOfList4().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList4() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.getListOfList5().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList5() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.getListOfList6().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList6() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.getListOfList7().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList7() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList7());
	
			Test11Lists obj2(obj1);
			TS_ASSERT(obj1.getSize_ListOfList1() == obj2.getSize_ListOfList1());
			TS_ASSERT(obj1.isEmpty_ListOfList1() == obj2.isEmpty_ListOfList1());
			TS_ASSERT(obj1.getSize_ListOfList2() == obj2.getSize_ListOfList2());
			TS_ASSERT(obj1.isEmpty_ListOfList2() == obj2.isEmpty_ListOfList2());
			TS_ASSERT(obj1.getSize_ListOfList3() == obj2.getSize_ListOfList3());
			TS_ASSERT(obj1.isEmpty_ListOfList3() == obj2.isEmpty_ListOfList3());
			TS_ASSERT(obj1.getSize_ListOfList4() == obj2.getSize_ListOfList4());
			TS_ASSERT(obj1.isEmpty_ListOfList4() == obj2.isEmpty_ListOfList4());
			TS_ASSERT(obj1.getSize_ListOfList5() == obj2.getSize_ListOfList5());
			TS_ASSERT(obj1.isEmpty_ListOfList5() == obj2.isEmpty_ListOfList5());
			TS_ASSERT(obj1.getSize_ListOfList6() == obj2.getSize_ListOfList6());
			TS_ASSERT(obj1.isEmpty_ListOfList6() == obj2.isEmpty_ListOfList6());
			TS_ASSERT(obj1.getSize_ListOfList7() == obj2.getSize_ListOfList7());
			TS_ASSERT(obj1.isEmpty_ListOfList7() == obj2.isEmpty_ListOfList7());
	
			{
				std::vector<bool> myExternalList;
				myExternalList.push_back(true);
				myExternalList.push_back(false);
			
				obj1.clear_ListOfList1();
				TS_ASSERT(obj1.getListOfList1().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList1() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList1());
				TS_ASSERT(!obj1.contains_ListOfList1(true));
				TS_ASSERT(!obj1.contains_ListOfList1(false));
			
				obj1.setListOfList1(myExternalList);
				TS_ASSERT(obj1.getListOfList1().size() == 2);
				TS_ASSERT(obj1.getSize_ListOfList1() == 2);
				TS_ASSERT(!obj1.isEmpty_ListOfList1());
				TS_ASSERT(obj1.contains_ListOfList1(true));
				TS_ASSERT(obj1.contains_ListOfList1(false));
			
				obj1.clear_ListOfList1();
				TS_ASSERT(obj1.getListOfList1().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList1() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList1());
				TS_ASSERT(!obj1.contains_ListOfList1(true));
				TS_ASSERT(!obj1.contains_ListOfList1(false));
			}
			obj1.addTo_ListOfList1(true);
			TS_ASSERT(obj1.getListOfList1().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList1() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1(true));
			TS_ASSERT(!obj1.contains_ListOfList1(false));
			
			obj1.addTo_ListOfList1(false);
			TS_ASSERT(obj1.getListOfList1().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList1() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1(true));
			TS_ASSERT(obj1.contains_ListOfList1(false));
			
			{
				std::vector<char> myExternalList;
				myExternalList.push_back('d');
				myExternalList.push_back('e');
				myExternalList.push_back('f');
			
				obj1.clear_ListOfList2();
				TS_ASSERT(obj1.getListOfList2().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList2() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList2());
				TS_ASSERT(!obj1.contains_ListOfList2('d'));
				TS_ASSERT(!obj1.contains_ListOfList2('e'));
				TS_ASSERT(!obj1.contains_ListOfList2('f'));
			
				obj1.setListOfList2(myExternalList);
				TS_ASSERT(obj1.getListOfList2().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList2() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList2());
				TS_ASSERT(obj1.contains_ListOfList2('d'));
				TS_ASSERT(obj1.contains_ListOfList2('e'));
				TS_ASSERT(obj1.contains_ListOfList2('f'));
			
				obj1.clear_ListOfList2();
				TS_ASSERT(obj1.getListOfList2().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList2() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList2());
				TS_ASSERT(!obj1.contains_ListOfList2('d'));
				TS_ASSERT(!obj1.contains_ListOfList2('e'));
				TS_ASSERT(!obj1.contains_ListOfList2('f'));
			}
			obj1.addTo_ListOfList2('d');
			TS_ASSERT(obj1.getListOfList2().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList2() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.contains_ListOfList2('d'));
			TS_ASSERT(!obj1.contains_ListOfList2('e'));
			TS_ASSERT(!obj1.contains_ListOfList2('f'));
			
			obj1.addTo_ListOfList2('e');
			TS_ASSERT(obj1.getListOfList2().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList2() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.contains_ListOfList2('d'));
			TS_ASSERT(obj1.contains_ListOfList2('e'));
			TS_ASSERT(!obj1.contains_ListOfList2('f'));
			
			obj1.insertTo_ListOfList2('f');
			TS_ASSERT(obj1.getListOfList2().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList2() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.contains_ListOfList2('d'));
			TS_ASSERT(obj1.contains_ListOfList2('e'));
			TS_ASSERT(obj1.contains_ListOfList2('f'));
			{
				std::vector<int32_t> myExternalList;
				myExternalList.push_back(-300);
				myExternalList.push_back(-400);
				myExternalList.push_back(-500);
			
				obj1.clear_ListOfList3();
				TS_ASSERT(obj1.getListOfList3().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList3() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList3());
				TS_ASSERT(!obj1.contains_ListOfList3(-300));
				TS_ASSERT(!obj1.contains_ListOfList3(-400));
				TS_ASSERT(!obj1.contains_ListOfList3(-500));
			
				obj1.setListOfList3(myExternalList);
				TS_ASSERT(obj1.getListOfList3().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList3() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList3());
				TS_ASSERT(obj1.contains_ListOfList3(-300));
				TS_ASSERT(obj1.contains_ListOfList3(-400));
				TS_ASSERT(obj1.contains_ListOfList3(-500));
			
				obj1.clear_ListOfList3();
				TS_ASSERT(obj1.getListOfList3().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList3() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList3());
				TS_ASSERT(!obj1.contains_ListOfList3(-300));
				TS_ASSERT(!obj1.contains_ListOfList3(-400));
				TS_ASSERT(!obj1.contains_ListOfList3(-500));
			}
			obj1.addTo_ListOfList3(-300);
			TS_ASSERT(obj1.getListOfList3().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList3() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.contains_ListOfList3(-300));
			TS_ASSERT(!obj1.contains_ListOfList3(-400));
			TS_ASSERT(!obj1.contains_ListOfList3(-500));
			
			obj1.addTo_ListOfList3(-400);
			TS_ASSERT(obj1.getListOfList3().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList3() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.contains_ListOfList3(-300));
			TS_ASSERT(obj1.contains_ListOfList3(-400));
			TS_ASSERT(!obj1.contains_ListOfList3(-500));
			
			obj1.insertTo_ListOfList3(-500);
			TS_ASSERT(obj1.getListOfList3().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList3() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.contains_ListOfList3(-300));
			TS_ASSERT(obj1.contains_ListOfList3(-400));
			TS_ASSERT(obj1.contains_ListOfList3(-500));
			{
				std::vector<uint32_t> myExternalList;
				myExternalList.push_back(600);
				myExternalList.push_back(700);
				myExternalList.push_back(800);
			
				obj1.clear_ListOfList4();
				TS_ASSERT(obj1.getListOfList4().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList4() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList4());
				TS_ASSERT(!obj1.contains_ListOfList4(600));
				TS_ASSERT(!obj1.contains_ListOfList4(700));
				TS_ASSERT(!obj1.contains_ListOfList4(800));
			
				obj1.setListOfList4(myExternalList);
				TS_ASSERT(obj1.getListOfList4().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList4() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList4());
				TS_ASSERT(obj1.contains_ListOfList4(600));
				TS_ASSERT(obj1.contains_ListOfList4(700));
				TS_ASSERT(obj1.contains_ListOfList4(800));
			
				obj1.clear_ListOfList4();
				TS_ASSERT(obj1.getListOfList4().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList4() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList4());
				TS_ASSERT(!obj1.contains_ListOfList4(600));
				TS_ASSERT(!obj1.contains_ListOfList4(700));
				TS_ASSERT(!obj1.contains_ListOfList4(800));
			}
			obj1.addTo_ListOfList4(600);
			TS_ASSERT(obj1.getListOfList4().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList4() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.contains_ListOfList4(600));
			TS_ASSERT(!obj1.contains_ListOfList4(700));
			TS_ASSERT(!obj1.contains_ListOfList4(800));
			
			obj1.addTo_ListOfList4(700);
			TS_ASSERT(obj1.getListOfList4().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList4() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.contains_ListOfList4(600));
			TS_ASSERT(obj1.contains_ListOfList4(700));
			TS_ASSERT(!obj1.contains_ListOfList4(800));
			
			obj1.insertTo_ListOfList4(800);
			TS_ASSERT(obj1.getListOfList4().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList4() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.contains_ListOfList4(600));
			TS_ASSERT(obj1.contains_ListOfList4(700));
			TS_ASSERT(obj1.contains_ListOfList4(800));
			{
				std::vector<float> myExternalList;
				myExternalList.push_back(4.5);
				myExternalList.push_back(5.5);
				myExternalList.push_back(6.5);
			
				obj1.clear_ListOfList5();
				TS_ASSERT(obj1.getListOfList5().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList5() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList5());
				TS_ASSERT(!obj1.contains_ListOfList5(4.5));
				TS_ASSERT(!obj1.contains_ListOfList5(5.5));
				TS_ASSERT(!obj1.contains_ListOfList5(6.5));
			
				obj1.setListOfList5(myExternalList);
				TS_ASSERT(obj1.getListOfList5().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList5() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList5());
				TS_ASSERT(obj1.contains_ListOfList5(4.5));
				TS_ASSERT(obj1.contains_ListOfList5(5.5));
				TS_ASSERT(obj1.contains_ListOfList5(6.5));
			
				obj1.clear_ListOfList5();
				TS_ASSERT(obj1.getListOfList5().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList5() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList5());
				TS_ASSERT(!obj1.contains_ListOfList5(4.5));
				TS_ASSERT(!obj1.contains_ListOfList5(5.5));
				TS_ASSERT(!obj1.contains_ListOfList5(6.5));
			}
			obj1.addTo_ListOfList5(4.5);
			TS_ASSERT(obj1.getListOfList5().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList5() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.contains_ListOfList5(4.5));
			TS_ASSERT(!obj1.contains_ListOfList5(5.5));
			TS_ASSERT(!obj1.contains_ListOfList5(6.5));
			
			obj1.addTo_ListOfList5(5.5);
			TS_ASSERT(obj1.getListOfList5().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList5() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.contains_ListOfList5(4.5));
			TS_ASSERT(obj1.contains_ListOfList5(5.5));
			TS_ASSERT(!obj1.contains_ListOfList5(6.5));
			
			obj1.insertTo_ListOfList5(6.5);
			TS_ASSERT(obj1.getListOfList5().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList5() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.contains_ListOfList5(4.5));
			TS_ASSERT(obj1.contains_ListOfList5(5.5));
			TS_ASSERT(obj1.contains_ListOfList5(6.5));
			{
				std::vector<double> myExternalList;
				myExternalList.push_back(1.0);
				myExternalList.push_back(2.0);
				myExternalList.push_back(3.0);
			
				obj1.clear_ListOfList6();
				TS_ASSERT(obj1.getListOfList6().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList6() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList6());
				TS_ASSERT(!obj1.contains_ListOfList6(1.0));
				TS_ASSERT(!obj1.contains_ListOfList6(2.0));
				TS_ASSERT(!obj1.contains_ListOfList6(3.0));
			
				obj1.setListOfList6(myExternalList);
				TS_ASSERT(obj1.getListOfList6().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList6() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList6());
				TS_ASSERT(obj1.contains_ListOfList6(1.0));
				TS_ASSERT(obj1.contains_ListOfList6(2.0));
				TS_ASSERT(obj1.contains_ListOfList6(3.0));
			
				obj1.clear_ListOfList6();
				TS_ASSERT(obj1.getListOfList6().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList6() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList6());
				TS_ASSERT(!obj1.contains_ListOfList6(1.0));
				TS_ASSERT(!obj1.contains_ListOfList6(2.0));
				TS_ASSERT(!obj1.contains_ListOfList6(3.0));
			}
			obj1.addTo_ListOfList6(1.0);
			TS_ASSERT(obj1.getListOfList6().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList6() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.contains_ListOfList6(1.0));
			TS_ASSERT(!obj1.contains_ListOfList6(2.0));
			TS_ASSERT(!obj1.contains_ListOfList6(3.0));
			
			obj1.addTo_ListOfList6(2.0);
			TS_ASSERT(obj1.getListOfList6().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList6() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.contains_ListOfList6(1.0));
			TS_ASSERT(obj1.contains_ListOfList6(2.0));
			TS_ASSERT(!obj1.contains_ListOfList6(3.0));
			
			obj1.insertTo_ListOfList6(3.0);
			TS_ASSERT(obj1.getListOfList6().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList6() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.contains_ListOfList6(1.0));
			TS_ASSERT(obj1.contains_ListOfList6(2.0));
			TS_ASSERT(obj1.contains_ListOfList6(3.0));
			{
				std::vector<std::string> myExternalList;
				myExternalList.push_back("Hello World!");
				myExternalList.push_back("Hello Solar System!");
				myExternalList.push_back("Hello Milky Way!");
			
				obj1.clear_ListOfList7();
				TS_ASSERT(obj1.getListOfList7().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList7() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList7());
				TS_ASSERT(!obj1.contains_ListOfList7("Hello World!"));
				TS_ASSERT(!obj1.contains_ListOfList7("Hello Solar System!"));
				TS_ASSERT(!obj1.contains_ListOfList7("Hello Milky Way!"));
			
				obj1.setListOfList7(myExternalList);
				TS_ASSERT(obj1.getListOfList7().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList7() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList7());
				TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
				TS_ASSERT(obj1.contains_ListOfList7("Hello Solar System!"));
				TS_ASSERT(obj1.contains_ListOfList7("Hello Milky Way!"));
			
				obj1.clear_ListOfList7();
				TS_ASSERT(obj1.getListOfList7().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList7() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList7());
				TS_ASSERT(!obj1.contains_ListOfList7("Hello World!"));
				TS_ASSERT(!obj1.contains_ListOfList7("Hello Solar System!"));
				TS_ASSERT(!obj1.contains_ListOfList7("Hello Milky Way!"));
			}
			obj1.addTo_ListOfList7("Hello World!");
			TS_ASSERT(obj1.getListOfList7().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList7() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList7());
			TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
			TS_ASSERT(!obj1.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(!obj1.contains_ListOfList7("Hello Milky Way!"));
			
			obj1.addTo_ListOfList7("Hello Solar System!");
			TS_ASSERT(obj1.getListOfList7().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList7() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList7());
			TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(!obj1.contains_ListOfList7("Hello Milky Way!"));
			
			obj1.insertTo_ListOfList7("Hello Milky Way!");
			TS_ASSERT(obj1.getListOfList7().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList7() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList7());
			TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Milky Way!"));
	
			TS_ASSERT(obj1.getListOfList1().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList1() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1(true));
			TS_ASSERT(obj1.contains_ListOfList1(false));
			TS_ASSERT(obj1.getListOfList2().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList2() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.contains_ListOfList2('d'));
			TS_ASSERT(obj1.contains_ListOfList2('e'));
			TS_ASSERT(obj1.contains_ListOfList2('f'));
			TS_ASSERT(obj1.getListOfList3().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList3() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.contains_ListOfList3(-300));
			TS_ASSERT(obj1.contains_ListOfList3(-400));
			TS_ASSERT(obj1.contains_ListOfList3(-500));
			TS_ASSERT(obj1.getListOfList4().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList4() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.contains_ListOfList4(600));
			TS_ASSERT(obj1.contains_ListOfList4(700));
			TS_ASSERT(obj1.contains_ListOfList4(800));
			TS_ASSERT(obj1.getListOfList5().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList5() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.contains_ListOfList5(4.5));
			TS_ASSERT(obj1.contains_ListOfList5(5.5));
			TS_ASSERT(obj1.contains_ListOfList5(6.5));
			TS_ASSERT(obj1.getListOfList6().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList6() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.contains_ListOfList6(1.0));
			TS_ASSERT(obj1.contains_ListOfList6(2.0));
			TS_ASSERT(obj1.contains_ListOfList6(3.0));
			TS_ASSERT(obj1.getListOfList7().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList7() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList7());
			TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Milky Way!"));
	
			Test11Lists obj3(obj1);
			TS_ASSERT(obj1.getSize_ListOfList1() == obj3.getSize_ListOfList1());
			TS_ASSERT(obj1.isEmpty_ListOfList1() == obj3.isEmpty_ListOfList1());
			TS_ASSERT(obj1.getSize_ListOfList2() == obj3.getSize_ListOfList2());
			TS_ASSERT(obj1.isEmpty_ListOfList2() == obj3.isEmpty_ListOfList2());
			TS_ASSERT(obj1.getSize_ListOfList3() == obj3.getSize_ListOfList3());
			TS_ASSERT(obj1.isEmpty_ListOfList3() == obj3.isEmpty_ListOfList3());
			TS_ASSERT(obj1.getSize_ListOfList4() == obj3.getSize_ListOfList4());
			TS_ASSERT(obj1.isEmpty_ListOfList4() == obj3.isEmpty_ListOfList4());
			TS_ASSERT(obj1.getSize_ListOfList5() == obj3.getSize_ListOfList5());
			TS_ASSERT(obj1.isEmpty_ListOfList5() == obj3.isEmpty_ListOfList5());
			TS_ASSERT(obj1.getSize_ListOfList6() == obj3.getSize_ListOfList6());
			TS_ASSERT(obj1.isEmpty_ListOfList6() == obj3.isEmpty_ListOfList6());
			TS_ASSERT(obj1.getSize_ListOfList7() == obj3.getSize_ListOfList7());
			TS_ASSERT(obj1.isEmpty_ListOfList7() == obj3.isEmpty_ListOfList7());
	
			TS_ASSERT(obj3.getListOfList1().size() == 2);
			TS_ASSERT(obj3.getSize_ListOfList1() == 2);
			TS_ASSERT(!obj3.isEmpty_ListOfList1());
			TS_ASSERT(obj3.contains_ListOfList1(true));
			TS_ASSERT(obj3.contains_ListOfList1(false));
			TS_ASSERT(obj3.getListOfList2().size() == 3);
			TS_ASSERT(obj3.getSize_ListOfList2() == 3);
			TS_ASSERT(!obj3.isEmpty_ListOfList2());
			TS_ASSERT(obj3.contains_ListOfList2('d'));
			TS_ASSERT(obj3.contains_ListOfList2('e'));
			TS_ASSERT(obj3.contains_ListOfList2('f'));
			TS_ASSERT(obj3.getListOfList3().size() == 3);
			TS_ASSERT(obj3.getSize_ListOfList3() == 3);
			TS_ASSERT(!obj3.isEmpty_ListOfList3());
			TS_ASSERT(obj3.contains_ListOfList3(-300));
			TS_ASSERT(obj3.contains_ListOfList3(-400));
			TS_ASSERT(obj3.contains_ListOfList3(-500));
			TS_ASSERT(obj3.getListOfList4().size() == 3);
			TS_ASSERT(obj3.getSize_ListOfList4() == 3);
			TS_ASSERT(!obj3.isEmpty_ListOfList4());
			TS_ASSERT(obj3.contains_ListOfList4(600));
			TS_ASSERT(obj3.contains_ListOfList4(700));
			TS_ASSERT(obj3.contains_ListOfList4(800));
			TS_ASSERT(obj3.getListOfList5().size() == 3);
			TS_ASSERT(obj3.getSize_ListOfList5() == 3);
			TS_ASSERT(!obj3.isEmpty_ListOfList5());
			TS_ASSERT(obj3.contains_ListOfList5(4.5));
			TS_ASSERT(obj3.contains_ListOfList5(5.5));
			TS_ASSERT(obj3.contains_ListOfList5(6.5));
			TS_ASSERT(obj3.getListOfList6().size() == 3);
			TS_ASSERT(obj3.getSize_ListOfList6() == 3);
			TS_ASSERT(!obj3.isEmpty_ListOfList6());
			TS_ASSERT(obj3.contains_ListOfList6(1.0));
			TS_ASSERT(obj3.contains_ListOfList6(2.0));
			TS_ASSERT(obj3.contains_ListOfList6(3.0));
			TS_ASSERT(obj3.getListOfList7().size() == 3);
			TS_ASSERT(obj3.getSize_ListOfList7() == 3);
			TS_ASSERT(!obj3.isEmpty_ListOfList7());
			TS_ASSERT(obj3.contains_ListOfList7("Hello World!"));
			TS_ASSERT(obj3.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(obj3.contains_ListOfList7("Hello Milky Way!"));
	
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
	
			Test11Lists obj1;
			TS_ASSERT(obj1.getListOfList1().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList1() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.getListOfList2().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList2() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.getListOfList3().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList3() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.getListOfList4().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList4() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.getListOfList5().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList5() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.getListOfList6().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList6() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.getListOfList7().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList7() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList7());
	
			Test11Lists obj2;
			TS_ASSERT(obj2.getListOfList1().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList1() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList1());
			TS_ASSERT(obj2.getListOfList2().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList2() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList2());
			TS_ASSERT(obj2.getListOfList3().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList3() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList3());
			TS_ASSERT(obj2.getListOfList4().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList4() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList4());
			TS_ASSERT(obj2.getListOfList5().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList5() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList5());
			TS_ASSERT(obj2.getListOfList6().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList6() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList6());
			TS_ASSERT(obj2.getListOfList7().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList7() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList7());
	
			{
				std::vector<bool> myExternalList;
				myExternalList.push_back(true);
				myExternalList.push_back(false);
			
				obj1.clear_ListOfList1();
				TS_ASSERT(obj1.getListOfList1().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList1() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList1());
				TS_ASSERT(!obj1.contains_ListOfList1(true));
				TS_ASSERT(!obj1.contains_ListOfList1(false));
			
				obj1.setListOfList1(myExternalList);
				TS_ASSERT(obj1.getListOfList1().size() == 2);
				TS_ASSERT(obj1.getSize_ListOfList1() == 2);
				TS_ASSERT(!obj1.isEmpty_ListOfList1());
				TS_ASSERT(obj1.contains_ListOfList1(true));
				TS_ASSERT(obj1.contains_ListOfList1(false));
			
				obj1.clear_ListOfList1();
				TS_ASSERT(obj1.getListOfList1().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList1() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList1());
				TS_ASSERT(!obj1.contains_ListOfList1(true));
				TS_ASSERT(!obj1.contains_ListOfList1(false));
			}
			obj1.addTo_ListOfList1(true);
			TS_ASSERT(obj1.getListOfList1().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList1() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1(true));
			TS_ASSERT(!obj1.contains_ListOfList1(false));
			
			obj1.addTo_ListOfList1(false);
			TS_ASSERT(obj1.getListOfList1().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList1() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1(true));
			TS_ASSERT(obj1.contains_ListOfList1(false));
			
			{
				std::vector<char> myExternalList;
				myExternalList.push_back('d');
				myExternalList.push_back('e');
				myExternalList.push_back('f');
			
				obj1.clear_ListOfList2();
				TS_ASSERT(obj1.getListOfList2().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList2() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList2());
				TS_ASSERT(!obj1.contains_ListOfList2('d'));
				TS_ASSERT(!obj1.contains_ListOfList2('e'));
				TS_ASSERT(!obj1.contains_ListOfList2('f'));
			
				obj1.setListOfList2(myExternalList);
				TS_ASSERT(obj1.getListOfList2().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList2() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList2());
				TS_ASSERT(obj1.contains_ListOfList2('d'));
				TS_ASSERT(obj1.contains_ListOfList2('e'));
				TS_ASSERT(obj1.contains_ListOfList2('f'));
			
				obj1.clear_ListOfList2();
				TS_ASSERT(obj1.getListOfList2().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList2() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList2());
				TS_ASSERT(!obj1.contains_ListOfList2('d'));
				TS_ASSERT(!obj1.contains_ListOfList2('e'));
				TS_ASSERT(!obj1.contains_ListOfList2('f'));
			}
			obj1.addTo_ListOfList2('d');
			TS_ASSERT(obj1.getListOfList2().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList2() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.contains_ListOfList2('d'));
			TS_ASSERT(!obj1.contains_ListOfList2('e'));
			TS_ASSERT(!obj1.contains_ListOfList2('f'));
			
			obj1.addTo_ListOfList2('e');
			TS_ASSERT(obj1.getListOfList2().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList2() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.contains_ListOfList2('d'));
			TS_ASSERT(obj1.contains_ListOfList2('e'));
			TS_ASSERT(!obj1.contains_ListOfList2('f'));
			
			obj1.insertTo_ListOfList2('f');
			TS_ASSERT(obj1.getListOfList2().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList2() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.contains_ListOfList2('d'));
			TS_ASSERT(obj1.contains_ListOfList2('e'));
			TS_ASSERT(obj1.contains_ListOfList2('f'));
			{
				std::vector<int32_t> myExternalList;
				myExternalList.push_back(-300);
				myExternalList.push_back(-400);
				myExternalList.push_back(-500);
			
				obj1.clear_ListOfList3();
				TS_ASSERT(obj1.getListOfList3().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList3() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList3());
				TS_ASSERT(!obj1.contains_ListOfList3(-300));
				TS_ASSERT(!obj1.contains_ListOfList3(-400));
				TS_ASSERT(!obj1.contains_ListOfList3(-500));
			
				obj1.setListOfList3(myExternalList);
				TS_ASSERT(obj1.getListOfList3().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList3() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList3());
				TS_ASSERT(obj1.contains_ListOfList3(-300));
				TS_ASSERT(obj1.contains_ListOfList3(-400));
				TS_ASSERT(obj1.contains_ListOfList3(-500));
			
				obj1.clear_ListOfList3();
				TS_ASSERT(obj1.getListOfList3().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList3() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList3());
				TS_ASSERT(!obj1.contains_ListOfList3(-300));
				TS_ASSERT(!obj1.contains_ListOfList3(-400));
				TS_ASSERT(!obj1.contains_ListOfList3(-500));
			}
			obj1.addTo_ListOfList3(-300);
			TS_ASSERT(obj1.getListOfList3().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList3() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.contains_ListOfList3(-300));
			TS_ASSERT(!obj1.contains_ListOfList3(-400));
			TS_ASSERT(!obj1.contains_ListOfList3(-500));
			
			obj1.addTo_ListOfList3(-400);
			TS_ASSERT(obj1.getListOfList3().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList3() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.contains_ListOfList3(-300));
			TS_ASSERT(obj1.contains_ListOfList3(-400));
			TS_ASSERT(!obj1.contains_ListOfList3(-500));
			
			obj1.insertTo_ListOfList3(-500);
			TS_ASSERT(obj1.getListOfList3().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList3() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.contains_ListOfList3(-300));
			TS_ASSERT(obj1.contains_ListOfList3(-400));
			TS_ASSERT(obj1.contains_ListOfList3(-500));
			{
				std::vector<uint32_t> myExternalList;
				myExternalList.push_back(600);
				myExternalList.push_back(700);
				myExternalList.push_back(800);
			
				obj1.clear_ListOfList4();
				TS_ASSERT(obj1.getListOfList4().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList4() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList4());
				TS_ASSERT(!obj1.contains_ListOfList4(600));
				TS_ASSERT(!obj1.contains_ListOfList4(700));
				TS_ASSERT(!obj1.contains_ListOfList4(800));
			
				obj1.setListOfList4(myExternalList);
				TS_ASSERT(obj1.getListOfList4().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList4() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList4());
				TS_ASSERT(obj1.contains_ListOfList4(600));
				TS_ASSERT(obj1.contains_ListOfList4(700));
				TS_ASSERT(obj1.contains_ListOfList4(800));
			
				obj1.clear_ListOfList4();
				TS_ASSERT(obj1.getListOfList4().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList4() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList4());
				TS_ASSERT(!obj1.contains_ListOfList4(600));
				TS_ASSERT(!obj1.contains_ListOfList4(700));
				TS_ASSERT(!obj1.contains_ListOfList4(800));
			}
			obj1.addTo_ListOfList4(600);
			TS_ASSERT(obj1.getListOfList4().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList4() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.contains_ListOfList4(600));
			TS_ASSERT(!obj1.contains_ListOfList4(700));
			TS_ASSERT(!obj1.contains_ListOfList4(800));
			
			obj1.addTo_ListOfList4(700);
			TS_ASSERT(obj1.getListOfList4().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList4() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.contains_ListOfList4(600));
			TS_ASSERT(obj1.contains_ListOfList4(700));
			TS_ASSERT(!obj1.contains_ListOfList4(800));
			
			obj1.insertTo_ListOfList4(800);
			TS_ASSERT(obj1.getListOfList4().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList4() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.contains_ListOfList4(600));
			TS_ASSERT(obj1.contains_ListOfList4(700));
			TS_ASSERT(obj1.contains_ListOfList4(800));
			{
				std::vector<float> myExternalList;
				myExternalList.push_back(4.5);
				myExternalList.push_back(5.5);
				myExternalList.push_back(6.5);
			
				obj1.clear_ListOfList5();
				TS_ASSERT(obj1.getListOfList5().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList5() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList5());
				TS_ASSERT(!obj1.contains_ListOfList5(4.5));
				TS_ASSERT(!obj1.contains_ListOfList5(5.5));
				TS_ASSERT(!obj1.contains_ListOfList5(6.5));
			
				obj1.setListOfList5(myExternalList);
				TS_ASSERT(obj1.getListOfList5().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList5() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList5());
				TS_ASSERT(obj1.contains_ListOfList5(4.5));
				TS_ASSERT(obj1.contains_ListOfList5(5.5));
				TS_ASSERT(obj1.contains_ListOfList5(6.5));
			
				obj1.clear_ListOfList5();
				TS_ASSERT(obj1.getListOfList5().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList5() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList5());
				TS_ASSERT(!obj1.contains_ListOfList5(4.5));
				TS_ASSERT(!obj1.contains_ListOfList5(5.5));
				TS_ASSERT(!obj1.contains_ListOfList5(6.5));
			}
			obj1.addTo_ListOfList5(4.5);
			TS_ASSERT(obj1.getListOfList5().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList5() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.contains_ListOfList5(4.5));
			TS_ASSERT(!obj1.contains_ListOfList5(5.5));
			TS_ASSERT(!obj1.contains_ListOfList5(6.5));
			
			obj1.addTo_ListOfList5(5.5);
			TS_ASSERT(obj1.getListOfList5().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList5() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.contains_ListOfList5(4.5));
			TS_ASSERT(obj1.contains_ListOfList5(5.5));
			TS_ASSERT(!obj1.contains_ListOfList5(6.5));
			
			obj1.insertTo_ListOfList5(6.5);
			TS_ASSERT(obj1.getListOfList5().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList5() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.contains_ListOfList5(4.5));
			TS_ASSERT(obj1.contains_ListOfList5(5.5));
			TS_ASSERT(obj1.contains_ListOfList5(6.5));
			{
				std::vector<double> myExternalList;
				myExternalList.push_back(1.0);
				myExternalList.push_back(2.0);
				myExternalList.push_back(3.0);
			
				obj1.clear_ListOfList6();
				TS_ASSERT(obj1.getListOfList6().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList6() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList6());
				TS_ASSERT(!obj1.contains_ListOfList6(1.0));
				TS_ASSERT(!obj1.contains_ListOfList6(2.0));
				TS_ASSERT(!obj1.contains_ListOfList6(3.0));
			
				obj1.setListOfList6(myExternalList);
				TS_ASSERT(obj1.getListOfList6().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList6() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList6());
				TS_ASSERT(obj1.contains_ListOfList6(1.0));
				TS_ASSERT(obj1.contains_ListOfList6(2.0));
				TS_ASSERT(obj1.contains_ListOfList6(3.0));
			
				obj1.clear_ListOfList6();
				TS_ASSERT(obj1.getListOfList6().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList6() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList6());
				TS_ASSERT(!obj1.contains_ListOfList6(1.0));
				TS_ASSERT(!obj1.contains_ListOfList6(2.0));
				TS_ASSERT(!obj1.contains_ListOfList6(3.0));
			}
			obj1.addTo_ListOfList6(1.0);
			TS_ASSERT(obj1.getListOfList6().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList6() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.contains_ListOfList6(1.0));
			TS_ASSERT(!obj1.contains_ListOfList6(2.0));
			TS_ASSERT(!obj1.contains_ListOfList6(3.0));
			
			obj1.addTo_ListOfList6(2.0);
			TS_ASSERT(obj1.getListOfList6().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList6() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.contains_ListOfList6(1.0));
			TS_ASSERT(obj1.contains_ListOfList6(2.0));
			TS_ASSERT(!obj1.contains_ListOfList6(3.0));
			
			obj1.insertTo_ListOfList6(3.0);
			TS_ASSERT(obj1.getListOfList6().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList6() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.contains_ListOfList6(1.0));
			TS_ASSERT(obj1.contains_ListOfList6(2.0));
			TS_ASSERT(obj1.contains_ListOfList6(3.0));
			{
				std::vector<std::string> myExternalList;
				myExternalList.push_back("Hello World!");
				myExternalList.push_back("Hello Solar System!");
				myExternalList.push_back("Hello Milky Way!");
			
				obj1.clear_ListOfList7();
				TS_ASSERT(obj1.getListOfList7().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList7() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList7());
				TS_ASSERT(!obj1.contains_ListOfList7("Hello World!"));
				TS_ASSERT(!obj1.contains_ListOfList7("Hello Solar System!"));
				TS_ASSERT(!obj1.contains_ListOfList7("Hello Milky Way!"));
			
				obj1.setListOfList7(myExternalList);
				TS_ASSERT(obj1.getListOfList7().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList7() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList7());
				TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
				TS_ASSERT(obj1.contains_ListOfList7("Hello Solar System!"));
				TS_ASSERT(obj1.contains_ListOfList7("Hello Milky Way!"));
			
				obj1.clear_ListOfList7();
				TS_ASSERT(obj1.getListOfList7().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList7() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList7());
				TS_ASSERT(!obj1.contains_ListOfList7("Hello World!"));
				TS_ASSERT(!obj1.contains_ListOfList7("Hello Solar System!"));
				TS_ASSERT(!obj1.contains_ListOfList7("Hello Milky Way!"));
			}
			obj1.addTo_ListOfList7("Hello World!");
			TS_ASSERT(obj1.getListOfList7().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList7() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList7());
			TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
			TS_ASSERT(!obj1.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(!obj1.contains_ListOfList7("Hello Milky Way!"));
			
			obj1.addTo_ListOfList7("Hello Solar System!");
			TS_ASSERT(obj1.getListOfList7().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList7() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList7());
			TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(!obj1.contains_ListOfList7("Hello Milky Way!"));
			
			obj1.insertTo_ListOfList7("Hello Milky Way!");
			TS_ASSERT(obj1.getListOfList7().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList7() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList7());
			TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Milky Way!"));
	
			TS_ASSERT(obj1.getListOfList1().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList1() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1(true));
			TS_ASSERT(obj1.contains_ListOfList1(false));
			TS_ASSERT(obj1.getListOfList2().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList2() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.contains_ListOfList2('d'));
			TS_ASSERT(obj1.contains_ListOfList2('e'));
			TS_ASSERT(obj1.contains_ListOfList2('f'));
			TS_ASSERT(obj1.getListOfList3().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList3() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.contains_ListOfList3(-300));
			TS_ASSERT(obj1.contains_ListOfList3(-400));
			TS_ASSERT(obj1.contains_ListOfList3(-500));
			TS_ASSERT(obj1.getListOfList4().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList4() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.contains_ListOfList4(600));
			TS_ASSERT(obj1.contains_ListOfList4(700));
			TS_ASSERT(obj1.contains_ListOfList4(800));
			TS_ASSERT(obj1.getListOfList5().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList5() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.contains_ListOfList5(4.5));
			TS_ASSERT(obj1.contains_ListOfList5(5.5));
			TS_ASSERT(obj1.contains_ListOfList5(6.5));
			TS_ASSERT(obj1.getListOfList6().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList6() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.contains_ListOfList6(1.0));
			TS_ASSERT(obj1.contains_ListOfList6(2.0));
			TS_ASSERT(obj1.contains_ListOfList6(3.0));
			TS_ASSERT(obj1.getListOfList7().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList7() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList7());
			TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Milky Way!"));
	
			obj2 = obj1;
			TS_ASSERT(obj1.getSize_ListOfList1() == obj2.getSize_ListOfList1());
			TS_ASSERT(obj1.isEmpty_ListOfList1() == obj2.isEmpty_ListOfList1());
			TS_ASSERT(obj1.getSize_ListOfList2() == obj2.getSize_ListOfList2());
			TS_ASSERT(obj1.isEmpty_ListOfList2() == obj2.isEmpty_ListOfList2());
			TS_ASSERT(obj1.getSize_ListOfList3() == obj2.getSize_ListOfList3());
			TS_ASSERT(obj1.isEmpty_ListOfList3() == obj2.isEmpty_ListOfList3());
			TS_ASSERT(obj1.getSize_ListOfList4() == obj2.getSize_ListOfList4());
			TS_ASSERT(obj1.isEmpty_ListOfList4() == obj2.isEmpty_ListOfList4());
			TS_ASSERT(obj1.getSize_ListOfList5() == obj2.getSize_ListOfList5());
			TS_ASSERT(obj1.isEmpty_ListOfList5() == obj2.isEmpty_ListOfList5());
			TS_ASSERT(obj1.getSize_ListOfList6() == obj2.getSize_ListOfList6());
			TS_ASSERT(obj1.isEmpty_ListOfList6() == obj2.isEmpty_ListOfList6());
			TS_ASSERT(obj1.getSize_ListOfList7() == obj2.getSize_ListOfList7());
			TS_ASSERT(obj1.isEmpty_ListOfList7() == obj2.isEmpty_ListOfList7());
	
			TS_ASSERT(obj2.getListOfList1().size() == 2);
			TS_ASSERT(obj2.getSize_ListOfList1() == 2);
			TS_ASSERT(!obj2.isEmpty_ListOfList1());
			TS_ASSERT(obj2.contains_ListOfList1(true));
			TS_ASSERT(obj2.contains_ListOfList1(false));
			TS_ASSERT(obj2.getListOfList2().size() == 3);
			TS_ASSERT(obj2.getSize_ListOfList2() == 3);
			TS_ASSERT(!obj2.isEmpty_ListOfList2());
			TS_ASSERT(obj2.contains_ListOfList2('d'));
			TS_ASSERT(obj2.contains_ListOfList2('e'));
			TS_ASSERT(obj2.contains_ListOfList2('f'));
			TS_ASSERT(obj2.getListOfList3().size() == 3);
			TS_ASSERT(obj2.getSize_ListOfList3() == 3);
			TS_ASSERT(!obj2.isEmpty_ListOfList3());
			TS_ASSERT(obj2.contains_ListOfList3(-300));
			TS_ASSERT(obj2.contains_ListOfList3(-400));
			TS_ASSERT(obj2.contains_ListOfList3(-500));
			TS_ASSERT(obj2.getListOfList4().size() == 3);
			TS_ASSERT(obj2.getSize_ListOfList4() == 3);
			TS_ASSERT(!obj2.isEmpty_ListOfList4());
			TS_ASSERT(obj2.contains_ListOfList4(600));
			TS_ASSERT(obj2.contains_ListOfList4(700));
			TS_ASSERT(obj2.contains_ListOfList4(800));
			TS_ASSERT(obj2.getListOfList5().size() == 3);
			TS_ASSERT(obj2.getSize_ListOfList5() == 3);
			TS_ASSERT(!obj2.isEmpty_ListOfList5());
			TS_ASSERT(obj2.contains_ListOfList5(4.5));
			TS_ASSERT(obj2.contains_ListOfList5(5.5));
			TS_ASSERT(obj2.contains_ListOfList5(6.5));
			TS_ASSERT(obj2.getListOfList6().size() == 3);
			TS_ASSERT(obj2.getSize_ListOfList6() == 3);
			TS_ASSERT(!obj2.isEmpty_ListOfList6());
			TS_ASSERT(obj2.contains_ListOfList6(1.0));
			TS_ASSERT(obj2.contains_ListOfList6(2.0));
			TS_ASSERT(obj2.contains_ListOfList6(3.0));
			TS_ASSERT(obj2.getListOfList7().size() == 3);
			TS_ASSERT(obj2.getSize_ListOfList7() == 3);
			TS_ASSERT(!obj2.isEmpty_ListOfList7());
			TS_ASSERT(obj2.contains_ListOfList7("Hello World!"));
			TS_ASSERT(obj2.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(obj2.contains_ListOfList7("Hello Milky Way!"));
	
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
	
			Test11Lists obj1;
			TS_ASSERT(obj1.getListOfList1().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList1() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.getListOfList2().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList2() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.getListOfList3().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList3() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.getListOfList4().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList4() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.getListOfList5().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList5() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.getListOfList6().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList6() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.getListOfList7().size() == 0);
			TS_ASSERT(obj1.getSize_ListOfList7() == 0);
			TS_ASSERT(obj1.isEmpty_ListOfList7());
	
			Test11Lists obj2;
			TS_ASSERT(obj2.getListOfList1().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList1() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList1());
			TS_ASSERT(obj2.getListOfList2().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList2() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList2());
			TS_ASSERT(obj2.getListOfList3().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList3() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList3());
			TS_ASSERT(obj2.getListOfList4().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList4() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList4());
			TS_ASSERT(obj2.getListOfList5().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList5() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList5());
			TS_ASSERT(obj2.getListOfList6().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList6() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList6());
			TS_ASSERT(obj2.getListOfList7().size() == 0);
			TS_ASSERT(obj2.getSize_ListOfList7() == 0);
			TS_ASSERT(obj2.isEmpty_ListOfList7());
	
			{
				std::vector<bool> myExternalList;
				myExternalList.push_back(true);
				myExternalList.push_back(false);
			
				obj1.clear_ListOfList1();
				TS_ASSERT(obj1.getListOfList1().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList1() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList1());
				TS_ASSERT(!obj1.contains_ListOfList1(true));
				TS_ASSERT(!obj1.contains_ListOfList1(false));
			
				obj1.setListOfList1(myExternalList);
				TS_ASSERT(obj1.getListOfList1().size() == 2);
				TS_ASSERT(obj1.getSize_ListOfList1() == 2);
				TS_ASSERT(!obj1.isEmpty_ListOfList1());
				TS_ASSERT(obj1.contains_ListOfList1(true));
				TS_ASSERT(obj1.contains_ListOfList1(false));
			
				obj1.clear_ListOfList1();
				TS_ASSERT(obj1.getListOfList1().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList1() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList1());
				TS_ASSERT(!obj1.contains_ListOfList1(true));
				TS_ASSERT(!obj1.contains_ListOfList1(false));
			}
			obj1.addTo_ListOfList1(true);
			TS_ASSERT(obj1.getListOfList1().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList1() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1(true));
			TS_ASSERT(!obj1.contains_ListOfList1(false));
			
			obj1.addTo_ListOfList1(false);
			TS_ASSERT(obj1.getListOfList1().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList1() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1(true));
			TS_ASSERT(obj1.contains_ListOfList1(false));
			
			{
				std::vector<char> myExternalList;
				myExternalList.push_back('d');
				myExternalList.push_back('e');
				myExternalList.push_back('f');
			
				obj1.clear_ListOfList2();
				TS_ASSERT(obj1.getListOfList2().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList2() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList2());
				TS_ASSERT(!obj1.contains_ListOfList2('d'));
				TS_ASSERT(!obj1.contains_ListOfList2('e'));
				TS_ASSERT(!obj1.contains_ListOfList2('f'));
			
				obj1.setListOfList2(myExternalList);
				TS_ASSERT(obj1.getListOfList2().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList2() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList2());
				TS_ASSERT(obj1.contains_ListOfList2('d'));
				TS_ASSERT(obj1.contains_ListOfList2('e'));
				TS_ASSERT(obj1.contains_ListOfList2('f'));
			
				obj1.clear_ListOfList2();
				TS_ASSERT(obj1.getListOfList2().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList2() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList2());
				TS_ASSERT(!obj1.contains_ListOfList2('d'));
				TS_ASSERT(!obj1.contains_ListOfList2('e'));
				TS_ASSERT(!obj1.contains_ListOfList2('f'));
			}
			obj1.addTo_ListOfList2('d');
			TS_ASSERT(obj1.getListOfList2().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList2() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.contains_ListOfList2('d'));
			TS_ASSERT(!obj1.contains_ListOfList2('e'));
			TS_ASSERT(!obj1.contains_ListOfList2('f'));
			
			obj1.addTo_ListOfList2('e');
			TS_ASSERT(obj1.getListOfList2().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList2() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.contains_ListOfList2('d'));
			TS_ASSERT(obj1.contains_ListOfList2('e'));
			TS_ASSERT(!obj1.contains_ListOfList2('f'));
			
			obj1.insertTo_ListOfList2('f');
			TS_ASSERT(obj1.getListOfList2().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList2() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.contains_ListOfList2('d'));
			TS_ASSERT(obj1.contains_ListOfList2('e'));
			TS_ASSERT(obj1.contains_ListOfList2('f'));
			{
				std::vector<int32_t> myExternalList;
				myExternalList.push_back(-300);
				myExternalList.push_back(-400);
				myExternalList.push_back(-500);
			
				obj1.clear_ListOfList3();
				TS_ASSERT(obj1.getListOfList3().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList3() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList3());
				TS_ASSERT(!obj1.contains_ListOfList3(-300));
				TS_ASSERT(!obj1.contains_ListOfList3(-400));
				TS_ASSERT(!obj1.contains_ListOfList3(-500));
			
				obj1.setListOfList3(myExternalList);
				TS_ASSERT(obj1.getListOfList3().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList3() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList3());
				TS_ASSERT(obj1.contains_ListOfList3(-300));
				TS_ASSERT(obj1.contains_ListOfList3(-400));
				TS_ASSERT(obj1.contains_ListOfList3(-500));
			
				obj1.clear_ListOfList3();
				TS_ASSERT(obj1.getListOfList3().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList3() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList3());
				TS_ASSERT(!obj1.contains_ListOfList3(-300));
				TS_ASSERT(!obj1.contains_ListOfList3(-400));
				TS_ASSERT(!obj1.contains_ListOfList3(-500));
			}
			obj1.addTo_ListOfList3(-300);
			TS_ASSERT(obj1.getListOfList3().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList3() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.contains_ListOfList3(-300));
			TS_ASSERT(!obj1.contains_ListOfList3(-400));
			TS_ASSERT(!obj1.contains_ListOfList3(-500));
			
			obj1.addTo_ListOfList3(-400);
			TS_ASSERT(obj1.getListOfList3().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList3() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.contains_ListOfList3(-300));
			TS_ASSERT(obj1.contains_ListOfList3(-400));
			TS_ASSERT(!obj1.contains_ListOfList3(-500));
			
			obj1.insertTo_ListOfList3(-500);
			TS_ASSERT(obj1.getListOfList3().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList3() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.contains_ListOfList3(-300));
			TS_ASSERT(obj1.contains_ListOfList3(-400));
			TS_ASSERT(obj1.contains_ListOfList3(-500));
			{
				std::vector<uint32_t> myExternalList;
				myExternalList.push_back(600);
				myExternalList.push_back(700);
				myExternalList.push_back(800);
			
				obj1.clear_ListOfList4();
				TS_ASSERT(obj1.getListOfList4().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList4() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList4());
				TS_ASSERT(!obj1.contains_ListOfList4(600));
				TS_ASSERT(!obj1.contains_ListOfList4(700));
				TS_ASSERT(!obj1.contains_ListOfList4(800));
			
				obj1.setListOfList4(myExternalList);
				TS_ASSERT(obj1.getListOfList4().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList4() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList4());
				TS_ASSERT(obj1.contains_ListOfList4(600));
				TS_ASSERT(obj1.contains_ListOfList4(700));
				TS_ASSERT(obj1.contains_ListOfList4(800));
			
				obj1.clear_ListOfList4();
				TS_ASSERT(obj1.getListOfList4().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList4() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList4());
				TS_ASSERT(!obj1.contains_ListOfList4(600));
				TS_ASSERT(!obj1.contains_ListOfList4(700));
				TS_ASSERT(!obj1.contains_ListOfList4(800));
			}
			obj1.addTo_ListOfList4(600);
			TS_ASSERT(obj1.getListOfList4().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList4() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.contains_ListOfList4(600));
			TS_ASSERT(!obj1.contains_ListOfList4(700));
			TS_ASSERT(!obj1.contains_ListOfList4(800));
			
			obj1.addTo_ListOfList4(700);
			TS_ASSERT(obj1.getListOfList4().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList4() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.contains_ListOfList4(600));
			TS_ASSERT(obj1.contains_ListOfList4(700));
			TS_ASSERT(!obj1.contains_ListOfList4(800));
			
			obj1.insertTo_ListOfList4(800);
			TS_ASSERT(obj1.getListOfList4().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList4() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.contains_ListOfList4(600));
			TS_ASSERT(obj1.contains_ListOfList4(700));
			TS_ASSERT(obj1.contains_ListOfList4(800));
			{
				std::vector<float> myExternalList;
				myExternalList.push_back(4.5);
				myExternalList.push_back(5.5);
				myExternalList.push_back(6.5);
			
				obj1.clear_ListOfList5();
				TS_ASSERT(obj1.getListOfList5().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList5() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList5());
				TS_ASSERT(!obj1.contains_ListOfList5(4.5));
				TS_ASSERT(!obj1.contains_ListOfList5(5.5));
				TS_ASSERT(!obj1.contains_ListOfList5(6.5));
			
				obj1.setListOfList5(myExternalList);
				TS_ASSERT(obj1.getListOfList5().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList5() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList5());
				TS_ASSERT(obj1.contains_ListOfList5(4.5));
				TS_ASSERT(obj1.contains_ListOfList5(5.5));
				TS_ASSERT(obj1.contains_ListOfList5(6.5));
			
				obj1.clear_ListOfList5();
				TS_ASSERT(obj1.getListOfList5().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList5() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList5());
				TS_ASSERT(!obj1.contains_ListOfList5(4.5));
				TS_ASSERT(!obj1.contains_ListOfList5(5.5));
				TS_ASSERT(!obj1.contains_ListOfList5(6.5));
			}
			obj1.addTo_ListOfList5(4.5);
			TS_ASSERT(obj1.getListOfList5().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList5() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.contains_ListOfList5(4.5));
			TS_ASSERT(!obj1.contains_ListOfList5(5.5));
			TS_ASSERT(!obj1.contains_ListOfList5(6.5));
			
			obj1.addTo_ListOfList5(5.5);
			TS_ASSERT(obj1.getListOfList5().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList5() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.contains_ListOfList5(4.5));
			TS_ASSERT(obj1.contains_ListOfList5(5.5));
			TS_ASSERT(!obj1.contains_ListOfList5(6.5));
			
			obj1.insertTo_ListOfList5(6.5);
			TS_ASSERT(obj1.getListOfList5().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList5() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.contains_ListOfList5(4.5));
			TS_ASSERT(obj1.contains_ListOfList5(5.5));
			TS_ASSERT(obj1.contains_ListOfList5(6.5));
			{
				std::vector<double> myExternalList;
				myExternalList.push_back(1.0);
				myExternalList.push_back(2.0);
				myExternalList.push_back(3.0);
			
				obj1.clear_ListOfList6();
				TS_ASSERT(obj1.getListOfList6().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList6() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList6());
				TS_ASSERT(!obj1.contains_ListOfList6(1.0));
				TS_ASSERT(!obj1.contains_ListOfList6(2.0));
				TS_ASSERT(!obj1.contains_ListOfList6(3.0));
			
				obj1.setListOfList6(myExternalList);
				TS_ASSERT(obj1.getListOfList6().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList6() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList6());
				TS_ASSERT(obj1.contains_ListOfList6(1.0));
				TS_ASSERT(obj1.contains_ListOfList6(2.0));
				TS_ASSERT(obj1.contains_ListOfList6(3.0));
			
				obj1.clear_ListOfList6();
				TS_ASSERT(obj1.getListOfList6().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList6() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList6());
				TS_ASSERT(!obj1.contains_ListOfList6(1.0));
				TS_ASSERT(!obj1.contains_ListOfList6(2.0));
				TS_ASSERT(!obj1.contains_ListOfList6(3.0));
			}
			obj1.addTo_ListOfList6(1.0);
			TS_ASSERT(obj1.getListOfList6().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList6() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.contains_ListOfList6(1.0));
			TS_ASSERT(!obj1.contains_ListOfList6(2.0));
			TS_ASSERT(!obj1.contains_ListOfList6(3.0));
			
			obj1.addTo_ListOfList6(2.0);
			TS_ASSERT(obj1.getListOfList6().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList6() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.contains_ListOfList6(1.0));
			TS_ASSERT(obj1.contains_ListOfList6(2.0));
			TS_ASSERT(!obj1.contains_ListOfList6(3.0));
			
			obj1.insertTo_ListOfList6(3.0);
			TS_ASSERT(obj1.getListOfList6().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList6() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.contains_ListOfList6(1.0));
			TS_ASSERT(obj1.contains_ListOfList6(2.0));
			TS_ASSERT(obj1.contains_ListOfList6(3.0));
			{
				std::vector<std::string> myExternalList;
				myExternalList.push_back("Hello World!");
				myExternalList.push_back("Hello Solar System!");
				myExternalList.push_back("Hello Milky Way!");
			
				obj1.clear_ListOfList7();
				TS_ASSERT(obj1.getListOfList7().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList7() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList7());
				TS_ASSERT(!obj1.contains_ListOfList7("Hello World!"));
				TS_ASSERT(!obj1.contains_ListOfList7("Hello Solar System!"));
				TS_ASSERT(!obj1.contains_ListOfList7("Hello Milky Way!"));
			
				obj1.setListOfList7(myExternalList);
				TS_ASSERT(obj1.getListOfList7().size() == 3);
				TS_ASSERT(obj1.getSize_ListOfList7() == 3);
				TS_ASSERT(!obj1.isEmpty_ListOfList7());
				TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
				TS_ASSERT(obj1.contains_ListOfList7("Hello Solar System!"));
				TS_ASSERT(obj1.contains_ListOfList7("Hello Milky Way!"));
			
				obj1.clear_ListOfList7();
				TS_ASSERT(obj1.getListOfList7().size() == 0);
				TS_ASSERT(obj1.getSize_ListOfList7() == 0);
				TS_ASSERT(obj1.isEmpty_ListOfList7());
				TS_ASSERT(!obj1.contains_ListOfList7("Hello World!"));
				TS_ASSERT(!obj1.contains_ListOfList7("Hello Solar System!"));
				TS_ASSERT(!obj1.contains_ListOfList7("Hello Milky Way!"));
			}
			obj1.addTo_ListOfList7("Hello World!");
			TS_ASSERT(obj1.getListOfList7().size() == 1);
			TS_ASSERT(obj1.getSize_ListOfList7() == 1);
			TS_ASSERT(!obj1.isEmpty_ListOfList7());
			TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
			TS_ASSERT(!obj1.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(!obj1.contains_ListOfList7("Hello Milky Way!"));
			
			obj1.addTo_ListOfList7("Hello Solar System!");
			TS_ASSERT(obj1.getListOfList7().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList7() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList7());
			TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(!obj1.contains_ListOfList7("Hello Milky Way!"));
			
			obj1.insertTo_ListOfList7("Hello Milky Way!");
			TS_ASSERT(obj1.getListOfList7().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList7() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList7());
			TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Milky Way!"));
	
			TS_ASSERT(obj1.getListOfList1().size() == 2);
			TS_ASSERT(obj1.getSize_ListOfList1() == 2);
			TS_ASSERT(!obj1.isEmpty_ListOfList1());
			TS_ASSERT(obj1.contains_ListOfList1(true));
			TS_ASSERT(obj1.contains_ListOfList1(false));
			TS_ASSERT(obj1.getListOfList2().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList2() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList2());
			TS_ASSERT(obj1.contains_ListOfList2('d'));
			TS_ASSERT(obj1.contains_ListOfList2('e'));
			TS_ASSERT(obj1.contains_ListOfList2('f'));
			TS_ASSERT(obj1.getListOfList3().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList3() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList3());
			TS_ASSERT(obj1.contains_ListOfList3(-300));
			TS_ASSERT(obj1.contains_ListOfList3(-400));
			TS_ASSERT(obj1.contains_ListOfList3(-500));
			TS_ASSERT(obj1.getListOfList4().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList4() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList4());
			TS_ASSERT(obj1.contains_ListOfList4(600));
			TS_ASSERT(obj1.contains_ListOfList4(700));
			TS_ASSERT(obj1.contains_ListOfList4(800));
			TS_ASSERT(obj1.getListOfList5().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList5() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList5());
			TS_ASSERT(obj1.contains_ListOfList5(4.5));
			TS_ASSERT(obj1.contains_ListOfList5(5.5));
			TS_ASSERT(obj1.contains_ListOfList5(6.5));
			TS_ASSERT(obj1.getListOfList6().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList6() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList6());
			TS_ASSERT(obj1.contains_ListOfList6(1.0));
			TS_ASSERT(obj1.contains_ListOfList6(2.0));
			TS_ASSERT(obj1.contains_ListOfList6(3.0));
			TS_ASSERT(obj1.getListOfList7().size() == 3);
			TS_ASSERT(obj1.getSize_ListOfList7() == 3);
			TS_ASSERT(!obj1.isEmpty_ListOfList7());
			TS_ASSERT(obj1.contains_ListOfList7("Hello World!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(obj1.contains_ListOfList7("Hello Milky Way!"));
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getSize_ListOfList1() == obj2.getSize_ListOfList1());
			TS_ASSERT(obj1.isEmpty_ListOfList1() == obj2.isEmpty_ListOfList1());
			TS_ASSERT(obj1.getSize_ListOfList2() == obj2.getSize_ListOfList2());
			TS_ASSERT(obj1.isEmpty_ListOfList2() == obj2.isEmpty_ListOfList2());
			TS_ASSERT(obj1.getSize_ListOfList3() == obj2.getSize_ListOfList3());
			TS_ASSERT(obj1.isEmpty_ListOfList3() == obj2.isEmpty_ListOfList3());
			TS_ASSERT(obj1.getSize_ListOfList4() == obj2.getSize_ListOfList4());
			TS_ASSERT(obj1.isEmpty_ListOfList4() == obj2.isEmpty_ListOfList4());
			TS_ASSERT(obj1.getSize_ListOfList5() == obj2.getSize_ListOfList5());
			TS_ASSERT(obj1.isEmpty_ListOfList5() == obj2.isEmpty_ListOfList5());
			TS_ASSERT(obj1.getSize_ListOfList6() == obj2.getSize_ListOfList6());
			TS_ASSERT(obj1.isEmpty_ListOfList6() == obj2.isEmpty_ListOfList6());
			TS_ASSERT(obj1.getSize_ListOfList7() == obj2.getSize_ListOfList7());
			TS_ASSERT(obj1.isEmpty_ListOfList7() == obj2.isEmpty_ListOfList7());
	
			TS_ASSERT(obj2.getListOfList1().size() == 2);
			TS_ASSERT(obj2.getSize_ListOfList1() == 2);
			TS_ASSERT(!obj2.isEmpty_ListOfList1());
			TS_ASSERT(obj2.contains_ListOfList1(true));
			TS_ASSERT(obj2.contains_ListOfList1(false));
			TS_ASSERT(obj2.getListOfList2().size() == 3);
			TS_ASSERT(obj2.getSize_ListOfList2() == 3);
			TS_ASSERT(!obj2.isEmpty_ListOfList2());
			TS_ASSERT(obj2.contains_ListOfList2('d'));
			TS_ASSERT(obj2.contains_ListOfList2('e'));
			TS_ASSERT(obj2.contains_ListOfList2('f'));
			TS_ASSERT(obj2.getListOfList3().size() == 3);
			TS_ASSERT(obj2.getSize_ListOfList3() == 3);
			TS_ASSERT(!obj2.isEmpty_ListOfList3());
			TS_ASSERT(obj2.contains_ListOfList3(-300));
			TS_ASSERT(obj2.contains_ListOfList3(-400));
			TS_ASSERT(obj2.contains_ListOfList3(-500));
			TS_ASSERT(obj2.getListOfList4().size() == 3);
			TS_ASSERT(obj2.getSize_ListOfList4() == 3);
			TS_ASSERT(!obj2.isEmpty_ListOfList4());
			TS_ASSERT(obj2.contains_ListOfList4(600));
			TS_ASSERT(obj2.contains_ListOfList4(700));
			TS_ASSERT(obj2.contains_ListOfList4(800));
			TS_ASSERT(obj2.getListOfList5().size() == 3);
			TS_ASSERT(obj2.getSize_ListOfList5() == 3);
			TS_ASSERT(!obj2.isEmpty_ListOfList5());
			TS_ASSERT(obj2.contains_ListOfList5(4.5));
			TS_ASSERT(obj2.contains_ListOfList5(5.5));
			TS_ASSERT(obj2.contains_ListOfList5(6.5));
			TS_ASSERT(obj2.getListOfList6().size() == 3);
			TS_ASSERT(obj2.getSize_ListOfList6() == 3);
			TS_ASSERT(!obj2.isEmpty_ListOfList6());
			TS_ASSERT(obj2.contains_ListOfList6(1.0));
			TS_ASSERT(obj2.contains_ListOfList6(2.0));
			TS_ASSERT(obj2.contains_ListOfList6(3.0));
			TS_ASSERT(obj2.getListOfList7().size() == 3);
			TS_ASSERT(obj2.getSize_ListOfList7() == 3);
			TS_ASSERT(!obj2.isEmpty_ListOfList7());
			TS_ASSERT(obj2.contains_ListOfList7("Hello World!"));
			TS_ASSERT(obj2.contains_ListOfList7("Hello Solar System!"));
			TS_ASSERT(obj2.contains_ListOfList7("Hello Milky Way!"));
	
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*TEST11LISTS_TESTSUITE_H*/
