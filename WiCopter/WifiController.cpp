// 
// 
// 

#include "WifiController.h"

SoftwareSerial WifiSerial(A3, A2);

void WifiControllerClass::init(Orientation *orientation) {
	WifiSerial.begin(115200);
	WifiControllerClass::orientation = orientation;
}

void WifiControllerClass::update() {
	//Serial.println(orientation->height);
	/*
	//Serial.println(MPU.orientation.height);
	int a = MPU.orientation.height * 100;

	String str = String(a) + ";";
	Serial.println(str);
	delay(1000);
	WifiSerial.flush();
	//delay(250);
	for (int i = 0; i < str.length(); i++)
	WifiSerial.write(str[i]);

	if (WifiSerial.available() > 0) {
	char a[5];
	WifiSerial.readBytes(a, 5);
	Serial.println(a);
	}
	*/
	
	unsigned int height = orientation->height * 100;
	unsigned int pitch = orientation->pitch * 100;
	unsigned int pressure = orientation->pressure * 100;
	unsigned int roll = orientation->roll * 100;
	unsigned int temperature = orientation->temperature * 100;
	unsigned int yaw = orientation->yaw * 100;

	String height_str = String(height);
	String pitch_str = String(pitch);
	String pressure_str = String(pressure);
	String roll_str = String(roll);
	String temperature_str = String(temperature);
	String yaw_str = String(yaw);
	
	String result = "0:" + height_str + ":" + pitch_str + ":" + pressure_str + ":" + roll_str + ":" + temperature_str + ":" + yaw_str + ";";
	Serial.println(result);
	WifiSerial.flush();

	for (int i = 0; i < result.length(); i++) WifiSerial.write(result[i]);
}

