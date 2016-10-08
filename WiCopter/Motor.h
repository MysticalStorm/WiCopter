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

 public:
	 bool active = false;
	 unsigned short int speed;
	 unsigned short int maxSpeed;
	 unsigned short int minSpeed;
	 LocationType location;
		
	 Motor();
	 Motor(unsigned char pin, LocationType location);
	 void update();

	 String stringLocation();
};

#endif

