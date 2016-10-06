// MotorsController.h

#ifndef _MOTORSCONTROLLER_h
#define _MOTORSCONTROLLER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include "Motor.h"
#include "FlightStabilization.h"

class MotorsController {
 private:
	 FlightStabilizationClass FS;

 public:
	 Motor motors[4];

	 void init();
	 void update();
};


#endif

