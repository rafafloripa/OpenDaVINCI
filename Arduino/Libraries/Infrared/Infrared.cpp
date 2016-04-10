#include "Infrared.h"

Infrared::Infrared(uint8_t pin) {
	_pin = pin;
}

void Infrared::begin () {
	pinMode(_pin, INPUT);
}

float Infrared::getDistance() {
	 uint16_t value = analogRead (_pin);
     return ((2914 / (value + 5)) - 1);
}