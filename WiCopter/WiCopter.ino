/*
 Name:		WiCopter.ino
 Created:	9/17/2016 5:46:58 AM
 Author:	quadro
*/

// the setup function runs once when you press reset or power the board
#include "FlightStabilization.h"
#include <Servo.h>
#include <SPI.h>
#include <Wire.h>
#include "FlightController.h"

FlightController fc;

void setup() {
	Serial.begin(9600);

	fc.init();
}

// the loop function runs over and over again until power down or reset
void loop() {
	fc.update();
}
