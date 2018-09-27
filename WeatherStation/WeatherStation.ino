int value;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  value = analogRead(A0);
  float voltage = (value * 5) / 1023.0f;
  float temperature = (25 * voltage) / 1.9375;

  value = analogRead(A1);
  float humidity = value;

  Serial.println((String) temperature + "\t" + humidity);
  delay(1000);
}
