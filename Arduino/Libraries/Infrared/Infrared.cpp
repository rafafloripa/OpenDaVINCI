#include "Infrared.h"

Infrared::Infrared(uint8_t pin) {
	_pin = pin;
}

void Infrared::begin () {
	pinMode(_pin, INPUT);
}

float Infrared::getDistance() {
	unsigned int value = analogRead (_pin);
  float answer = ((2914 / (value + 5)) - 1);
  if ((answer > 35) || (answer < 3))
  	answer = -1;
  return answer;
}

String Infrared::getStringDistance() {
	String answer = "";
	float distance = getDistance();
	if (distance > 35)
	    distance = -1;
  if (distance < 10) {
    answer += "0" + String(distance);
  }
  return answer;
}