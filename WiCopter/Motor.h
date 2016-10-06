// Motor.h

#ifndef _MOTOR_h
#define _MOTOR_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "Servo.h"

enum LocationType {
	FrontLeft = 0,
	FrontRight,
	RearLeft,
	RearRight
};

class Motor {

 private:
	 // Vars
	 Servo motor;

	 // Methods
	 String stringLocation();

 public:
	 unsigned short int speed;
	 LocationType location;
		
	 Motor();
	 Motor(unsigned char pin, LocationType location);
	 void update();
};

#endif

