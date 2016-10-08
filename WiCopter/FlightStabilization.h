// FlightStabilization.h

#ifndef _FLIGHTSTABILIZATION_h
#define _FLIGHTSTABILIZATION_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include "Motor.h"

class FlightStabilizationClass {
 public:
	 bool enabled = true;
	 int throttle = 1000;

	 void init();
	 void update();
	 unsigned short int speedForMotor(Motor motor);
};

#endif

