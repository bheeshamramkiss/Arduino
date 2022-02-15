/*
 * Name: Bheesham Ramkissoon and Mabin Mathew
 * Date: June 10, 2019
 * Description: Controls a robot and stops it when it is 10 cm or less from a wall
 * bluetooth device
 */
const int LMotor1A = 2;
const int LMotor2A = 3;
const int RMotor3A = 7;
const int RMotor4A = 6;
const int LMotorE = 5;
const int RMotorE = 9;

 //define pin numbers
 const int trigPin = 12;
 const int echoPin = 13;

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
