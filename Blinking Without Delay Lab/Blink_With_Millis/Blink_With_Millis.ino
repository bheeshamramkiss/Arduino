/*
 * Name: Bheesham Ramkissoon
 * Date: April 26, 2019
 * Description: Blinks 2 LEDs using the Millis() function
 */

 // Declaring the LED pin
 const int ledR = 12; // red LED

 // setting the default LED state
 int led1State = LOW;

 //declaring a long to keep track of the milliseconds 
 unsigned long previousMillis = 0;

 // declaring and initializing the interval at which the LED will swtich on and off
 const long interval = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledR, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentMillis = millis(); // store the current clock value

  if (currentMillis - previousMillis >= interval){
    //save the current clock value to previous millis
    previousMillis = currentMillis;

    // if the LED is off, turn it on and vice versa
    if (led1State == LOW){
      led1State = HIGH;
    }
    else{
      led1State = LOW;
    }

    // set the LED to its appropriate state
    digitalWrite(ledR, led1State);
  }
}
