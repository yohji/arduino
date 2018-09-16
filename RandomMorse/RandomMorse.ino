#define PIN_BUZZER 3

void setup()
{
  pinMode(PIN_BUZZER, OUTPUT);
  randomSeed(analogRead(0));
}

void loop()
{
  analogWrite(PIN_BUZZER, 128);
  delay(100 + (300 * random(0, 2)));

  analogWrite(PIN_BUZZER, 0);
  delay(100);
}
