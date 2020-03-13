const byte ledPin= 7;
const byte photoPin= 2;
 volatile byte state= LOW;

void setup()
{
	pinMode(ledPin, OUTPUT);
	pinMode(photoPin, INPUT_PULLUP);
	attachInterrupt(digitalPinToInterrupt(photoPin), blink, FALLING);
}

void loop()
{
	digitalWrite(ledPin, state);
}
void blink()
{
	state = !state;
}
