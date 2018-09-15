int buzzer = 3;

void setup()
{
  pinMode(buzzer, OUTPUT);
  randomSeed(analogRead(0));
}

void loop()
{
  analogWrite(buzzer, 128);
  delay(100 + (300 * random(0, 2)));

  analogWrite(buzzer, 0);
  delay(100);
}
