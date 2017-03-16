/*
 Name:		WiCopter.ino
 Created:	9/17/2016 5:46:58 AM
 Author:	quadro
*/

// the setup function runs once when you press reset or power the board
#include "WifiController.h"
#include "FlightStabilization.h"
#include <Servo.h>
#include <SPI.h>
#include <Wire.h>
#include "FlightController.h"
#include <SoftwareSerial.h>

FlightController fc;
//SoftwareSerial serialTest(A3, A2);
//SoftwareSerial WifiSerial(A3, A2);

void setup() {
	Serial.begin(9600);
	//WifiSerial.begin(115200);

	//serialTest.begin(9600);
	fc.init();
}

// the loop function runs over and over again until power down or reset
void loop() {
	fc.update();

	/*
	if (serialTest.available() > 4) {
		char b[5];
		serialTest.readBytes(b, 5);

		Serial.println(b);
	}
	*/
}
