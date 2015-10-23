/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef TEST11LISTS_H
#define TEST11LISTS_H

// core/platform.h must be included to setup platform-dependent header files and configurations.
#include "core/platform.h"

#include <vector>

#include "core/base/Visitable.h"
#include "core/data/SerializableData.h"


using namespace std;

class Test11Lists : public core::data::SerializableData, public core::base::Visitable {
	public:
		Test11Lists();

		Test11Lists(
		const vector<bool> &val0, 
		const vector<char> &val1, 
		const vector<int32_t> &val2, 
		const vector<uint32_t> &val3, 
		const vector<float> &val4, 
		const vector<double> &val5, 
		const vector<std::string> &val6
		);

		virtual ~Test11Lists();

		/**
		 * Copy constructor.
		 *
		 * @param obj Reference to an object of this class.
		 */
		Test11Lists(const Test11Lists &obj);

		/**
		 * Assignment operator.
		 *
		 * @param obj Reference to an object of this class.
		 * @return Reference to this instance.
		 */
		Test11Lists& operator=(const Test11Lists &obj);

	public:
		/**
		 * @return list1.
		 */
		std::vector<bool> getListOfList1() const;
	
		/**
		 * This method sets list1.
		 *
		 * @param val Value for list1.
		 */
		void setListOfList1(const std::vector<bool> &val);
	
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
		void addTo_ListOfList1(const bool &val);
	
		/**
		 * This method adds an element to the beginning of the list of list1.
		 *
		 * @param val Value to be inserted to the beginning of the list of list1.
		 */
		void insertTo_ListOfList1(const bool &val);
	
		/**
		 * @return true if the list of list1 contains the element val.
		 *              If the list has a complex data type, the entries are compared using their .toString() method.
		 */
		bool contains_ListOfList1(const bool &val) const;
	
		/**
		 * @return Pair of iterators for the begin and end of the list of list1.
		 */
		std::pair<std::vector<bool>::iterator, std::vector<bool>::iterator> iteratorPair_ListOfList1();
	public:
		/**
		 * @return list2.
		 */
		std::vector<char> getListOfList2() const;
	
		/**
		 * This method sets list2.
		 *
		 * @param val Value for list2.
		 */
		void setListOfList2(const std::vector<char> &val);
	
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
		void addTo_ListOfList2(const char &val);
	
		/**
		 * This method adds an element to the beginning of the list of list2.
		 *
		 * @param val Value to be inserted to the beginning of the list of list2.
		 */
		void insertTo_ListOfList2(const char &val);
	
		/**
		 * @return true if the list of list2 contains the element val.
		 *              If the list has a complex data type, the entries are compared using their .toString() method.
		 */
		bool contains_ListOfList2(const char &val) const;
	
		/**
		 * @return Pair of iterators for the begin and end of the list of list2.
		 */
		std::pair<std::vector<char>::iterator, std::vector<char>::iterator> iteratorPair_ListOfList2();
	public:
		/**
		 * @return list3.
		 */
		std::vector<int32_t> getListOfList3() const;
	
		/**
		 * This method sets list3.
		 *
		 * @param val Value for list3.
		 */
		void setListOfList3(const std::vector<int32_t> &val);
	
		/**
		 * This method clears the list of list3.
		 */
		void clear_ListOfList3();
	
		/**
		 * @return the size of the list of list3.
		 */
		uint32_t getSize_ListOfList3() const;
	
		/**
		 * @return true if the list of list3 is empty.
		 */
		bool isEmpty_ListOfList3() const;
	
		/**
		 * This method adds an element to the end of the list of list3.
		 *
		 * @param val Value to be added to the end of the list of list3.
		 */
		void addTo_ListOfList3(const int32_t &val);
	
		/**
		 * This method adds an element to the beginning of the list of list3.
		 *
		 * @param val Value to be inserted to the beginning of the list of list3.
		 */
		void insertTo_ListOfList3(const int32_t &val);
	
		/**
		 * @return true if the list of list3 contains the element val.
		 *              If the list has a complex data type, the entries are compared using their .toString() method.
		 */
		bool contains_ListOfList3(const int32_t &val) const;
	
		/**
		 * @return Pair of iterators for the begin and end of the list of list3.
		 */
		std::pair<std::vector<int32_t>::iterator, std::vector<int32_t>::iterator> iteratorPair_ListOfList3();
	public:
		/**
		 * @return list4.
		 */
		std::vector<uint32_t> getListOfList4() const;
	
		/**
		 * This method sets list4.
		 *
		 * @param val Value for list4.
		 */
		void setListOfList4(const std::vector<uint32_t> &val);
	
		/**
		 * This method clears the list of list4.
		 */
		void clear_ListOfList4();
	
		/**
		 * @return the size of the list of list4.
		 */
		uint32_t getSize_ListOfList4() const;
	
		/**
		 * @return true if the list of list4 is empty.
		 */
		bool isEmpty_ListOfList4() const;
	
		/**
		 * This method adds an element to the end of the list of list4.
		 *
		 * @param val Value to be added to the end of the list of list4.
		 */
		void addTo_ListOfList4(const uint32_t &val);
	
