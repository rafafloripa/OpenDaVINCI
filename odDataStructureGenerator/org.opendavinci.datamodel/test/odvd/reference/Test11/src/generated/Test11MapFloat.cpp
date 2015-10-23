/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */


#include "core/base/Hash.h"
#include "core/base/Deserializer.h"
#include "core/base/SerializationFactory.h"
#include "core/base/Serializer.h"


#include "generated/Test11MapFloat.h"

	using namespace std;
	using namespace core::base;


	Test11MapFloat::Test11MapFloat() :
	    SerializableData(), Visitable()
		, m_mapOfMap1()
		, m_mapOfMap2()
		, m_mapOfMap3()
		, m_mapOfMap4()
		, m_mapOfMap5()
		, m_mapOfMap6()
		, m_mapOfMap7()
	{
	}

	Test11MapFloat::Test11MapFloat(
		const map<float, bool> &val0, 
		const map<float, char> &val1, 
		const map<float, int32_t> &val2, 
		const map<float, uint32_t> &val3, 
		const map<float, float> &val4, 
		const map<float, double> &val5, 
		const map<float, std::string> &val6
	) :
	    SerializableData(), Visitable()
		, m_mapOfMap1(val0)
		, m_mapOfMap2(val1)
		, m_mapOfMap3(val2)
		, m_mapOfMap4(val3)
		, m_mapOfMap5(val4)
		, m_mapOfMap6(val5)
		, m_mapOfMap7(val6)
	{
	}

	Test11MapFloat::Test11MapFloat(const Test11MapFloat &obj) :
	    SerializableData(), Visitable()
		, m_mapOfMap1(obj.m_mapOfMap1)
		, m_mapOfMap2(obj.m_mapOfMap2)
		, m_mapOfMap3(obj.m_mapOfMap3)
		, m_mapOfMap4(obj.m_mapOfMap4)
		, m_mapOfMap5(obj.m_mapOfMap5)
		, m_mapOfMap6(obj.m_mapOfMap6)
		, m_mapOfMap7(obj.m_mapOfMap7)
	{
	}
	
	Test11MapFloat::~Test11MapFloat() {
	}

	Test11MapFloat& Test11MapFloat::operator=(const Test11MapFloat &obj) {
		m_mapOfMap1 = obj.m_mapOfMap1;
		m_mapOfMap2 = obj.m_mapOfMap2;
		m_mapOfMap3 = obj.m_mapOfMap3;
		m_mapOfMap4 = obj.m_mapOfMap4;
		m_mapOfMap5 = obj.m_mapOfMap5;
		m_mapOfMap6 = obj.m_mapOfMap6;
		m_mapOfMap7 = obj.m_mapOfMap7;
		return (*this);
	}

	int32_t Test11MapFloat::ID() {
		return 17;
	}

	const string Test11MapFloat::ShortName() {
		return "Test11MapFloat";
	}

	const string Test11MapFloat::LongName() {
		return "Test11MapFloat";
	}

	std::map<float, bool> Test11MapFloat::getMapOfMap1() const {
		return m_mapOfMap1;
	}
	
	void Test11MapFloat::setMapOfMap1(const std::map<float, bool> &val) {
		m_mapOfMap1 = val;
	}
	
	void Test11MapFloat::clear_MapOfMap1() {
		m_mapOfMap1.clear();
	}
	
	uint32_t Test11MapFloat::getSize_MapOfMap1() const {
		return m_mapOfMap1.size();
	}
	
	bool Test11MapFloat::isEmpty_MapOfMap1() const {
		return m_mapOfMap1.empty();
	}
	
	void Test11MapFloat::putTo_MapOfMap1(const float &key, const bool &val) {
		m_mapOfMap1[key] = val;
	}
	
	bool Test11MapFloat::containsKey_MapOfMap1(const float &key) const {
		return (m_mapOfMap1.count(key) > 0);
	}
	
	bool Test11MapFloat::getValueForKey_MapOfMap1(const float &key) {
		return m_mapOfMap1[key];
	}
	
	std::pair<std::map<float, bool>::iterator, std::map<float, bool>::iterator> Test11MapFloat::iteratorPair_MapOfMap1() {
		return std::make_pair(m_mapOfMap1.begin(), m_mapOfMap1.end());
	}
	std::map<float, char> Test11MapFloat::getMapOfMap2() const {
		return m_mapOfMap2;
	}
	
	void Test11MapFloat::setMapOfMap2(const std::map<float, char> &val) {
		m_mapOfMap2 = val;
	}
	
	void Test11MapFloat::clear_MapOfMap2() {
		m_mapOfMap2.clear();
	}
	
	uint32_t Test11MapFloat::getSize_MapOfMap2() const {
		return m_mapOfMap2.size();
	}
	
	bool Test11MapFloat::isEmpty_MapOfMap2() const {
		return m_mapOfMap2.empty();
	}
	
	void Test11MapFloat::putTo_MapOfMap2(const float &key, const char &val) {
		m_mapOfMap2[key] = val;
	}
	
	bool Test11MapFloat::containsKey_MapOfMap2(const float &key) const {
		return (m_mapOfMap2.count(key) > 0);
	}
	
	char Test11MapFloat::getValueForKey_MapOfMap2(const float &key) {
		return m_mapOfMap2[key];
	}
	
	std::pair<std::map<float, char>::iterator, std::map<float, char>::iterator> Test11MapFloat::iteratorPair_MapOfMap2() {
		return std::make_pair(m_mapOfMap2.begin(), m_mapOfMap2.end());
	}
	std::map<float, int32_t> Test11MapFloat::getMapOfMap3() const {
		return m_mapOfMap3;
	}
	
	void Test11MapFloat::setMapOfMap3(const std::map<float, int32_t> &val) {
		m_mapOfMap3 = val;
	}
	
	void Test11MapFloat::clear_MapOfMap3() {
		m_mapOfMap3.clear();
	}
	
	uint32_t Test11MapFloat::getSize_MapOfMap3() const {
		return m_mapOfMap3.size();
	}
	
	bool Test11MapFloat::isEmpty_MapOfMap3() const {
		return m_mapOfMap3.empty();
	}
	
	void Test11MapFloat::putTo_MapOfMap3(const float &key, const int32_t &val) {
		m_mapOfMap3[key] = val;
	}
	
	bool Test11MapFloat::containsKey_MapOfMap3(const float &key) const {
		return (m_mapOfMap3.count(key) > 0);
	}
	
	int32_t Test11MapFloat::getValueForKey_MapOfMap3(const float &key) {
		return m_mapOfMap3[key];
	}
	
	std::pair<std::map<float, int32_t>::iterator, std::map<float, int32_t>::iterator> Test11MapFloat::iteratorPair_MapOfMap3() {
		return std::make_pair(m_mapOfMap3.begin(), m_mapOfMap3.end());
	}
	std::map<float, uint32_t> Test11MapFloat::getMapOfMap4() const {
		return m_mapOfMap4;
	}
	
	void Test11MapFloat::setMapOfMap4(const std::map<float, uint32_t> &val) {
		m_mapOfMap4 = val;
	}
	
	void Test11MapFloat::clear_MapOfMap4() {
		m_mapOfMap4.clear();
	}
	
	uint32_t Test11MapFloat::getSize_MapOfMap4() const {
		return m_mapOfMap4.size();
	}
	
	bool Test11MapFloat::isEmpty_MapOfMap4() const {
		return m_mapOfMap4.empty();
	}
	
	void Test11MapFloat::putTo_MapOfMap4(const float &key, const uint32_t &val) {
		m_mapOfMap4[key] = val;
	}
	
	bool Test11MapFloat::containsKey_MapOfMap4(const float &key) const {
		return (m_mapOfMap4.count(key) > 0);
	}
	
	uint32_t Test11MapFloat::getValueForKey_MapOfMap4(const float &key) {
		return m_mapOfMap4[key];
	}
	
	std::pair<std::map<float, uint32_t>::iterator, std::map<float, uint32_t>::iterator> Test11MapFloat::iteratorPair_MapOfMap4() {
		return std::make_pair(m_mapOfMap4.begin(), m_mapOfMap4.end());
	}
	std::map<float, float> Test11MapFloat::getMapOfMap5() const {
		return m_mapOfMap5;
	}
	
	void Test11MapFloat::setMapOfMap5(const std::map<float, float> &val) {
		m_mapOfMap5 = val;
	}
	
	void Test11MapFloat::clear_MapOfMap5() {
		m_mapOfMap5.clear();
	}
	
	uint32_t Test11MapFloat::getSize_MapOfMap5() const {
		return m_mapOfMap5.size();
	}
	
	bool Test11MapFloat::isEmpty_MapOfMap5() const {
		return m_mapOfMap5.empty();
	}
	
	void Test11MapFloat::putTo_MapOfMap5(const float &key, const float &val) {
		m_mapOfMap5[key] = val;
	}
	
	bool Test11MapFloat::containsKey_MapOfMap5(const float &key) const {
		return (m_mapOfMap5.count(key) > 0);
	}
	
	float Test11MapFloat::getValueForKey_MapOfMap5(const float &key) {
		return m_mapOfMap5[key];
	}
	
	std::pair<std::map<float, float>::iterator, std::map<float, float>::iterator> Test11MapFloat::iteratorPair_MapOfMap5() {
		return std::make_pair(m_mapOfMap5.begin(), m_mapOfMap5.end());
	}
	std::map<float, double> Test11MapFloat::getMapOfMap6() const {
		return m_mapOfMap6;
	}
	
	void Test11MapFloat::setMapOfMap6(const std::map<float, double> &val) {
		m_mapOfMap6 = val;
	}
	
	void Test11MapFloat::clear_MapOfMap6() {
		m_mapOfMap6.clear();
	}
	
	uint32_t Test11MapFloat::getSize_MapOfMap6() const {
		return m_mapOfMap6.size();
	}
	
	bool Test11MapFloat::isEmpty_MapOfMap6() const {
		return m_mapOfMap6.empty();
	}
	
	void Test11MapFloat::putTo_MapOfMap6(const float &key, const double &val) {
		m_mapOfMap6[key] = val;
	}
	
	bool Test11MapFloat::containsKey_MapOfMap6(const float &key) const {
		return (m_mapOfMap6.count(key) > 0);
	}
	
	double Test11MapFloat::getValueForKey_MapOfMap6(const float &key) {
		return m_mapOfMap6[key];
	}
	
	std::pair<std::map<float, double>::iterator, std::map<float, double>::iterator> Test11MapFloat::iteratorPair_MapOfMap6() {
		return std::make_pair(m_mapOfMap6.begin(), m_mapOfMap6.end());
	}
	std::map<float, std::string> Test11MapFloat::getMapOfMap7() const {
		return m_mapOfMap7;
	}
	
	void Test11MapFloat::setMapOfMap7(const std::map<float, std::string> &val) {
		m_mapOfMap7 = val;
	}
	
	void Test11MapFloat::clear_MapOfMap7() {
		m_mapOfMap7.clear();
	}
	
	uint32_t Test11MapFloat::getSize_MapOfMap7() const {
		return m_mapOfMap7.size();
	}
	
	bool Test11MapFloat::isEmpty_MapOfMap7() const {
		return m_mapOfMap7.empty();
	}
	
	void Test11MapFloat::putTo_MapOfMap7(const float &key, const std::string &val) {
		m_mapOfMap7[key] = val;
	}
	
	bool Test11MapFloat::containsKey_MapOfMap7(const float &key) const {
		return (m_mapOfMap7.count(key) > 0);
	}
	
	std::string Test11MapFloat::getValueForKey_MapOfMap7(const float &key) {
		return m_mapOfMap7[key];
	}
	
	std::pair<std::map<float, std::string>::iterator, std::map<float, std::string>::iterator> Test11MapFloat::iteratorPair_MapOfMap7() {
		return std::make_pair(m_mapOfMap7.begin(), m_mapOfMap7.end());
	}

	void Test11MapFloat::accept(core::base::Visitor &v) {
		(void)v; // Avoid unused parameter warning.
	}

	const string Test11MapFloat::toString() const {
		stringstream s;


		s << "Number of elements in map of Map1: " << getSize_MapOfMap1() << " ";
		s << "Number of elements in map of Map2: " << getSize_MapOfMap2() << " ";
		s << "Number of elements in map of Map3: " << getSize_MapOfMap3() << " ";
		s << "Number of elements in map of Map4: " << getSize_MapOfMap4() << " ";
		s << "Number of elements in map of Map5: " << getSize_MapOfMap5() << " ";
		s << "Number of elements in map of Map6: " << getSize_MapOfMap6() << " ";
		s << "Number of elements in map of Map7: " << getSize_MapOfMap7() << " ";

		return s.str();
	}

	ostream& Test11MapFloat::operator<<(ostream &out) const {

		SerializationFactory& sf = SerializationFactory::getInstance();

		core::SharedPointer<Serializer> s = sf.getSerializer(out);

		{
			// Write number of elements in m_mapOfMap1.
			const uint32_t numberOfMap1 = static_cast<uint32_t>(m_mapOfMap1.size());
			s->write(1, numberOfMap1);
		
			// Write actual elements into a stringstream.
			std::stringstream sstrOfMap1;
			std::map<float, bool>::const_iterator it = m_mapOfMap1.begin();
			while (it != m_mapOfMap1.end()) {
			    sstrOfMap1 << it->first << "=" << it->second << endl;
			    it++;
			}
			
			// Write string of elements.
			if (numberOfMap1 > 0) {
				s->write(1 + 7,
						sstrOfMap1.str());
			}
		}
		{
			// Write number of elements in m_mapOfMap2.
			const uint32_t numberOfMap2 = static_cast<uint32_t>(m_mapOfMap2.size());
			s->write(2, numberOfMap2);
		
			// Write actual elements into a stringstream.
			std::stringstream sstrOfMap2;
			std::map<float, char>::const_iterator it = m_mapOfMap2.begin();
			while (it != m_mapOfMap2.end()) {
			    sstrOfMap2 << it->first << "=" << it->second << endl;
			    it++;
			}
			
			// Write string of elements.
			if (numberOfMap2 > 0) {
				s->write(2 + 7,
						sstrOfMap2.str());
			}
		}
		{
			// Write number of elements in m_mapOfMap3.
			const uint32_t numberOfMap3 = static_cast<uint32_t>(m_mapOfMap3.size());
			s->write(3, numberOfMap3);
		
			// Write actual elements into a stringstream.
			std::stringstream sstrOfMap3;
			std::map<float, int32_t>::const_iterator it = m_mapOfMap3.begin();
			while (it != m_mapOfMap3.end()) {
			    sstrOfMap3 << it->first << "=" << it->second << endl;
			    it++;
			}
			
			// Write string of elements.
			if (numberOfMap3 > 0) {
				s->write(3 + 7,
						sstrOfMap3.str());
			}
		}
		{
			// Write number of elements in m_mapOfMap4.
			const uint32_t numberOfMap4 = static_cast<uint32_t>(m_mapOfMap4.size());
			s->write(4, numberOfMap4);
		
			// Write actual elements into a stringstream.
			std::stringstream sstrOfMap4;
			std::map<float, uint32_t>::const_iterator it = m_mapOfMap4.begin();
			while (it != m_mapOfMap4.end()) {
			    sstrOfMap4 << it->first << "=" << it->second << endl;
			    it++;
			}
			
			// Write string of elements.
			if (numberOfMap4 > 0) {
				s->write(4 + 7,
						sstrOfMap4.str());
			}
		}
		{
			// Write number of elements in m_mapOfMap5.
			const uint32_t numberOfMap5 = static_cast<uint32_t>(m_mapOfMap5.size());
			s->write(5, numberOfMap5);
		
			// Write actual elements into a stringstream.
			std::stringstream sstrOfMap5;
			std::map<float, float>::const_iterator it = m_mapOfMap5.begin();
			while (it != m_mapOfMap5.end()) {
			    sstrOfMap5 << it->first << "=" << it->second << endl;
			    it++;
			}
			
			// Write string of elements.
			if (numberOfMap5 > 0) {
				s->write(5 + 7,
						sstrOfMap5.str());
			}
		}
		{
			// Write number of elements in m_mapOfMap6.
			const uint32_t numberOfMap6 = static_cast<uint32_t>(m_mapOfMap6.size());
			s->write(6, numberOfMap6);
		
			// Write actual elements into a stringstream.
			std::stringstream sstrOfMap6;
			std::map<float, double>::const_iterator it = m_mapOfMap6.begin();
			while (it != m_mapOfMap6.end()) {
			    sstrOfMap6 << it->first << "=" << it->second << endl;
			    it++;
			}
			
			// Write string of elements.
			if (numberOfMap6 > 0) {
				s->write(6 + 7,
						sstrOfMap6.str());
			}
		}
		{
			// Write number of elements in m_mapOfMap7.
			const uint32_t numberOfMap7 = static_cast<uint32_t>(m_mapOfMap7.size());
			s->write(7, numberOfMap7);
		
			// Write actual elements into a stringstream.
			std::stringstream sstrOfMap7;
			std::map<float, std::string>::const_iterator it = m_mapOfMap7.begin();
			while (it != m_mapOfMap7.end()) {
			    sstrOfMap7 << it->first << "=" << it->second << endl;
			    it++;
			}
			
			// Write string of elements.
			if (numberOfMap7 > 0) {
				s->write(7 + 7,
						sstrOfMap7.str());
			}
		}
		return out;
	}

	istream& Test11MapFloat::operator>>(istream &in) {

		SerializationFactory& sf = SerializationFactory::getInstance();

		core::SharedPointer<Deserializer> d = sf.getDeserializer(in);

		// Clean up the existing map of Map1.
		m_mapOfMap1.clear();
		
		// Read number of elements in m_mapOfMap1.
		uint32_t numberOfMap1 = 0;
		d->read(1, numberOfMap1);
		
		if (numberOfMap1 > 0) {
		    // Read string of elements.
		    string elements;
			d->read(1 + 7,
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
			    float _key;
		        sstrKey >> _key;
		
			    stringstream sstrValue(value);
			    bool _value;
		        sstrValue >> _value;
		
				// Store key/value pair.
				putTo_MapOfMap1(_key, _value);
			}
		}
		// Clean up the existing map of Map2.
		m_mapOfMap2.clear();
		
		// Read number of elements in m_mapOfMap2.
		uint32_t numberOfMap2 = 0;
		d->read(2, numberOfMap2);
		
		if (numberOfMap2 > 0) {
		    // Read string of elements.
		    string elements;
			d->read(2 + 7,
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
			    float _key;
		        sstrKey >> _key;
		
			    stringstream sstrValue(value);
			    char _value;
		        sstrValue >> _value;
		
				// Store key/value pair.
				putTo_MapOfMap2(_key, _value);
			}
		}
		// Clean up the existing map of Map3.
		m_mapOfMap3.clear();
		
		// Read number of elements in m_mapOfMap3.
		uint32_t numberOfMap3 = 0;
		d->read(3, numberOfMap3);
		
		if (numberOfMap3 > 0) {
		    // Read string of elements.
		    string elements;
			d->read(3 + 7,
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
			    float _key;
		        sstrKey >> _key;
		
			    stringstream sstrValue(value);
			    int32_t _value;
		        sstrValue >> _value;
		
				// Store key/value pair.
				putTo_MapOfMap3(_key, _value);
			}
		}
		// Clean up the existing map of Map4.
		m_mapOfMap4.clear();
		
		// Read number of elements in m_mapOfMap4.
		uint32_t numberOfMap4 = 0;
		d->read(4, numberOfMap4);
		
		if (numberOfMap4 > 0) {
		    // Read string of elements.
		    string elements;
			d->read(4 + 7,
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
			    float _key;
		        sstrKey >> _key;
		
			    stringstream sstrValue(value);
			    uint32_t _value;
		        sstrValue >> _value;
		
				// Store key/value pair.
				putTo_MapOfMap4(_key, _value);
			}
		}
		// Clean up the existing map of Map5.
		m_mapOfMap5.clear();
		
		// Read number of elements in m_mapOfMap5.
		uint32_t numberOfMap5 = 0;
		d->read(5, numberOfMap5);
		
		if (numberOfMap5 > 0) {
		    // Read string of elements.
		    string elements;
			d->read(5 + 7,
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
			    float _key;
		        sstrKey >> _key;
		
			    stringstream sstrValue(value);
			    float _value;
		        sstrValue >> _value;
		
				// Store key/value pair.
				putTo_MapOfMap5(_key, _value);
			}
		}
		// Clean up the existing map of Map6.
		m_mapOfMap6.clear();
		
		// Read number of elements in m_mapOfMap6.
		uint32_t numberOfMap6 = 0;
		d->read(6, numberOfMap6);
		
		if (numberOfMap6 > 0) {
		    // Read string of elements.
		    string elements;
			d->read(6 + 7,
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
			    float _key;
		        sstrKey >> _key;
		
			    stringstream sstrValue(value);
			    double _value;
		        sstrValue >> _value;
		
				// Store key/value pair.
				putTo_MapOfMap6(_key, _value);
			}
		}
		// Clean up the existing map of Map7.
		m_mapOfMap7.clear();
		
		// Read number of elements in m_mapOfMap7.
		uint32_t numberOfMap7 = 0;
		d->read(7, numberOfMap7);
		
		if (numberOfMap7 > 0) {
		    // Read string of elements.
		    string elements;
			d->read(7 + 7,
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
			    float _key;
		        sstrKey >> _key;
		
			    stringstream sstrValue(value);
			    std::string _value;
		        getline(sstrValue, _value);
		
				// Store key/value pair.
				putTo_MapOfMap7(_key, _value);
			}
		}
		return in;
	}
