/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#include <algorithm>
#include <sstream>
#include <utility>

#include "core/base/Hash.h"
#include "core/base/Deserializer.h"
#include "core/base/SerializationFactory.h"
#include "core/base/Serializer.h"


#include "generated/Test10.h"

	using namespace std;
	using namespace core::base;


	Test10::Test10() :
	    SerializableData(), Visitable()
		, m_listOfList1()
		, m_listOfList2()
		, m_mapOfMap1()
		, m_mapOfMap2()
	{
	}

	Test10::Test10(
		const vector<std::string> &val0, 
		const vector<Test10Point> &val1, 
		const map<int32_t, std::string> &val2, 
		const map<int32_t, Test10Point> &val3
	) :
	    SerializableData(), Visitable()
		, m_listOfList1(val0)
		, m_listOfList2(val1)
		, m_mapOfMap1(val2)
		, m_mapOfMap2(val3)
	{
	}

	Test10::Test10(const Test10 &obj) :
	    SerializableData(), Visitable()
		, m_listOfList1(obj.m_listOfList1)
		, m_listOfList2(obj.m_listOfList2)
		, m_mapOfMap1(obj.m_mapOfMap1)
		, m_mapOfMap2(obj.m_mapOfMap2)
	{
	}
	
	Test10::~Test10() {
	}

	Test10& Test10::operator=(const Test10 &obj) {
		m_listOfList1 = obj.m_listOfList1;
		m_listOfList2 = obj.m_listOfList2;
		m_mapOfMap1 = obj.m_mapOfMap1;
		m_mapOfMap2 = obj.m_mapOfMap2;
		return (*this);
	}

	int32_t Test10::ID() {
		return 11;
	}

	const string Test10::ShortName() {
		return "Test10";
	}

	const string Test10::LongName() {
		return "Test10";
	}

	std::vector<std::string> Test10::getListOfList1() const {
		return m_listOfList1;
	}
	
	void Test10::setListOfList1(const std::vector<std::string> &val) {
		m_listOfList1 = val;
	}
	
	void Test10::clear_ListOfList1() {
		m_listOfList1.clear();
	}
	
	uint32_t Test10::getSize_ListOfList1() const {
		return m_listOfList1.size();
	}
	
	bool Test10::isEmpty_ListOfList1() const {
		return m_listOfList1.empty();
	}
	
	void Test10::addTo_ListOfList1(const std::string &val) {
		m_listOfList1.push_back(val);
	}
	
	void Test10::insertTo_ListOfList1(const std::string &val) {
		m_listOfList1.insert(m_listOfList1.begin(), val);
	}
	
	bool Test10::contains_ListOfList1(const std::string &val) const {
		return std::find(m_listOfList1.begin(), m_listOfList1.end(), val) != m_listOfList1.end();
	}
	
	std::pair<std::vector<std::string>::iterator, std::vector<std::string>::iterator> Test10::iteratorPair_ListOfList1() {
		return std::make_pair(m_listOfList1.begin(), m_listOfList1.end());
	}
	std::vector<Test10Point> Test10::getListOfList2() const {
		return m_listOfList2;
	}
	
	void Test10::setListOfList2(const std::vector<Test10Point> &val) {
		m_listOfList2 = val;
	}
	
	void Test10::clear_ListOfList2() {
		m_listOfList2.clear();
	}
	
	uint32_t Test10::getSize_ListOfList2() const {
		return m_listOfList2.size();
	}
	
	bool Test10::isEmpty_ListOfList2() const {
		return m_listOfList2.empty();
	}
	
	void Test10::addTo_ListOfList2(const Test10Point &val) {
		m_listOfList2.push_back(val);
	}
	
	void Test10::insertTo_ListOfList2(const Test10Point &val) {
		m_listOfList2.insert(m_listOfList2.begin(), val);
	}
	
	bool Test10::contains_ListOfList2(const Test10Point &val) const {
		bool found = false;
		std::vector<Test10Point>::const_iterator it = m_listOfList2.begin();
		while (it != m_listOfList2.end() && !found) {
		    found |= (*it).toString() == val.toString();
		    it++;
		}
		return found;
	}
	
	std::pair<std::vector<Test10Point>::iterator, std::vector<Test10Point>::iterator> Test10::iteratorPair_ListOfList2() {
		return std::make_pair(m_listOfList2.begin(), m_listOfList2.end());
	}
	std::map<int32_t, std::string> Test10::getMapOfMap1() const {
		return m_mapOfMap1;
	}
	
	void Test10::setMapOfMap1(const std::map<int32_t, std::string> &val) {
		m_mapOfMap1 = val;
	}
	
	void Test10::clear_MapOfMap1() {
		m_mapOfMap1.clear();
	}
	
	uint32_t Test10::getSize_MapOfMap1() const {
		return m_mapOfMap1.size();
	}
	
	bool Test10::isEmpty_MapOfMap1() const {
		return m_mapOfMap1.empty();
	}
	
	void Test10::putTo_MapOfMap1(const int32_t &key, const std::string &val) {
		m_mapOfMap1[key] = val;
	}
	
	bool Test10::containsKey_MapOfMap1(const int32_t &key) const {
		return (m_mapOfMap1.count(key) > 0);
	}
	
	std::string Test10::getValueForKey_MapOfMap1(const int32_t &key) {
		return m_mapOfMap1[key];
	}
	
	std::pair<std::map<int32_t, std::string>::iterator, std::map<int32_t, std::string>::iterator> Test10::iteratorPair_MapOfMap1() {
		return std::make_pair(m_mapOfMap1.begin(), m_mapOfMap1.end());
	}
	std::map<int32_t, Test10Point> Test10::getMapOfMap2() const {
		return m_mapOfMap2;
	}
	
	void Test10::setMapOfMap2(const std::map<int32_t, Test10Point> &val) {
		m_mapOfMap2 = val;
	}
	
	void Test10::clear_MapOfMap2() {
		m_mapOfMap2.clear();
	}
	
	uint32_t Test10::getSize_MapOfMap2() const {
		return m_mapOfMap2.size();
	}
	
	bool Test10::isEmpty_MapOfMap2() const {
		return m_mapOfMap2.empty();
	}
	
	void Test10::putTo_MapOfMap2(const int32_t &key, const Test10Point &val) {
		m_mapOfMap2[key] = val;
	}
	
	bool Test10::containsKey_MapOfMap2(const int32_t &key) const {
		return (m_mapOfMap2.count(key) > 0);
	}
	
	Test10Point Test10::getValueForKey_MapOfMap2(const int32_t &key) {
		return m_mapOfMap2[key];
	}
	
	std::pair<std::map<int32_t, Test10Point>::iterator, std::map<int32_t, Test10Point>::iterator> Test10::iteratorPair_MapOfMap2() {
		return std::make_pair(m_mapOfMap2.begin(), m_mapOfMap2.end());
	}

	void Test10::accept(core::base::Visitor &v) {
		(void)v; // Avoid unused parameter warning.
	}

	const string Test10::toString() const {
		stringstream s;


		s << "Number of elements in list of List1: " << getSize_ListOfList1() << " ";
		s << "Number of elements in list of List2: " << getSize_ListOfList2() << " ";
		s << "Number of elements in map of Map1: " << getSize_MapOfMap1() << " ";
		s << "Number of elements in map of Map2: " << getSize_MapOfMap2() << " ";

		return s.str();
	}

	ostream& Test10::operator<<(ostream &out) const {

		SerializationFactory& sf = SerializationFactory::getInstance();

		core::SharedPointer<Serializer> s = sf.getSerializer(out);

		// Write number of elements in m_listOfList1.
		const uint32_t numberOfList1 = static_cast<uint32_t>(m_listOfList1.size());
		s->write(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'1', NullType> > > > >  >::RESULT + 1,
		        numberOfList1);
		
		// Write actual elements into a stringstream.
		std::stringstream sstrOfList1;
		for (uint32_t i = 0; i < numberOfList1; i++) {
		    sstrOfList1 << m_listOfList1.at(i) << endl;
		}
		
		// Write string of elements.
		if (numberOfList1 > 0) {
			s->write(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'1', NullType> > > > >  >::RESULT,
			        sstrOfList1.str());
		}
		// Write number of elements in m_listOfList2.
		const uint32_t numberOfList2 = static_cast<uint32_t>(m_listOfList2.size());
		s->write(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'2', NullType> > > > >  >::RESULT + 1,
		        numberOfList2);
		
		// Write actual elements into a stringstream.
		std::stringstream sstrOfList2;
		for (uint32_t i = 0; i < numberOfList2; i++) {
		    sstrOfList2 << m_listOfList2.at(i);
		}
		
		// Write string of elements.
		if (numberOfList2 > 0) {
			s->write(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'2', NullType> > > > >  >::RESULT,
			        sstrOfList2.str());
		}
		{
			// Write number of elements in m_mapOfMap1.
			const uint32_t numberOfMap1 = static_cast<uint32_t>(m_mapOfMap1.size());
			s->write(CRC32 < CharList<'M', CharList<'a', CharList<'p', CharList<'1', NullType> > > >  >::RESULT + 1,
			        numberOfMap1);
		
			// Write actual elements into a stringstream.
			std::stringstream sstrOfMap1;
			std::map<int32_t, std::string>::const_iterator it = m_mapOfMap1.begin();
			while (it != m_mapOfMap1.end()) {
			    sstrOfMap1 << it->first << "=" << it->second << endl;
			    it++;
			}
			
			// Write string of elements.
			if (numberOfMap1 > 0) {
				s->write(CRC32 < CharList<'M', CharList<'a', CharList<'p', CharList<'1', NullType> > > >  >::RESULT,
						sstrOfMap1.str());
			}
		}
		{
			// Write number of elements in m_mapOfMap2.
			const uint32_t numberOfMap2 = static_cast<uint32_t>(m_mapOfMap2.size());
			s->write(CRC32 < CharList<'M', CharList<'a', CharList<'p', CharList<'2', NullType> > > >  >::RESULT + 1,
			        numberOfMap2);
		
			// Write actual elements into a stringstream.
			std::stringstream sstrOfMap2;
			std::map<int32_t, Test10Point>::const_iterator it = m_mapOfMap2.begin();
			while (it != m_mapOfMap2.end()) {
			    sstrOfMap2 << it->first << "=" << it->second << endl;
			    it++;
			}
			
			// Write string of elements.
			if (numberOfMap2 > 0) {
				s->write(CRC32 < CharList<'M', CharList<'a', CharList<'p', CharList<'2', NullType> > > >  >::RESULT,
						sstrOfMap2.str());
			}
		}
		return out;
	}

	istream& Test10::operator>>(istream &in) {

		SerializationFactory& sf = SerializationFactory::getInstance();

		core::SharedPointer<Deserializer> d = sf.getDeserializer(in);

		// Clean up the existing list of List1.
		m_listOfList1.clear();
		
		// Read number of elements in m_listOfList1.
		uint32_t numberOfList1 = 0;
		d->read(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'1', NullType> > > > >  >::RESULT + 1,
		       numberOfList1);
		
		if (numberOfList1 > 0) {
		    // Read string of elements.
		    string elements;
			d->read(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'1', NullType> > > > >  >::RESULT,
			   elements);
		
		    stringstream sstr(elements);
		
		    // Read actual elements from stringstream.
		    for (uint32_t i = 0; i < numberOfList1; i++) {
		        std::string element;
		        getline(sstr, element);
		        m_listOfList1.push_back(element);
		    }
		}
		// Clean up the existing list of List2.
		m_listOfList2.clear();
		
		// Read number of elements in m_listOfList2.
		uint32_t numberOfList2 = 0;
		d->read(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'2', NullType> > > > >  >::RESULT + 1,
		       numberOfList2);
		
		if (numberOfList2 > 0) {
		    // Read string of elements.
		    string elements;
			d->read(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'2', NullType> > > > >  >::RESULT,
			   elements);
		
		    stringstream sstr(elements);
		
		    // Read actual elements from stringstream.
		    for (uint32_t i = 0; i < numberOfList2; i++) {
		        Test10Point element;
		        sstr >> element;
		        m_listOfList2.push_back(element);
		    }
		}
		// Clean up the existing map of Map1.
		m_mapOfMap1.clear();
		
		// Read number of elements in m_mapOfMap1.
		uint32_t numberOfMap1 = 0;
		d->read(CRC32 < CharList<'M', CharList<'a', CharList<'p', CharList<'1', NullType> > > >  >::RESULT + 1,
			   numberOfMap1);
		
		if (numberOfMap1 > 0) {
		    // Read string of elements.
		    string elements;
			d->read(CRC32 < CharList<'M', CharList<'a', CharList<'p', CharList<'1', NullType> > > >  >::RESULT,
			       elements);
		
			stringstream sstr(elements);
		
			while (!sstr.eof()) {
			    string line;
			    getline(sstr, line);
		
			    // Trying to find key-value-pair.
			    size_t delimiter = line.find_first_of("=");
		
			    // Compute length of value-entry by allowing comments right after values.
			    size_t valueLength = line.length();
		
			    // Skip lines with invalid position pointers.
			    if (! ( (delimiter > 0) && (valueLength > 0) ) ) {
			        continue;
			    }
		
			    string key = line.substr(0, delimiter);
			    string value = line.substr(delimiter + 1, valueLength);
		
			    // Skip lines with invalid keys or values.
			    if ( (key.length() == 0) || (value.length() == 0) ) {
			        continue;
			    }
		
			    stringstream sstrKey(key);
			    int32_t _key;
		        sstrKey >> _key;
		
			    stringstream sstrValue(value);
			    std::string _value;
		        getline(sstrValue, _value);
		
				// Store key/value pair.
				putTo_MapOfMap1(_key, _value);
			}
		}
		// Clean up the existing map of Map2.
		m_mapOfMap2.clear();
		
		// Read number of elements in m_mapOfMap2.
		uint32_t numberOfMap2 = 0;
		d->read(CRC32 < CharList<'M', CharList<'a', CharList<'p', CharList<'2', NullType> > > >  >::RESULT + 1,
			   numberOfMap2);
		
		if (numberOfMap2 > 0) {
		    // Read string of elements.
		    string elements;
			d->read(CRC32 < CharList<'M', CharList<'a', CharList<'p', CharList<'2', NullType> > > >  >::RESULT,
			       elements);
		
			stringstream sstr(elements);
		
			while (!sstr.eof()) {
			    string line;
			    getline(sstr, line);
		
			    // Trying to find key-value-pair.
			    size_t delimiter = line.find_first_of("=");
		
			    // Compute length of value-entry by allowing comments right after values.
			    size_t valueLength = line.length();
		
			    // Skip lines with invalid position pointers.
			    if (! ( (delimiter > 0) && (valueLength > 0) ) ) {
			        continue;
			    }
		
			    string key = line.substr(0, delimiter);
			    string value = line.substr(delimiter + 1, valueLength);
		
			    // Skip lines with invalid keys or values.
			    if ( (key.length() == 0) || (value.length() == 0) ) {
			        continue;
			    }
		
			    stringstream sstrKey(key);
			    int32_t _key;
		        sstrKey >> _key;
		
			    stringstream sstrValue(value);
			    Test10Point _value;
		        sstrValue >> _value;
		
				// Store key/value pair.
				putTo_MapOfMap2(_key, _value);
			}
		}
		return in;
	}
