/*
  Some of this code has been based on the code from Smartcar Shiled from Dimitris Platis with the authors consent.
*/

#include "Ultrasonic.h"

#define _cmdByte 0x00                               // Command byte
#define _lightByte 0x01                             // Byte to read light sensor
#define _rangeByte 0x02                             // Byte for start of ranging data

Ultrasonic::Ultrasonic(uint8_t address) {
  _address = address;
  _delay = 11;
  _gainValue = 0;
  _rangeValue = 23; //more or less 47 cms (10*43mm) + 43mm
}

void Ultrasonic::begin() {
  Wire.begin();
  setGain(_gainValue);
  setRange(_rangeValue);
}

uint8_t Ultrasonic::getDistance() {
  Wire.beginTransmission(_address);
  Wire.write(byte(0x00));
  Wire.write(byte(0x51));
  Wire.endTransmission();
  delay(_delay);
  Wire.beginTransmission(_address);
  Wire.write(byte(0x02));
  Wire.endTransmission();
  Wire.requestFrom(_address, uint8_t (2));
  while (Wire.available() < 2);
  byte high = Wire.read();
  byte low = Wire.read();
  uint8_t answer = (high << 8) + low;
  if (answer > 50)
    answer = -1;
  return answer;
}

String Ultrasonic::getStringDistance() {
  float distance = (float)getDistance();
  String answer = "";
  if (distance > 35)
    distance = -1;
  if (distance < 10) {
    answer += "0" + String(distance);
  }
  return answer;
}

uint8_t Ultrasonic::getLight() {
  Wire.beginTransmission(_address);
  Wire.write(_lightByte);                           // Call register to get light reading
  Wire.endTransmission();
  Wire.requestFrom(_address, (uint8_t) 1);          // Request 1 byte
  while(Wire.available() < 0);                      // While byte available
  int lightRead = Wire.read();                      // Get light reading
  return(lightRead);                                // Returns lightRead
}

void Ultrasonic::setGain(uint8_t gainValue) {
  _gainValue = gainValue;
  Wire.beginTransmission(_address);                 //start i2c transmission
  Wire.write(0x01);                                 //write to GAIN register (1)
  Wire.write(constrain(_gainValue,0,31));           //write the value
  Wire.endTransmission();                           //end transmission
}

void Ultrasonic::setRange(uint8_t rangeValue) {
  _rangeValue = rangeValue;
  Wire.beginTransmission(_address);                 //start i2c transmission
  Wire.write(0x02);                                 //write to range register (1)
  Wire.write(_rangeValue);                          //write the value // Max_Range = (rangeValue * 3.4) + 3.4 in centimeters
  Wire.endTransmission();                           //end transmission
}
void Ultrasonic::setDelay(uint8_t delayTime) {
  _delay = delayTime;
}