/*
 * Name: Bheesham Ramkissoon
 * Date: April 25, 2019
 * Description: Blinks an LED
 */

// pin 13 has an LED connected on most Arduino boards
// give it a name
 int pushButton = 2;

void setup() {
  
  //initialize serial communicatiion at 9600 bits per second
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(pushButton, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(pushButton);
  //print the state of the button
  Serial.println(buttonState);
  delay(1); // delay in between for stability
  
}
