// MotorsController.h

#ifndef _MOTORSCONTROLLER_h
#define _MOTORSCONTROLLER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include "Motor.h"

class MotorsController {
 private:
	 MotorsController();

 public:
	 Motor *motors = new Motor[4];

	 void init();
	 void update();
	 void addMotor(Motor motor);
};


#endif

