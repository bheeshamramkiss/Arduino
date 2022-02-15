/*
 * Name: Bheesham Ramkissoon
 * Date: May 3, 2019
 * Description: Turns a servo motor using the Servo.h library
 */

#include <Servo.h> // provides access to the external Servo.h library and its functionality

Servo servo1; // create a servo object called "servo1: to control a servo

 const int servoPin = 9; // servo pin connected to pin 9
 int pulse_value = 1300;
 int buttonPin = 12; //pin 12 is assigned for the push button
 int buttonState;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(servoPin); // attach the servo to pin 9
  pinMode(buttonPin, INPUT);
  buttonState = 0;

}

void loop() {
  // put your main code here, to run repeatedly:
  if ((digitalRead(buttonPin) == HIGH) && (buttonState == 0)){
    buttonState = 1;
    servo1.write(180);
    delay(750);
  }
  if ((digitalRead(buttonPin) == HIGH) && (buttonState == 1)){
    buttonState = 0;
    servo1.write(-180);
    delay(750);
  }
  else{
    servo1.writeMicroseconds(1500);
  }

}
