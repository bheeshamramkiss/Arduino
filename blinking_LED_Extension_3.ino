/*
 * Name: Bheesham Ramkissoon
 * Date: April 25, 2019
 * Description: Blinks an LED
 */

// pin 13 has an LED connected on most Arduino boards
// give it a name
 int led = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, 75); // turn the LED on
  delay(500); // wait a second
  analogWrite(led, 255); // turn the LED on
  delay(500); // wait a second
  analogWrite(led, 0); // turn the led off
  delay(500); // wait a second
  
  
}
