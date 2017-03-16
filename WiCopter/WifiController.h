// WifiController.h

#ifndef _WIFICONTROLLER_h
#define _WIFICONTROLLER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include <SoftwareSerial.h>

class WifiControllerClass
{
 protected:

 public:
	void init();
	void update();
};

#endif

