int pinLed = 9;
int pinPot = A0;

void setup()
{
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
}

void loop()
{
  int value = analogRead(pinPot);
  int brightness = map(value, 0, 1023, 0, 255);
  Serial.println((String) value + ":" + brightness);

  analogWrite(pinLed, brightness);
  delay(10);
}
