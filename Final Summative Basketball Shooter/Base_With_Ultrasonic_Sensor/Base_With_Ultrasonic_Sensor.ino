/*
 * Name: Bheesham Ramkissoon and Mabin Mathew
 * Date: June 10, 2019
 * Description: Controls a robot to move and stop a certain distance away from a wall, and relies on bluetooth communication means to shoot a projectile into a basketball net 5 feet away.
 */

#include <SoftwareSerial.h> // Including the serial communication library to use the digital pins for communication

SoftwareSerial BTSerial(10, 11); // Creating an instance of a SoftwareSerial object called BTSerial with pins 10, 11 
char BTDataIn; // variable to store data received from HC-05
const int LMotor1A = 2;
const int LMotor2A = 3;
const int RMotor3A = 7;
const int RMotor4A = 6;
const int LMotorE = 5;
const int RMotorE = 9;

 //define pin numbers
 const int trigPin = 12;
 const int echoPin = 13;

 //TEMPORARY LED VARIABLE USED TO THE TESTING OF THE BT MODULE
 int led = 8;

 //define variables
 long duration;
 int distance;


void setup() {
  // put your setup code here, to run once:
  pinMode (LMotor1A, OUTPUT);
  pinMode (LMotor2A, OUTPUT);
  pinMode (RMotor3A, OUTPUT);
  pinMode (RMotor4A, OUTPUT);
  pinMode (LMotorE, OUTPUT);
  pinMode (RMotorE, OUTPUT);

  pinMode(trigPin, OUTPUT); // sets the trigger pin as output
  pinMode(echoPin, INPUT); // sets the echoPin as input

  Serial.begin(9600);
  BTSerial.begin(9600); // initalizing the bluetooth communication
  Serial.println("The BT gates are open.\n Connect to HC-05 from any other BT device with 1234 as pairing key!");
}

void loop() {

 //set the trig pin to 0
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  //sets the trig pin to high for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //read the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  //calculate the distance in cm using formula
  distance = (duration * 0.034) / 2;

   if (distance <= 10 ){
     analogWrite (LMotorE, 0);
     analogWrite (RMotorE, 0);

     // controlling the shooting mechanism
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

   else {
      digitalWrite (LMotor1A, HIGH);
      digitalWrite (LMotor2A, LOW);
      analogWrite (LMotorE, 150);
      digitalWrite (RMotor3A, HIGH);
      digitalWrite (RMotor4A, LOW);
      analogWrite (RMotorE, 150);

   }

  Serial.print("Distance: ");
  Serial.println(distance);


}
