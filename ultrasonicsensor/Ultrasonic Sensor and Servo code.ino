#include <Servo.h>
const int trigPin = 9;
const int echoPin = 10;
Servo servo1;




float duration, distance;

void setup()
{
  servo1.attach(11);
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
	Serial.begin(9600);

}

void loop()
{
	GetDistance();
	servo1.write(0);
	if(distance <=10)
  {
		servo1.write(89);
  }
	Serial.print("distance:");
	Serial.println(GetDistance());

}

int GetDistance() {

	digitalWrite(trigPin, LOW);
	delayMicroseconds(2);
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);

	duration = pulseIn(echoPin, HIGH);
	distance = (duration*.0343)/2;

	return distance;
}
