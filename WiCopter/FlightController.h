//
// Navigation.h
//

#ifndef _NAVIGATION_h
#define _NAVIGATION_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class FlightController
{
 protected:


 public:
	void init();
	void update();
};

#endif