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

	return 0;
}