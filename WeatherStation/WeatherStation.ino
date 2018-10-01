#include <Support.h>

int value;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float voltage = Support::voltage(A0);
  float temperature = (25 * voltage) / 1.9375;

  value = analogRead(A1);
  float humidity = value;

  Support::echo(2, temperature, humidity);
  delay(1000);
}
