/*
 * Name: Bheesham Ramkissoon
 * Date: April 26, 2019
 * Description: Blinks 2 LEDs using the Millis() function in alternating fashion
 */

 // Declaring the LED pin
 const int ledR = 12; // red LED
 const int ledB = 13; // blue LED

 // setting the default LED state
 int led1State;
 int led2State;

 //declaring a long to keep track of the milliseconds 
 unsigned long previousMillis = 0;

 // declaring and initializing the interval at which the LED will swtich on and off
 const long interval = 1000; // interval used for the red LED
 const long interval2 = 1000; // interval to be used for the blue LED


// method that switches the LED state
 int SwitchState(int ledState){
 int result;
 if (ledState == LOW){
     result = HIGH;
   }
   else{
     result = LOW;
   }

   return result;
 }

// blink method that will take care of the blinking given the respected LED to control
 void blinkLED(int ledToBlink, int ledState, long interval){
 unsigned long currentMillis = millis(); // store the current clock value
 
   if ((currentMillis - previousMillis) >= interval){
   //save the current clock value to previous millis
   previousMillis = currentMillis;
   
   // set the LED to its appropriate state
   digitalWrite(ledToBlink, ledState);
}
 }

void setup() {
  // put your setup code here, to run once:
  led1State = 0;
  led2State = 0;
  pinMode(ledR, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  led1State = SwitchState(led1State);
  blinkLED (ledR, led1State, interval);
  //led2State = SwitchState(led2State);
  //1blinkLED (ledB, led2State, interval2);
  } // loop
