#include "Ultrasonic.h"

#define _cmdByte 0x00                               // Command byte
#define _lightByte 0x01                             // Byte to read light sensor
#define _rangeByte 0x02                             // Byte for start of ranging data

Ultrasonic::Ultrasonic(uint8_t address) {
  _address = address;
  _delayTime = 10;
  _gainValue = 31;
  _rangeValue = 7;
}

void Ultrasonic::begin() {
  Wire.begin();
  setGain(_gainValue);
  setRange(_rangeValue);
}

uint8_t Ultrasonic::getDistance() {
  int distance = 0; 
  Wire.beginTransmission(_address);                 // Start communicating with SRF08
  Wire.write((byte)_cmdByte);                       // Send Command Byte
  Wire.write(0x51);                                 // Send 0x51 to start a ranging in cm
  Wire.endTransmission();
 
  delay(_delayTime);                                // Wait for ranging to be complete
 
  Wire.beginTransmission(_address);                 // start communicating with SRFmodule
  Wire.write(_rangeByte);                           // Call the register for start of ranging data
  Wire.endTransmission();
 
  Wire.requestFrom(_address, (uint8_t)2);           // Request 2 bytes from SRF module
  while(Wire.available() < 2);                      // Wait for data to arrive
  byte highByte = Wire.read();                      // Get high byte
  byte lowByte = Wire.read();                       // Get low byte
 
  distance = (highByte << 8) + lowByte;             // Put them together
 
  return(distance);                                 // Returns Range
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
  _delayTime = delayTime;
}