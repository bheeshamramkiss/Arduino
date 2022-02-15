/*
 * Name: Bheesham Ramkissoon
 * Date: May 3, 2019
 * Description: Turns a servo motor using the Servo.h library
 */

#include <Servo.h> // provides access to the external Servo.h library and its functionality

Servo servo1; // create a servo object called "servo1: to control a servo

 const int servoPin = 9; // servo pin connected to pin 9
 int pulse_value = 500;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(servoPin); // attach the servo to pin 9

}

void loop() {
  // put your main code here, to run repeatedly:
  servo1.writeMicroseconds(500); // run servo1 with the specified pulse width value
  delay(700);
  servo1.writeMicroseconds(1500);
  delay(100);
  servo1.writeMicroseconds(2500); // run servo1 with the specified pulse width value
  delay(750);
  servo1.write(90);
  delay(2000);

}
