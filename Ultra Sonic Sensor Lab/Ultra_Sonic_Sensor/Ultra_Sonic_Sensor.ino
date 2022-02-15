/*
 * Name: Bheesham Ramkissoon
 * Date: May 2nd, 2019
 * Description: Records, calculated and displays the distance to an object placed in front of the ultrasonic sensor
 */

 //define pin numbers
 const int trigPin = 12;
 const int echoPin = 13;

 //define variables
 long duration;
 int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT); // sets the trigger pin as output
  pinMode(echoPin, INPUT); // sets the echoPin as input
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
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

  //print the distance on the monitor
  Serial.print("Distance: ");
  Serial.println(distance);

}
