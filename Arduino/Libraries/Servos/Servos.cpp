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
	servo.write(_angle+deviation);
	esc.write(_speed);
}

//Receives the angle in degrees up to 90. Negative for left and positive for right.
void Servos::turn(uint8_t angle) {
	angle = map(angle,-90, 90, _minServo, _maxServo);	
	_angle = constrain (angle, _minServo, _maxServo);
	servo.write(_angle+deviation);
}

void Servos::turnWave(unsigned int angleWave) {
	if ((angleWave > 1500) && (angleWave-1500 < 50)) 
		angleWave = 1500;
	else if ((angleWave < 1500) && (1500 - angleWave < 50))
		angleWave = 1500;
	angleWave = constrain (angleWave, _minRC, _maxRC);
	_angle = map(angleWave, _minRC, _maxRC, _minServo, _maxServo);
	servo.write(_angle+deviation);
}

void Servos::move(int speed) {
	speed = map(speed, -100,100, _minRC, _maxRC);
	_speed = constrain (speed, _minESC, _maxESC);
	esc.writeMicroseconds(_speed);
}

void Servos::moveWave(unsigned int speed) {
	if ((speed > 1500) && (speed-1500 < 50)) 
		speed = 1500;
	else if ((speed < 1500) && (1500 - speed < 50))
		speed = 1500;	
	_speed = constrain (speed, _minESC, _maxESC);
	esc.writeMicroseconds(_speed);
}

void Servos::update() {
	servo.write(_angle);
	esc.write(_speed);
}