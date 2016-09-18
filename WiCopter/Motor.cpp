// 
// 
// 

#include "Motor.h"

Motor::Motor() {}

Motor::Motor(signed char pin, LocationType loc) {
	speed = 0;
	location = loc;

	motor.attach(pin);
}

void Motor::update() {
	motor.writeMicroseconds(speed);
}
