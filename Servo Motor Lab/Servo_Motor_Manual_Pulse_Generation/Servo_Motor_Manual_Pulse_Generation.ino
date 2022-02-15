/*
 * Name: Bheesham Ramkissoon
 * Date: May 3, 2019
 * Description: Turns a servo motor
 */

 const int servoPin = 9; // servo pin connected to pin 4
 int pulse_value = 1500;

void setup() {
  // put your setup code here, to run once:
  pinMode(servoPin, OUTPUT);  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(2500);
  digitalWrite(servoPin, LOW);
  delay(20);

}
