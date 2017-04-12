// WifiController.h

#ifndef _WIFICONTROLLER_h
#define _WIFICONTROLLER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include <SoftwareSerial.h>
#include "MPU9265.h"

class WifiControllerClass
{
 protected:

 public:
	Orientation *orientation;

	void init(Orientation *orientation);
	void update();
};

#endif

