#ifndef Servos_h
  #define Servos_h
  
  #include "Arduino.h"
  #include <Servo.h>
  
  class Servos
  {
    public:
      Servos(uint8_t servoPin, uint8_t escPin);
      void begin();
      void turn(uint8_t angle);
      void move(unsigned int speed);
      void update();

    private:
      uint8_t _servoPin;
      uint8_t _escPin;
      uint8_t _angle;
      unsigned int _speed;
      const uint8_t _maxServo = 180;
      const uint8_t _minServo = 0;
      const unsigned int _maxESC = 2000;
      const unsigned int _minESC = 1000;
      Servo servo;
      Servo esc;
  };

#endif

