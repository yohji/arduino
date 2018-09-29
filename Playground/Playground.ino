void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}

void loop()
{
  delay(50);
}

float voltage(int analogPin)
{
  return (analogRead(analogPin) / 1023.0) * 5.0;
}