		/**
		 * This method adds an element to the beginning of the list of list4.
		 *
		 * @param val Value to be inserted to the beginning of the list of list4.
		 */
		void insertTo_ListOfList4(const uint32_t &val);
	
		/**
		 * @return true if the list of list4 contains the element val.
		 *              If the list has a complex data type, the entries are compared using their .toString() method.
		 */
		bool contains_ListOfList4(const uint32_t &val) const;
	
		/**
		 * @return Pair of iterators for the begin and end of the list of list4.
		 */
		std::pair<std::vector<uint32_t>::iterator, std::vector<uint32_t>::iterator> iteratorPair_ListOfList4();
	public:
		/**
		 * @return list5.
		 */
		std::vector<float> getListOfList5() const;
	
		/**
		 * This method sets list5.
		 *
		 * @param val Value for list5.
		 */
		void setListOfList5(const std::vector<float> &val);
	
		/**
		 * This method clears the list of list5.
		 */
		void clear_ListOfList5();
	
		/**
		 * @return the size of the list of list5.
		 */
		uint32_t getSize_ListOfList5() const;
	
		/**
		 * @return true if the list of list5 is empty.
		 */
		bool isEmpty_ListOfList5() const;
	
		/**
		 * This method adds an element to the end of the list of list5.
		 *
		 * @param val Value to be added to the end of the list of list5.
		 */
		void addTo_ListOfList5(const float &val);
	
		/**
		 * This method adds an element to the beginning of the list of list5.
		 *
		 * @param val Value to be inserted to the beginning of the list of list5.
		 */
		void insertTo_ListOfList5(const float &val);
	
		/**
		 * @return true if the list of list5 contains the element val.
		 *              If the list has a complex data type, the entries are compared using their .toString() method.
		 */
		bool contains_ListOfList5(const float &val) const;
	
		/**
		 * @return Pair of iterators for the begin and end of the list of list5.
		 */
		std::pair<std::vector<float>::iterator, std::vector<float>::iterator> iteratorPair_ListOfList5();
	public:
		/**
		 * @return list6.
		 */
		std::vector<double> getListOfList6() const;
	
		/**
		 * This method sets list6.
		 *
		 * @param val Value for list6.
		 */
		void setListOfList6(const std::vector<double> &val);
	
		/**
		 * This method clears the list of list6.
		 */
		void clear_ListOfList6();
	
		/**
		 * @return the size of the list of list6.
		 */
		uint32_t getSize_ListOfList6() const;
	
		/**
		 * @return true if the list of list6 is empty.
		 */
		bool isEmpty_ListOfList6() const;
	
		/**
		 * This method adds an element to the end of the list of list6.
		 *
		 * @param val Value to be added to the end of the list of list6.
		 */
		void addTo_ListOfList6(const double &val);
	
		/**
		 * This method adds an element to the beginning of the list of list6.
		 *
		 * @param val Value to be inserted to the beginning of the list of list6.
		 */
		void insertTo_ListOfList6(const double &val);
	
		/**
		 * @return true if the list of list6 contains the element val.
		 *              If the list has a complex data type, the entries are compared using their .toString() method.
		 */
		bool contains_ListOfList6(const double &val) const;
	
		/**
		 * @return Pair of iterators for the begin and end of the list of list6.
		 */
		std::pair<std::vector<double>::iterator, std::vector<double>::iterator> iteratorPair_ListOfList6();
	public:
		/**
		 * @return list7.
		 */
		std::vector<std::string> getListOfList7() const;
	
		/**
		 * This method sets list7.
		 *
		 * @param val Value for list7.
		 */
		void setListOfList7(const std::vector<std::string> &val);
	
		/**
		 * This method clears the list of list7.
		 */
		void clear_ListOfList7();
	
		/**
		 * @return the size of the list of list7.
		 */
		uint32_t getSize_ListOfList7() const;
	
		/**
		 * @return true if the list of list7 is empty.
		 */
		bool isEmpty_ListOfList7() const;
	
		/**
		 * This method adds an element to the end of the list of list7.
		 *
		 * @param val Value to be added to the end of the list of list7.
		 */
		void addTo_ListOfList7(const std::string &val);
	
		/**
		 * This method adds an element to the beginning of the list of list7.
		 *
		 * @param val Value to be inserted to the beginning of the list of list7.
		 */
		void insertTo_ListOfList7(const std::string &val);
	
		/**
		 * @return true if the list of list7 contains the element val.
		 *              If the list has a complex data type, the entries are compared using their .toString() method.
		 */
		bool contains_ListOfList7(const std::string &val) const;
	
		/**
		 * @return Pair of iterators for the begin and end of the list of list7.
		 */
		std::pair<std::vector<std::string>::iterator, std::vector<std::string>::iterator> iteratorPair_ListOfList7();

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
		std::vector<bool> m_listOfList1;
	private:
		std::vector<char> m_listOfList2;
	private:
		std::vector<int32_t> m_listOfList3;
	private:
		std::vector<uint32_t> m_listOfList4;
	private:
		std::vector<float> m_listOfList5;
	private:
		std::vector<double> m_listOfList6;
	private:
		std::vector<std::string> m_listOfList7;

};

#endif /*TEST11LISTS_H*/
