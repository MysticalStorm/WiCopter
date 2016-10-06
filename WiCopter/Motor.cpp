// 
// 
// 

#include "Motor.h"

Motor::Motor() {}

Motor::Motor(unsigned char pin, LocationType loc) {
	speed = 0;
	location = loc;

	motor.attach(pin);

	// MARK: Debug log
	String output = stringLocation() += " - pin: ";
	output += pin;
	Serial.println(output);
}

void Motor::update() {
	motor.writeMicroseconds(speed);

	// MARK: Debug log
	String output = stringLocation() += " = ";
	output += speed;
	Serial.println(output);
}

String Motor::stringLocation() {
	switch (location) {
	case RearLeft: return "RearLeft";
	case RearRight: return "RearRight";
	case FrontLeft: return "FrontLeft";
	case FrontRight: return "FrontRight";
	}
}
