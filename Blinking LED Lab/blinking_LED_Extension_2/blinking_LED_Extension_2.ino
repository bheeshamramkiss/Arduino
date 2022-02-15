/*
 * Name: Bheesham Ramkissoon
 * Date: April 25, 2019
 * Description: Blinks an LED
 */

// pin 13 has an LED connected on most Arduino boards
// give it a name
 int led = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH); // turn the LED on
  delay(500); // wait a second
  digitalWrite(led, LOW); // turn the led off
  delay(500); // wait a second
  
  
}
