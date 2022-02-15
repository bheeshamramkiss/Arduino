/*
 * Name: Bheesham Ramkissoon
 * Date: May 1, 2019
 * Description: Controlling a DC motor through the use of an H-Bridge
 */

const int Motor1APin = 3; // H-Bridge logic pin 1A
const int Motor2APin = 5; // H-Bridge logic pin 2A
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


  for (int i = 0; i < 256; i++){
  digitalWrite(Motor1APin, LOW);
  analogWrite(Motor2APin, i);
  delay (100);
  }

  delay(500);

  for (int i = 255; i > 0; i--){
  digitalWrite(Motor1APin, LOW);
  analogWrite(Motor2APin, i);
  delay (100);
  }

  for (int i = 0; i < 256; i++){
  analogWrite(Motor1APin, i);
  digitalWrite(Motor2APin, LOW);
  delay (100);
  }

  delay(500);

  for (int i = 255; i > 0; i--){
  analogWrite(Motor1APin, i);
  digitalWrite(Motor2APin, LOW);
  delay (100);
  }

}
