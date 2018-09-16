#define PIN_LED 9
#define PIN_POT A0

void setup()
{
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}

void loop()
{
  int value = analogRead(PIN_POT);
  int brightness = map(value, 0, 1023, 0, 255);
  Serial.println((String) value + ":" + brightness);

  analogWrite(PIN_LED, brightness);
  delay(10);
}
