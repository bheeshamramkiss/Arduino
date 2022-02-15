/*
 * Name: Bheesham Ramkissoon
 * Date: May 9, 2019
 * Description: Blinks an LED when a button is pressed on a
 * bluetooth device
 */

#include <SoftwareSerial.h> // Including the serial communication library to use the digital pins for communication

SoftwareSerial BTSerial(10, 11); // Creating an instance of a SoftwareSerial object called BTSerial with pins 10, 11

const int led = 13; // LED connected to pin 13
char BTDataIn; // variable to store data received from HC-05

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  BTSerial.begin(9600);
  Serial.println("The BT gates are open.\n Connect to HC-05 from any other BT device with 1234 as pairing key!"); 

}

void loop() {
  // put your main code here, to run repeatedly:
  if (BTSerial.available() > 0){
    BTDataIn = BTSerial.read(); // if there is data, assign it to the BTDataIn variable

    if (BTDataIn == '1'){
      digitalWrite(led, HIGH); // turns the LED on if there is data coming in
    }
    
    else{
      digitalWrite(led, LOW); // turns the LED off if there is no data cominng in
    }

    Serial.println(BTDataIn); // print the value of Bluetooth Data to Serial Monitor    
    
  }

}
