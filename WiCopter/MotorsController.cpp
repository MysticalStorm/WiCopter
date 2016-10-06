// 
// 
// 

#include "MotorsController.h"

void MotorsController::init() {
	FS.init();

	motors[0] = Motor(9, RearLeft);
	motors[1] = Motor(9, RearRight);
	motors[2] = Motor(9, FrontLeft);
	motors[3] = Motor(9, FrontRight);
}

void MotorsController::update() {
	FS.update();

	for (char i = 0; i < 4; i++) {
		Motor m = motors[i];
		m.speed = FS.speedForMotor(m);
		m.update();
	}
}