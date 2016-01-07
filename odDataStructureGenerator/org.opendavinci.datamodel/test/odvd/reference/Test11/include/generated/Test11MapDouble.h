/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef TEST11MAPDOUBLE_H
#define TEST11MAPDOUBLE_H

#include "core/opendavinci.h"

#include <map>

#include "core/base/Visitable.h"
#include "core/data/SerializableData.h"


using namespace std;

class Test11MapDouble : public core::data::SerializableData, public core::base::Visitable {
	public:
		Test11MapDouble();

		Test11MapDouble(
		const map<double, bool> &val0, 
		const map<double, char> &val1, 
		const map<double, int32_t> &val2, 
		const map<double, uint32_t> &val3, 
		const map<double, float> &val4, 
		const map<double, double> &val5, 
		const map<double, std::string> &val6
		);

		virtual ~Test11MapDouble();

		/**
		 * Copy constructor.
		 *
		 * @param obj Reference to an object of this class.
		 */
		Test11MapDouble(const Test11MapDouble &obj);

		/**
		 * Assignment operator.
		 *
		 * @param obj Reference to an object of this class.
		 * @return Reference to this instance.
		 */
		Test11MapDouble& operator=(const Test11MapDouble &obj);

	public:
		/**
		 * @return map1.
		 */
		std::map<double, bool> getMapOfMap1() const;
	
		/**
		 * This method sets map1.
		 *
		 * @param val Value for map1.
		 */
		void setMapOfMap1(const std::map<double, bool> &val);
	
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
		void putTo_MapOfMap1(const double &key, const bool &val);
	
		/**
		 * @return true if the map of map1 is contains the given key.
		 */
		bool containsKey_MapOfMap1(const double &key) const;
	
		/**
		 * This method returns the value to the given key. Make sure to check if the given key exists otherwise a new key/value pair will be added (cf. C++ standard).
		 *
		 * @param key Key for which the value should be returned from the map of map1.
		 * @return Value to given key from the map of map1 is contains the given key.
		 */
		bool getValueForKey_MapOfMap1(const double &key);
	
		/**
		 * @return Pair of iterators for the begin and end of the map of map1.
		 */
		std::pair<std::map<double, bool>::iterator, std::map<double, bool>::iterator> iteratorPair_MapOfMap1();
	public:
		/**
		 * @return map2.
		 */
		std::map<double, char> getMapOfMap2() const;
	
		/**
		 * This method sets map2.
		 *
		 * @param val Value for map2.
		 */
		void setMapOfMap2(const std::map<double, char> &val);
	
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
		void putTo_MapOfMap2(const double &key, const char &val);
	
		/**
		 * @return true if the map of map2 is contains the given key.
		 */
		bool containsKey_MapOfMap2(const double &key) const;
	
		/**
		 * This method returns the value to the given key. Make sure to check if the given key exists otherwise a new key/value pair will be added (cf. C++ standard).
		 *
		 * @param key Key for which the value should be returned from the map of map2.
		 * @return Value to given key from the map of map2 is contains the given key.
		 */
		char getValueForKey_MapOfMap2(const double &key);
	
		/**
		 * @return Pair of iterators for the begin and end of the map of map2.
		 */
		std::pair<std::map<double, char>::iterator, std::map<double, char>::iterator> iteratorPair_MapOfMap2();
	public:
		/**
		 * @return map3.
		 */
		std::map<double, int32_t> getMapOfMap3() const;
	
		/**
		 * This method sets map3.
		 *
		 * @param val Value for map3.
		 */
		void setMapOfMap3(const std::map<double, int32_t> &val);
	
		/**
		 * This method clears the map of map3.
		 */
		void clear_MapOfMap3();
	
		/**
		 * @return the size of the map of map3.
		 */
		uint32_t getSize_MapOfMap3() const;
	
		/**
		 * @return true if the map of map3 is empty.
		 */
		bool isEmpty_MapOfMap3() const;
	
