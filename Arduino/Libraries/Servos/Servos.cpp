#include <Servos.h>

Servos::Servos(uint8_t servoPin, uint8_t escPin) {
	_servoPin = servoPin;
	_escPin = escPin;
}

void Servos::begin() {
	_angle = 90;
	_speed = 1500;
	servo.attach(_servoPin);
	esc.attach(_escPin);
	servo.write(_angle);
	esc.write(_speed);

}

void Servos::turn(uint8_t angle) {
	_angle = constrain (angle, _minServo, _maxServo);
	servo.write(_angle);
}

void Servos::move(unsigned int speed) {
	_speed = constrain (speed, _minESC, _maxESC);
	esc.writeMicroseconds(_speed);
}

void Servos::update() {
	servo.write(_angle);
	esc.write(_speed);
}