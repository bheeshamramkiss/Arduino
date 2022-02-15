/*
 * Name: Bheesham Ramkissoon
 * Date: May 3, 2019
 * Description: Turns a servo motor using the Servo.h library
 */

#include <Servo.h> // provides access to the external Servo.h library and its functionality

Servo servo1; // create a servo object called "servo1: to control a servo

 const int servoPin = 9; // servo pin connected to pin 9
 int ldrPin = A0; //pin 12 is assigned for the LDR value
 int ldrVal;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(servoPin); // attach the servo to pin 9
  pinMode(ldrPin, INPUT); // we are reading the LDR value, so we must set it as an input
}

void loop() {
  // put your main code here, to run repeatedly:
  ldrVal = analogRead(ldrPin);
  ldrVal = map(ldrVal, 0, 1023, 500, 2500);
  servo1.writeMicroseconds(ldrVal);
  

}