		/**
		 * This method adds an element to the map of map3.
		 *
		 * @param key Key of the key/value pair to be added to the map of map3.
		 * @param val Value of the key/value pair to be added to the map of map3.
		 */
		void putTo_MapOfMap3(const double &key, const int32_t &val);
	
		/**
		 * @return true if the map of map3 is contains the given key.
		 */
		bool containsKey_MapOfMap3(const double &key) const;
	
		/**
		 * This method returns the value to the given key. Make sure to check if the given key exists otherwise a new key/value pair will be added (cf. C++ standard).
		 *
		 * @param key Key for which the value should be returned from the map of map3.
		 * @return Value to given key from the map of map3 is contains the given key.
		 */
		int32_t getValueForKey_MapOfMap3(const double &key);
	
		/**
		 * @return Pair of iterators for the begin and end of the map of map3.
		 */
		std::pair<std::map<double, int32_t>::iterator, std::map<double, int32_t>::iterator> iteratorPair_MapOfMap3();
	public:
		/**
		 * @return map4.
		 */
		std::map<double, uint32_t> getMapOfMap4() const;
	
		/**
		 * This method sets map4.
		 *
		 * @param val Value for map4.
		 */
		void setMapOfMap4(const std::map<double, uint32_t> &val);
	
		/**
		 * This method clears the map of map4.
		 */
		void clear_MapOfMap4();
	
		/**
		 * @return the size of the map of map4.
		 */
		uint32_t getSize_MapOfMap4() const;
	
		/**
		 * @return true if the map of map4 is empty.
		 */
		bool isEmpty_MapOfMap4() const;
	
		/**
		 * This method adds an element to the map of map4.
		 *
		 * @param key Key of the key/value pair to be added to the map of map4.
		 * @param val Value of the key/value pair to be added to the map of map4.
		 */
		void putTo_MapOfMap4(const double &key, const uint32_t &val);
	
		/**
		 * @return true if the map of map4 is contains the given key.
		 */
		bool containsKey_MapOfMap4(const double &key) const;
	
		/**
		 * This method returns the value to the given key. Make sure to check if the given key exists otherwise a new key/value pair will be added (cf. C++ standard).
		 *
		 * @param key Key for which the value should be returned from the map of map4.
		 * @return Value to given key from the map of map4 is contains the given key.
		 */
		uint32_t getValueForKey_MapOfMap4(const double &key);
	
		/**
		 * @return Pair of iterators for the begin and end of the map of map4.
		 */
		std::pair<std::map<double, uint32_t>::iterator, std::map<double, uint32_t>::iterator> iteratorPair_MapOfMap4();
	public:
		/**
		 * @return map5.
		 */
		std::map<double, float> getMapOfMap5() const;
	
		/**
		 * This method sets map5.
		 *
		 * @param val Value for map5.
		 */
		void setMapOfMap5(const std::map<double, float> &val);
	
		/**
		 * This method clears the map of map5.
		 */
		void clear_MapOfMap5();
	
		/**
		 * @return the size of the map of map5.
		 */
		uint32_t getSize_MapOfMap5() const;
	
		/**
		 * @return true if the map of map5 is empty.
		 */
		bool isEmpty_MapOfMap5() const;
	
		/**
		 * This method adds an element to the map of map5.
		 *
		 * @param key Key of the key/value pair to be added to the map of map5.
		 * @param val Value of the key/value pair to be added to the map of map5.
		 */
		void putTo_MapOfMap5(const double &key, const float &val);
	
		/**
		 * @return true if the map of map5 is contains the given key.
		 */
		bool containsKey_MapOfMap5(const double &key) const;
	
		/**
		 * This method returns the value to the given key. Make sure to check if the given key exists otherwise a new key/value pair will be added (cf. C++ standard).
		 *
		 * @param key Key for which the value should be returned from the map of map5.
		 * @return Value to given key from the map of map5 is contains the given key.
		 */
		float getValueForKey_MapOfMap5(const double &key);
	
