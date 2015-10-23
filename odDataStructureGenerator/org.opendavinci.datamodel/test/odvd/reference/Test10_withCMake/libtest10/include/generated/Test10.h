/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef TEST10_H
#define TEST10_H

// core/platform.h must be included to setup platform-dependent header files and configurations.
#include "core/platform.h"

#include <vector>
#include <map>

#include "core/base/Visitable.h"
#include "core/data/SerializableData.h"

#include "generated/Test10Point.h"
#include "generated/Test10Point.h"

using namespace std;

class Test10 : public core::data::SerializableData, public core::base::Visitable {
	public:
		Test10();

		Test10(
		const vector<std::string> &val0, 
		const vector<Test10Point> &val1, 
		const map<int32_t, std::string> &val2, 
		const map<int32_t, Test10Point> &val3
		);

		virtual ~Test10();

		/**
		 * Copy constructor.
		 *
		 * @param obj Reference to an object of this class.
		 */
		Test10(const Test10 &obj);

		/**
		 * Assignment operator.
		 *
		 * @param obj Reference to an object of this class.
		 * @return Reference to this instance.
		 */
		Test10& operator=(const Test10 &obj);

	public:
		/**
		 * @return list1.
		 */
		std::vector<std::string> getListOfList1() const;
	
		/**
		 * This method sets list1.
		 *
		 * @param val Value for list1.
		 */
		void setListOfList1(const std::vector<std::string> &val);
	
		/**
		 * This method clears the list of list1.
		 */
		void clear_ListOfList1();
	
		/**
		 * @return the size of the list of list1.
		 */
		uint32_t getSize_ListOfList1() const;
	
		/**
		 * @return true if the list of list1 is empty.
		 */
		bool isEmpty_ListOfList1() const;
	
		/**
		 * This method adds an element to the end of the list of list1.
		 *
		 * @param val Value to be added to the end of the list of list1.
		 */
		void addTo_ListOfList1(const std::string &val);
	
		/**
		 * This method adds an element to the beginning of the list of list1.
		 *
		 * @param val Value to be inserted to the beginning of the list of list1.
		 */
		void insertTo_ListOfList1(const std::string &val);
	
		/**
		 * @return true if the list of list1 contains the element val.
		 *              If the list has a complex data type, the entries are compared using their .toString() method.
		 */
		bool contains_ListOfList1(const std::string &val) const;
	
		/**
		 * @return Pair of iterators for the begin and end of the list of list1.
		 */
		std::pair<std::vector<std::string>::iterator, std::vector<std::string>::iterator> iteratorPair_ListOfList1();
	public:
		/**
		 * @return list2.
		 */
		std::vector<Test10Point> getListOfList2() const;
	
		/**
		 * This method sets list2.
		 *
		 * @param val Value for list2.
		 */
		void setListOfList2(const std::vector<Test10Point> &val);
	
		/**
		 * This method clears the list of list2.
		 */
		void clear_ListOfList2();
	
		/**
		 * @return the size of the list of list2.
		 */
		uint32_t getSize_ListOfList2() const;
	
		/**
		 * @return true if the list of list2 is empty.
		 */
		bool isEmpty_ListOfList2() const;
	
		/**
		 * This method adds an element to the end of the list of list2.
		 *
		 * @param val Value to be added to the end of the list of list2.
		 */
		void addTo_ListOfList2(const Test10Point &val);
	
		/**
		 * This method adds an element to the beginning of the list of list2.
		 *
		 * @param val Value to be inserted to the beginning of the list of list2.
		 */
		void insertTo_ListOfList2(const Test10Point &val);
	
		/**
		 * @return true if the list of list2 contains the element val.
		 *              If the list has a complex data type, the entries are compared using their .toString() method.
		 */
		bool contains_ListOfList2(const Test10Point &val) const;
	
		/**
		 * @return Pair of iterators for the begin and end of the list of list2.
		 */
		std::pair<std::vector<Test10Point>::iterator, std::vector<Test10Point>::iterator> iteratorPair_ListOfList2();
	public:
		/**
		 * @return map1.
		 */
		std::map<int32_t, std::string> getMapOfMap1() const;
	
