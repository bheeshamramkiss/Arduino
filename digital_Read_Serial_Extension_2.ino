/*
 * Name: Bheesham Ramkissoon
 * Date: April 25, 2019
 * Description: Blinks an LED
 */

// pin 13 has an LED connected on most Arduino boards
// give it a name
 int pushButton = 2;
 int led = 13;

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
    Serial.println("Bheesham Ramkissoon");
    digitalWrite(led, HIGH);
  }
  else{
    Serial.println(buttonState); // prints 0 if the button
                                 // is not pressed
    digitalWrite(led, LOW);
  }
  delay(1); // delay in between for stability
  
}
