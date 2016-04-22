#ifndef Infrared_h
  #define Infrared_h
  
  #include "Arduino.h"
  
  class Infrared
  {
    public:
      Infrared(uint8_t pin);
      void begin();
      float getDistance();
      String getStringDistance();
      
    private:
      uint8_t _pin;
  };

#endif

