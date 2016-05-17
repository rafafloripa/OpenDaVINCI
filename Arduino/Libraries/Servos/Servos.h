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
      void turnWave(unsigned int angle);
      void move(int speed);
      void moveWave(unsigned int speed);
      void update();

    private:
      uint8_t _servoPin;
      uint8_t _escPin;
      uint8_t _angle;
      unsigned int _speed;
      const uint8_t _maxServo = 180;
      const uint8_t _minServo = 0;
      const unsigned int _maxRC = 2000;
      const unsigned int _minRC = 1000;
      const unsigned int _maxESC = 1650;
      const unsigned int _minESC = 1000;
      const int deviation = -22;
      Servo servo;
      Servo esc;
  };

#endif