		/**
		 * This method sets map1.
		 *
		 * @param val Value for map1.
		 */
		void setMapOfMap1(const std::map<int32_t, std::string> &val);
	
		/**
		 * This method clears the map of map1.
		 */
		void clear_MapOfMap1();
	
		/**
		 * @return the size of the map of map1.
		 */
		uint32_t getSize_MapOfMap1() const;
	
		/**
		 * @return true if the map of map1 is empty.
		 */
		bool isEmpty_MapOfMap1() const;
	
		/**
		 * This method adds an element to the map of map1.
		 *
		 * @param key Key of the key/value pair to be added to the map of map1.
		 * @param val Value of the key/value pair to be added to the map of map1.
		 */
		void putTo_MapOfMap1(const int32_t &key, const std::string &val);
	
		/**
		 * @return true if the map of map1 is contains the given key.
		 */
		bool containsKey_MapOfMap1(const int32_t &key) const;
	
		/**
		 * This method returns the value to the given key. Make sure to check if the given key exists otherwise a new key/value pair will be added (cf. C++ standard).
		 *
		 * @param key Key for which the value should be returned from the map of map1.
		 * @return Value to given key from the map of map1 is contains the given key.
		 */
		std::string getValueForKey_MapOfMap1(const int32_t &key);
	
		/**
		 * @return Pair of iterators for the begin and end of the map of map1.
		 */
		std::pair<std::map<int32_t, std::string>::iterator, std::map<int32_t, std::string>::iterator> iteratorPair_MapOfMap1();
	public:
		/**
		 * @return map2.
		 */
		std::map<int32_t, Test10Point> getMapOfMap2() const;
	
		/**
		 * This method sets map2.
		 *
		 * @param val Value for map2.
		 */
		void setMapOfMap2(const std::map<int32_t, Test10Point> &val);
	
		/**
		 * This method clears the map of map2.
		 */
		void clear_MapOfMap2();
	
		/**
		 * @return the size of the map of map2.
		 */
		uint32_t getSize_MapOfMap2() const;
	
		/**
		 * @return true if the map of map2 is empty.
		 */
		bool isEmpty_MapOfMap2() const;
	
		/**
		 * This method adds an element to the map of map2.
		 *
		 * @param key Key of the key/value pair to be added to the map of map2.
		 * @param val Value of the key/value pair to be added to the map of map2.
		 */
		void putTo_MapOfMap2(const int32_t &key, const Test10Point &val);
	
		/**
		 * @return true if the map of map2 is contains the given key.
		 */
		bool containsKey_MapOfMap2(const int32_t &key) const;
	
		/**
		 * This method returns the value to the given key. Make sure to check if the given key exists otherwise a new key/value pair will be added (cf. C++ standard).
		 *
		 * @param key Key for which the value should be returned from the map of map2.
		 * @return Value to given key from the map of map2 is contains the given key.
		 */
		Test10Point getValueForKey_MapOfMap2(const int32_t &key);
	
		/**
		 * @return Pair of iterators for the begin and end of the map of map2.
		 */
		std::pair<std::map<int32_t, Test10Point>::iterator, std::map<int32_t, Test10Point>::iterator> iteratorPair_MapOfMap2();

	public:
		/**
		 * This method returns the message id.
		 *
		 * @return Message id.
		 */
		static int32_t ID();

		/**
		 * This method returns the short message name.
		 *
		 * @return Short message name.
		 */
		static const string ShortName();

		/**
		 * This method returns the long message name include package/sub structure.
		 *
		 * @return Long message name.
		 */
		static const string LongName();

	public:
		virtual void accept(core::base::Visitor &v);

		virtual ostream& operator<<(ostream &out) const;
		virtual istream& operator>>(istream &in);

		virtual const string toString() const;

	private:
		std::vector<std::string> m_listOfList1;
	private:
		std::vector<Test10Point> m_listOfList2;
	private:
		std::map<int32_t, std::string> m_mapOfMap1;
	private:
		std::map<int32_t, Test10Point> m_mapOfMap2;

};

#endif /*TEST10_H*/
