#ifndef Ultrasonic_h
  #define Ultrasonic_h
  
  #include "Arduino.h"
  #include <Wire.h>
  
  class Ultrasonic
  {
    public:
      Ultrasonic(uint8_t address);
      void begin();
      int getDistance();
      String getStringDistance();
      uint8_t getLight();
      void setGain(uint8_t gainValue);
      void setRange(uint8_t rangeValue);
      void setDelay(uint8_t delayTime);
    private:
      uint8_t _address;
      uint8_t _delay;
      uint8_t _gainValue;
      uint8_t _rangeValue;
  };

#endif

