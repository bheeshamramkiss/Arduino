/*
 * Name: Bheesham Ramkissoon
 * Date: May 1, 2019
 * Description: Controlling a DC motor through the use of an H-Bridge
 */

const int Motor1APin = 7; // H-Bridge logic pin 1A
const int Motor2APin = 6; // H-Bridge logic pin 2A
const int Enable12EPin = 9; // H-Bridge enable pin to connect motor 1 to PWM

void setup() {
  // put your setup code here, to run once:
  pinMode(Motor1APin, OUTPUT); // H-Bridge logic pin 1A is output
  pinMode(Motor2APin, OUTPUT); // H-Bridge logic pin 2A is output
  pinMode(Enable12EPin, OUTPUT); // H-Bridge enable pin is output

  digitalWrite(Enable12EPin, HIGH); // setting the enable pin at all times allows the motor to stay on all the time
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Motor1APin, HIGH);
  digitalWrite(Motor2APin, LOW);

}
