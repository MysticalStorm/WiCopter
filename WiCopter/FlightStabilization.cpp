// 
// 
// 

#include "FlightStabilization.h"
#include "MPU9265.h"
#include "WifiController.h"

MPU9265Class MPU;
WifiControllerClass Wifi;
SoftwareSerial WifiSerial(A3, A2);

void FlightStabilizationClass::init() {
	MPU.init();
	Wifi.init();
	WifiSerial.begin(115200);
}

void FlightStabilizationClass::update() {
	MPU.update();
	Wifi.update();

	//Serial.println(MPU.orientation.height);
	int a = MPU.orientation.height * 100;

	String str = String(a) + ";";
	Serial.println(str);

	WifiSerial.flush();
	delay(250);
	for (int i = 0; i < str.length(); i++)
	WifiSerial.write(str[i]);

	if (WifiSerial.available() > 0) {
		char a[5];
		WifiSerial.readBytes(a, 5);
		Serial.println(a);
	}
}

unsigned short int FlightStabilizationClass::speedForMotor(Motor motor) {
	float roll = MPU.orientation.roll;
	float pitch = MPU.orientation.pitch;
	float yaw = MPU.orientation.yaw;

	switch (motor.location) {
	case RearRight: return throttle - pitch + roll;
		break;
	case RearLeft: return throttle - pitch - roll;
		break;
	case FrontRight: return throttle + pitch + roll;
		break;
	case FrontLeft: return throttle + pitch - roll;
		break;
	}
}