// MPU9265.h

#ifndef _MPU9265_h
#define _MPU9265_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

struct Orientation
{
	float pitch;
	float yaw;
	float roll;
	float height;
	float pressure;
	float temperature;
};

class MPU9265Class {
 protected:

 public:
	void init();
	void update();
	Orientation orientation;
};

#endif

