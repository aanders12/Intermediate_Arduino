
#include <NewPing.h>

 
#define TRIGGER_PIN 9
#define ECHO_PIN 10
#define MAX_DISTANCE 200
int led = 11;
 
NewPing myHC-SR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 

void setup() {
 Serial.begin(9600);
 
}
 
void loop() {

sonar.ping_cm()
	 
     Serial.print(myHC-SR04.ping_cm());
  if(distance )
     delay(50)
  if()
}

