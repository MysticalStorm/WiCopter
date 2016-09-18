// 
// 
// 

#include "MotorsController.h"

void MotorsController::init() {
}

void MotorsController::update() {
	for (char i = 0; i < 4; i++) {
		Motor &m = motors[i];
		m.update();
	}
}

void MotorsController::addMotor(Motor motor) {
	for (char i = 0; i < 4; i++) {
		if (!motors[i].location) {
			motors[i] = motor;
		}
	}
}