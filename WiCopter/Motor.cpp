// 
// 
// 

#include "Motor.h"

Motor::Motor() {}

Motor::Motor(unsigned char pin, LocationType loc) {
	// Speed default values
	speed = 0;
	maxSpeed = 0;
	minSpeed = 0;

	// Location
	location = loc;

	// Servo atach
	motor.attach(pin);
}

void Motor::update() {
	if (!active) {
		return;
	}

	motor.writeMicroseconds(speed);
}

String Motor::stringLocation() {
	switch (location) {
	case RearLeft: return "RearLeft";
	case RearRight: return "RearRight";
	case FrontLeft: return "FrontLeft";
	case FrontRight: return "FrontRight";
	}
}
