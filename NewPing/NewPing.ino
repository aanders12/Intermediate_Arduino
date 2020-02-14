#include <NewPing.h>
 
#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 200
 
NewPing myHCSR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 
void setup() {
	pinMode(TRIGGER_PIN,OUTPUT);
	pinMode(ECHO_PIN,INPUT);
 Serial.begin(9600);
 	pinMode(6, OUTPUT);
 	pinMode(5,OUTPUT);

}
 
void loop() {
	 Serial.print("distance");
     Serial.println(myHCSR04.ping_cm());

    	 if(myHCSR04.ping_cm()<=10){
    	 	digitalWrite(6,HIGH);
    	 	digitalWrite(5,LOW);
    	 }
    	 delay(50)
		if(myHCSR04.ping_cm() > 10) {
 			digitalWrite(5,HIGH);
 			digitalWrite(6,LOW);




 				
 		}
 		delay(50)
}
