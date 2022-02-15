/*
 * Name: Bheesham Ramkissoon
 * Date: April 26, 2019
 * Description: Blinks 2 LEDs using the Millis() function
 */

 // Declaring the LED pin
 const int ledR = 12; // red LED
 const int ledB = 13; // blue LED

 // setting the default LED state
 int led1State = LOW;
 int led2State = HIGH;

 //declaring a long to keep track of the milliseconds 
 unsigned long previousMillis = 0;
 unsigned long previousMillis2 = 0;

 // declaring and initializing the interval at which the LED will swtich on and off
 const long interval = 1000;
 const long interval2 = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledR, OUTPUT);
  pinMode(ledB, OUTPUT);
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

  if (currentMillis - previousMillis2 >= interval2){
    //save the current clock value to previous millis
    previousMillis2 = currentMillis;

    // if the LED is off, turn it on and vice versa
    if (led2State == LOW){
      led2State = HIGH;
    }
    else{
      led2State = LOW;
    }

    // set the LED to its appropriate state
    digitalWrite(ledB, led2State);
  }
}
