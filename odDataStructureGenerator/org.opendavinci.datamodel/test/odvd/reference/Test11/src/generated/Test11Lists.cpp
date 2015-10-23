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


#include "generated/Test11Lists.h"

	using namespace std;
	using namespace core::base;


	Test11Lists::Test11Lists() :
	    SerializableData(), Visitable()
		, m_listOfList1()
		, m_listOfList2()
		, m_listOfList3()
		, m_listOfList4()
		, m_listOfList5()
		, m_listOfList6()
		, m_listOfList7()
	{
	}

	Test11Lists::Test11Lists(
		const vector<bool> &val0, 
		const vector<char> &val1, 
		const vector<int32_t> &val2, 
		const vector<uint32_t> &val3, 
		const vector<float> &val4, 
		const vector<double> &val5, 
		const vector<std::string> &val6
	) :
	    SerializableData(), Visitable()
		, m_listOfList1(val0)
		, m_listOfList2(val1)
		, m_listOfList3(val2)
		, m_listOfList4(val3)
		, m_listOfList5(val4)
		, m_listOfList6(val5)
		, m_listOfList7(val6)
	{
	}

	Test11Lists::Test11Lists(const Test11Lists &obj) :
	    SerializableData(), Visitable()
		, m_listOfList1(obj.m_listOfList1)
		, m_listOfList2(obj.m_listOfList2)
		, m_listOfList3(obj.m_listOfList3)
		, m_listOfList4(obj.m_listOfList4)
		, m_listOfList5(obj.m_listOfList5)
		, m_listOfList6(obj.m_listOfList6)
		, m_listOfList7(obj.m_listOfList7)
	{
	}
	
	Test11Lists::~Test11Lists() {
	}

	Test11Lists& Test11Lists::operator=(const Test11Lists &obj) {
		m_listOfList1 = obj.m_listOfList1;
		m_listOfList2 = obj.m_listOfList2;
		m_listOfList3 = obj.m_listOfList3;
		m_listOfList4 = obj.m_listOfList4;
		m_listOfList5 = obj.m_listOfList5;
		m_listOfList6 = obj.m_listOfList6;
		m_listOfList7 = obj.m_listOfList7;
		return (*this);
	}

	int32_t Test11Lists::ID() {
		return 12;
	}

	const string Test11Lists::ShortName() {
		return "Test11Lists";
	}

	const string Test11Lists::LongName() {
		return "Test11Lists";
	}

	std::vector<bool> Test11Lists::getListOfList1() const {
		return m_listOfList1;
	}
	
	void Test11Lists::setListOfList1(const std::vector<bool> &val) {
		m_listOfList1 = val;
	}
	
	void Test11Lists::clear_ListOfList1() {
		m_listOfList1.clear();
	}
	
	uint32_t Test11Lists::getSize_ListOfList1() const {
		return m_listOfList1.size();
	}
	
	bool Test11Lists::isEmpty_ListOfList1() const {
		return m_listOfList1.empty();
	}
	
	void Test11Lists::addTo_ListOfList1(const bool &val) {
		m_listOfList1.push_back(val);
	}
	
	void Test11Lists::insertTo_ListOfList1(const bool &val) {
		m_listOfList1.insert(m_listOfList1.begin(), val);
	}
	
	bool Test11Lists::contains_ListOfList1(const bool &val) const {
		return std::find(m_listOfList1.begin(), m_listOfList1.end(), val) != m_listOfList1.end();
	}
	
	std::pair<std::vector<bool>::iterator, std::vector<bool>::iterator> Test11Lists::iteratorPair_ListOfList1() {
		return std::make_pair(m_listOfList1.begin(), m_listOfList1.end());
	}
	std::vector<char> Test11Lists::getListOfList2() const {
		return m_listOfList2;
	}
	
	void Test11Lists::setListOfList2(const std::vector<char> &val) {
		m_listOfList2 = val;
	}
	
	void Test11Lists::clear_ListOfList2() {
		m_listOfList2.clear();
	}
	
	uint32_t Test11Lists::getSize_ListOfList2() const {
		return m_listOfList2.size();
	}
	
	bool Test11Lists::isEmpty_ListOfList2() const {
		return m_listOfList2.empty();
	}
	
	void Test11Lists::addTo_ListOfList2(const char &val) {
		m_listOfList2.push_back(val);
	}
	
	void Test11Lists::insertTo_ListOfList2(const char &val) {
		m_listOfList2.insert(m_listOfList2.begin(), val);
	}
	
	bool Test11Lists::contains_ListOfList2(const char &val) const {
		return std::find(m_listOfList2.begin(), m_listOfList2.end(), val) != m_listOfList2.end();
	}
	
	std::pair<std::vector<char>::iterator, std::vector<char>::iterator> Test11Lists::iteratorPair_ListOfList2() {
		return std::make_pair(m_listOfList2.begin(), m_listOfList2.end());
	}
	std::vector<int32_t> Test11Lists::getListOfList3() const {
		return m_listOfList3;
	}
	
	void Test11Lists::setListOfList3(const std::vector<int32_t> &val) {
		m_listOfList3 = val;
	}
	
	void Test11Lists::clear_ListOfList3() {
		m_listOfList3.clear();
	}
	
	uint32_t Test11Lists::getSize_ListOfList3() const {
		return m_listOfList3.size();
	}
	
	bool Test11Lists::isEmpty_ListOfList3() const {
		return m_listOfList3.empty();
	}
	
	void Test11Lists::addTo_ListOfList3(const int32_t &val) {
		m_listOfList3.push_back(val);
	}
	
	void Test11Lists::insertTo_ListOfList3(const int32_t &val) {
		m_listOfList3.insert(m_listOfList3.begin(), val);
	}
	
	bool Test11Lists::contains_ListOfList3(const int32_t &val) const {
		return std::find(m_listOfList3.begin(), m_listOfList3.end(), val) != m_listOfList3.end();
	}
	
	std::pair<std::vector<int32_t>::iterator, std::vector<int32_t>::iterator> Test11Lists::iteratorPair_ListOfList3() {
		return std::make_pair(m_listOfList3.begin(), m_listOfList3.end());
	}
	std::vector<uint32_t> Test11Lists::getListOfList4() const {
		return m_listOfList4;
	}
	
	void Test11Lists::setListOfList4(const std::vector<uint32_t> &val) {
		m_listOfList4 = val;
	}
	
	void Test11Lists::clear_ListOfList4() {
		m_listOfList4.clear();
	}
	
	uint32_t Test11Lists::getSize_ListOfList4() const {
		return m_listOfList4.size();
	}
	
	bool Test11Lists::isEmpty_ListOfList4() const {
		return m_listOfList4.empty();
	}
	
	void Test11Lists::addTo_ListOfList4(const uint32_t &val) {
		m_listOfList4.push_back(val);
	}
	
	void Test11Lists::insertTo_ListOfList4(const uint32_t &val) {
		m_listOfList4.insert(m_listOfList4.begin(), val);
	}
	
	bool Test11Lists::contains_ListOfList4(const uint32_t &val) const {
		return std::find(m_listOfList4.begin(), m_listOfList4.end(), val) != m_listOfList4.end();
	}
	
	std::pair<std::vector<uint32_t>::iterator, std::vector<uint32_t>::iterator> Test11Lists::iteratorPair_ListOfList4() {
		return std::make_pair(m_listOfList4.begin(), m_listOfList4.end());
	}
	std::vector<float> Test11Lists::getListOfList5() const {
		return m_listOfList5;
	}
	
	void Test11Lists::setListOfList5(const std::vector<float> &val) {
		m_listOfList5 = val;
	}
	
	void Test11Lists::clear_ListOfList5() {
		m_listOfList5.clear();
	}
	
	uint32_t Test11Lists::getSize_ListOfList5() const {
		return m_listOfList5.size();
	}
	
	bool Test11Lists::isEmpty_ListOfList5() const {
		return m_listOfList5.empty();
	}
	
	void Test11Lists::addTo_ListOfList5(const float &val) {
		m_listOfList5.push_back(val);
	}
	
	void Test11Lists::insertTo_ListOfList5(const float &val) {
		m_listOfList5.insert(m_listOfList5.begin(), val);
	}
	
	bool Test11Lists::contains_ListOfList5(const float &val) const {
		return std::find(m_listOfList5.begin(), m_listOfList5.end(), val) != m_listOfList5.end();
	}
	
	std::pair<std::vector<float>::iterator, std::vector<float>::iterator> Test11Lists::iteratorPair_ListOfList5() {
		return std::make_pair(m_listOfList5.begin(), m_listOfList5.end());
	}
	std::vector<double> Test11Lists::getListOfList6() const {
		return m_listOfList6;
	}
	
	void Test11Lists::setListOfList6(const std::vector<double> &val) {
		m_listOfList6 = val;
	}
	
	void Test11Lists::clear_ListOfList6() {
		m_listOfList6.clear();
	}
	
	uint32_t Test11Lists::getSize_ListOfList6() const {
		return m_listOfList6.size();
	}
	
	bool Test11Lists::isEmpty_ListOfList6() const {
		return m_listOfList6.empty();
	}
	
	void Test11Lists::addTo_ListOfList6(const double &val) {
		m_listOfList6.push_back(val);
	}
	
	void Test11Lists::insertTo_ListOfList6(const double &val) {
		m_listOfList6.insert(m_listOfList6.begin(), val);
	}
	
	bool Test11Lists::contains_ListOfList6(const double &val) const {
		return std::find(m_listOfList6.begin(), m_listOfList6.end(), val) != m_listOfList6.end();
	}
	
	std::pair<std::vector<double>::iterator, std::vector<double>::iterator> Test11Lists::iteratorPair_ListOfList6() {
		return std::make_pair(m_listOfList6.begin(), m_listOfList6.end());
	}
	std::vector<std::string> Test11Lists::getListOfList7() const {
		return m_listOfList7;
	}
	
	void Test11Lists::setListOfList7(const std::vector<std::string> &val) {
		m_listOfList7 = val;
	}
	
	void Test11Lists::clear_ListOfList7() {
		m_listOfList7.clear();
	}
	
	uint32_t Test11Lists::getSize_ListOfList7() const {
		return m_listOfList7.size();
	}
	
	bool Test11Lists::isEmpty_ListOfList7() const {
		return m_listOfList7.empty();
	}
	
	void Test11Lists::addTo_ListOfList7(const std::string &val) {
		m_listOfList7.push_back(val);
	}
	
	void Test11Lists::insertTo_ListOfList7(const std::string &val) {
		m_listOfList7.insert(m_listOfList7.begin(), val);
	}
	
	bool Test11Lists::contains_ListOfList7(const std::string &val) const {
		return std::find(m_listOfList7.begin(), m_listOfList7.end(), val) != m_listOfList7.end();
	}
	
	std::pair<std::vector<std::string>::iterator, std::vector<std::string>::iterator> Test11Lists::iteratorPair_ListOfList7() {
		return std::make_pair(m_listOfList7.begin(), m_listOfList7.end());
	}

	void Test11Lists::accept(core::base::Visitor &v) {
		(void)v; // Avoid unused parameter warning.
	}

	const string Test11Lists::toString() const {
		stringstream s;


		s << "Number of elements in list of List1: " << getSize_ListOfList1() << " ";
		s << "Number of elements in list of List2: " << getSize_ListOfList2() << " ";
		s << "Number of elements in list of List3: " << getSize_ListOfList3() << " ";
		s << "Number of elements in list of List4: " << getSize_ListOfList4() << " ";
		s << "Number of elements in list of List5: " << getSize_ListOfList5() << " ";
		s << "Number of elements in list of List6: " << getSize_ListOfList6() << " ";
		s << "Number of elements in list of List7: " << getSize_ListOfList7() << " ";

		return s.str();
	}

	ostream& Test11Lists::operator<<(ostream &out) const {

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
		    sstrOfList2 << m_listOfList2.at(i) << endl;
		}
		
		// Write string of elements.
		if (numberOfList2 > 0) {
			s->write(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'2', NullType> > > > >  >::RESULT,
			        sstrOfList2.str());
		}
		// Write number of elements in m_listOfList3.
		const uint32_t numberOfList3 = static_cast<uint32_t>(m_listOfList3.size());
		s->write(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'3', NullType> > > > >  >::RESULT + 1,
		        numberOfList3);
		
		// Write actual elements into a stringstream.
		std::stringstream sstrOfList3;
		for (uint32_t i = 0; i < numberOfList3; i++) {
		    sstrOfList3 << m_listOfList3.at(i) << endl;
		}
		
		// Write string of elements.
		if (numberOfList3 > 0) {
			s->write(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'3', NullType> > > > >  >::RESULT,
			        sstrOfList3.str());
		}
		// Write number of elements in m_listOfList4.
		const uint32_t numberOfList4 = static_cast<uint32_t>(m_listOfList4.size());
		s->write(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'4', NullType> > > > >  >::RESULT + 1,
		        numberOfList4);
		
		// Write actual elements into a stringstream.
		std::stringstream sstrOfList4;
		for (uint32_t i = 0; i < numberOfList4; i++) {
		    sstrOfList4 << m_listOfList4.at(i) << endl;
		}
		
		// Write string of elements.
		if (numberOfList4 > 0) {
			s->write(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'4', NullType> > > > >  >::RESULT,
			        sstrOfList4.str());
		}
		// Write number of elements in m_listOfList5.
		const uint32_t numberOfList5 = static_cast<uint32_t>(m_listOfList5.size());
		s->write(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'5', NullType> > > > >  >::RESULT + 1,
		        numberOfList5);
		
		// Write actual elements into a stringstream.
		std::stringstream sstrOfList5;
		for (uint32_t i = 0; i < numberOfList5; i++) {
		    sstrOfList5 << m_listOfList5.at(i) << endl;
		}
		
		// Write string of elements.
		if (numberOfList5 > 0) {
			s->write(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'5', NullType> > > > >  >::RESULT,
			        sstrOfList5.str());
		}
		// Write number of elements in m_listOfList6.
		const uint32_t numberOfList6 = static_cast<uint32_t>(m_listOfList6.size());
		s->write(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'6', NullType> > > > >  >::RESULT + 1,
		        numberOfList6);
		
		// Write actual elements into a stringstream.
		std::stringstream sstrOfList6;
		for (uint32_t i = 0; i < numberOfList6; i++) {
		    sstrOfList6 << m_listOfList6.at(i) << endl;
		}
		
		// Write string of elements.
		if (numberOfList6 > 0) {
			s->write(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'6', NullType> > > > >  >::RESULT,
			        sstrOfList6.str());
		}
		// Write number of elements in m_listOfList7.
		const uint32_t numberOfList7 = static_cast<uint32_t>(m_listOfList7.size());
		s->write(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'7', NullType> > > > >  >::RESULT + 1,
		        numberOfList7);
		
		// Write actual elements into a stringstream.
		std::stringstream sstrOfList7;
		for (uint32_t i = 0; i < numberOfList7; i++) {
		    sstrOfList7 << m_listOfList7.at(i) << endl;
		}
		
		// Write string of elements.
		if (numberOfList7 > 0) {
			s->write(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'7', NullType> > > > >  >::RESULT,
			        sstrOfList7.str());
		}
		return out;
	}

	istream& Test11Lists::operator>>(istream &in) {

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
		        bool element;
		        sstr >> element;
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
		        char element;
		        sstr >> element;
		        m_listOfList2.push_back(element);
		    }
		}
		// Clean up the existing list of List3.
		m_listOfList3.clear();
		
		// Read number of elements in m_listOfList3.
		uint32_t numberOfList3 = 0;
		d->read(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'3', NullType> > > > >  >::RESULT + 1,
		       numberOfList3);
		
		if (numberOfList3 > 0) {
		    // Read string of elements.
		    string elements;
			d->read(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'3', NullType> > > > >  >::RESULT,
			   elements);
		
		    stringstream sstr(elements);
		
		    // Read actual elements from stringstream.
		    for (uint32_t i = 0; i < numberOfList3; i++) {
		        int32_t element;
		        sstr >> element;
		        m_listOfList3.push_back(element);
		    }
		}
		// Clean up the existing list of List4.
		m_listOfList4.clear();
		
		// Read number of elements in m_listOfList4.
		uint32_t numberOfList4 = 0;
		d->read(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'4', NullType> > > > >  >::RESULT + 1,
		       numberOfList4);
		
		if (numberOfList4 > 0) {
		    // Read string of elements.
		    string elements;
			d->read(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'4', NullType> > > > >  >::RESULT,
			   elements);
		
		    stringstream sstr(elements);
		
		    // Read actual elements from stringstream.
		    for (uint32_t i = 0; i < numberOfList4; i++) {
		        uint32_t element;
		        sstr >> element;
		        m_listOfList4.push_back(element);
		    }
		}
		// Clean up the existing list of List5.
		m_listOfList5.clear();
		
		// Read number of elements in m_listOfList5.
		uint32_t numberOfList5 = 0;
		d->read(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'5', NullType> > > > >  >::RESULT + 1,
		       numberOfList5);
		
		if (numberOfList5 > 0) {
		    // Read string of elements.
		    string elements;
			d->read(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'5', NullType> > > > >  >::RESULT,
			   elements);
		
		    stringstream sstr(elements);
		
		    // Read actual elements from stringstream.
		    for (uint32_t i = 0; i < numberOfList5; i++) {
		        float element;
		        sstr >> element;
		        m_listOfList5.push_back(element);
		    }
		}
		// Clean up the existing list of List6.
		m_listOfList6.clear();
		
		// Read number of elements in m_listOfList6.
		uint32_t numberOfList6 = 0;
		d->read(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'6', NullType> > > > >  >::RESULT + 1,
		       numberOfList6);
		
		if (numberOfList6 > 0) {
		    // Read string of elements.
		    string elements;
			d->read(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'6', NullType> > > > >  >::RESULT,
			   elements);
		
		    stringstream sstr(elements);
		
		    // Read actual elements from stringstream.
		    for (uint32_t i = 0; i < numberOfList6; i++) {
		        double element;
		        sstr >> element;
		        m_listOfList6.push_back(element);
		    }
		}
		// Clean up the existing list of List7.
		m_listOfList7.clear();
		
		// Read number of elements in m_listOfList7.
		uint32_t numberOfList7 = 0;
		d->read(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'7', NullType> > > > >  >::RESULT + 1,
		       numberOfList7);
		
		if (numberOfList7 > 0) {
		    // Read string of elements.
		    string elements;
			d->read(CRC32 < CharList<'L', CharList<'i', CharList<'s', CharList<'t', CharList<'7', NullType> > > > >  >::RESULT,
			   elements);
		
		    stringstream sstr(elements);
		
		    // Read actual elements from stringstream.
		    for (uint32_t i = 0; i < numberOfList7; i++) {
		        std::string element;
		        getline(sstr, element);
		        m_listOfList7.push_back(element);
		    }
		}
		return in;
	}
