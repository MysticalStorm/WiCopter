// MPU9265.h

#ifndef _MPU9265_h
#define _MPU9265_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class MPU9265Class {
 protected:


 public:
	void init();
};

#endif

