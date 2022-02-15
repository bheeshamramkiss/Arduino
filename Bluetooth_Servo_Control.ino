/*
 * Name: Bheesham Ramkissoon
 * Date: May 9, 2019
 * Description: Blinks an LED when a button is pressed on a
 * bluetooth device
 */

#include <SoftwareSerial.h> // Including the serial communication library to use the digital pins for communication
#include <Servo.h> // Including the servo library so that we can utilize the servo library commands

Servo servo1; // creating a new servo object
SoftwareSerial BTSerial(10, 11); // Creating an instance of a SoftwareSerial object called BTSerial with pins 10, 11

const int servoPin = 13; // servo motor connected to pin 13
char BTDataIn; // variable to store data received from HC-05

void setup() {
  // put your setup code here, to run once:
  servo1.attach(servoPin);
  Serial.begin(9600);
  BTSerial.begin(9600);
  Serial.println("The BT gates are open.\n Connect to HC-05 from any other BT device with 1234 as pairing key!"); 

}

void loop() {
  // put your main code here, to run repeatedly:
  if (BTSerial.available() > 0){
    BTDataIn = BTSerial.read(); // if there is data, assign it to the BTDataIn variable

    if (BTDataIn == '1'){
      servo1.write(180); // turns the motor on in one direction if there is data coming in
    }
    else if (BTDataIn == '2'){
      servo1.write(0); // turns the motor in the opposite direction
    }
    else{
      servo1.write(90); // turns the motor off if there is no data cominng in
    }

    Serial.println(BTDataIn); // print the value of Bluetooth Data to Serial Monitor    
    
  }

}
