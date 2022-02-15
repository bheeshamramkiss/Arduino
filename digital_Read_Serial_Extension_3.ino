/*
 * Name: Bheesham Ramkissoon
 * Date: April 25, 2019
 * Description: Blinks an LED
 */

// pin 13 has an LED connected on most Arduino boards
// give it a name
 int pushButton = 2;
 int led = 9;

void setup() {
  
  //initialize serial communicatiion at 9600 bits per second
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(pushButton, INPUT);
  pinMode(led, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(pushButton);
  //print my name if the button is pressed 
  if (buttonState == 1){
    Serial.print("State of My Push Button = ");
    Serial.println(buttonState);
    analogWrite(led, 255);
  }
  else{
    Serial.print("State of My Push Button = "); // prints 0 if the button
                                                // is not pressed
    Serial.println(buttonState);
    analogWrite(led, 0);
  }
  
  delay(1); // delay in between for stability
  
}
