// 
// 
// 

#include "FlightController.h"
#include "MPU9265.h"

MPU9265Class mpu;

void FlightController::init() {
	mpu.init();
}

void FlightController::update() {
	mpu.update();
	pitch = mpu.pitch;
	roll  = mpu.roll;
	yaw   = mpu.yaw;
}