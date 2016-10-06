// 
// 
// 

#include "FlightController.h"
#include "MotorsController.h"
#include "MPU9265.h"

MotorsController mc;

void FlightController::init() {
	mc.init();
}

void FlightController::update() {

	mc.update();
}