// 
// 
// 

#include "FlightStabilization.h"
#include "MPU9265.h"

MPU9265Class MPU;

void FlightStabilizationClass::init() {
	MPU.init();
}

void FlightStabilizationClass::update() {
	MPU.update();
}

unsigned short int FlightStabilizationClass::speedForMotor(Motor motor) {
	float roll = MPU.orientation.roll;
	float pitch = MPU.orientation.pitch;
	float yaw = MPU.orientation.yaw;

	switch (motor.location) {
	case RearRight: return throttle - pitch + roll;
		break;
	case RearLeft: return throttle - pitch - roll;
		break;
	case FrontRight: return throttle + pitch + roll;
		break;
	case FrontLeft: return throttle + pitch - roll;
		break;
	}
}