		/**
		 * @return Pair of iterators for the begin and end of the map of map5.
		 */
		std::pair<std::map<double, float>::iterator, std::map<double, float>::iterator> iteratorPair_MapOfMap5();
	public:
		/**
		 * @return map6.
		 */
		std::map<double, double> getMapOfMap6() const;
	
		/**
		 * This method sets map6.
		 *
		 * @param val Value for map6.
		 */
		void setMapOfMap6(const std::map<double, double> &val);
	
		/**
		 * This method clears the map of map6.
		 */
		void clear_MapOfMap6();
	
		/**
		 * @return the size of the map of map6.
		 */
		uint32_t getSize_MapOfMap6() const;
	
		/**
		 * @return true if the map of map6 is empty.
		 */
		bool isEmpty_MapOfMap6() const;
	
		/**
		 * This method adds an element to the map of map6.
		 *
		 * @param key Key of the key/value pair to be added to the map of map6.
		 * @param val Value of the key/value pair to be added to the map of map6.
		 */
		void putTo_MapOfMap6(const double &key, const double &val);
	
		/**
		 * @return true if the map of map6 is contains the given key.
		 */
		bool containsKey_MapOfMap6(const double &key) const;
	
		/**
		 * This method returns the value to the given key. Make sure to check if the given key exists otherwise a new key/value pair will be added (cf. C++ standard).
		 *
		 * @param key Key for which the value should be returned from the map of map6.
		 * @return Value to given key from the map of map6 is contains the given key.
		 */
		double getValueForKey_MapOfMap6(const double &key);
	
		/**
		 * @return Pair of iterators for the begin and end of the map of map6.
		 */
		std::pair<std::map<double, double>::iterator, std::map<double, double>::iterator> iteratorPair_MapOfMap6();
	public:
		/**
		 * @return map7.
		 */
		std::map<double, std::string> getMapOfMap7() const;
	
		/**
		 * This method sets map7.
		 *
		 * @param val Value for map7.
		 */
		void setMapOfMap7(const std::map<double, std::string> &val);
	
		/**
		 * This method clears the map of map7.
		 */
		void clear_MapOfMap7();
	
		/**
		 * @return the size of the map of map7.
		 */
		uint32_t getSize_MapOfMap7() const;
	
		/**
		 * @return true if the map of map7 is empty.
		 */
		bool isEmpty_MapOfMap7() const;
	
		/**
		 * This method adds an element to the map of map7.
		 *
		 * @param key Key of the key/value pair to be added to the map of map7.
		 * @param val Value of the key/value pair to be added to the map of map7.
		 */
		void putTo_MapOfMap7(const double &key, const std::string &val);
	
		/**
		 * @return true if the map of map7 is contains the given key.
		 */
		bool containsKey_MapOfMap7(const double &key) const;
	
		/**
		 * This method returns the value to the given key. Make sure to check if the given key exists otherwise a new key/value pair will be added (cf. C++ standard).
		 *
		 * @param key Key for which the value should be returned from the map of map7.
		 * @return Value to given key from the map of map7 is contains the given key.
		 */
		std::string getValueForKey_MapOfMap7(const double &key);
	
		/**
		 * @return Pair of iterators for the begin and end of the map of map7.
		 */
		std::pair<std::map<double, std::string>::iterator, std::map<double, std::string>::iterator> iteratorPair_MapOfMap7();

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
		std::map<double, bool> m_mapOfMap1;
	private:
		std::map<double, char> m_mapOfMap2;
	private:
		std::map<double, int32_t> m_mapOfMap3;
	private:
		std::map<double, uint32_t> m_mapOfMap4;
	private:
		std::map<double, float> m_mapOfMap5;
	private:
		std::map<double, double> m_mapOfMap6;
	private:
		std::map<double, std::string> m_mapOfMap7;

};

#endif /*TEST11MAPDOUBLE_H*/
