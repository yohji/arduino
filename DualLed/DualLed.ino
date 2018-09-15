int pinLedA = 5;
int pinLedB = 6;
int pinLedI = 13;

int brightness = 0;
int change = 5;

void setup()
{
  pinMode(pinLedA, OUTPUT);
  pinMode(pinLedB, OUTPUT);
}

void loop()
{  
  analogWrite(pinLedA, 255);
  delay(1500);
  analogWrite(pinLedB, 0);
  
  digitalWrite(pinLedI, HIGH);
  delay(500);
  digitalWrite(pinLedI, LOW);

  analogWrite(pinLedA, 255);
  delay(1500);
  analogWrite(pinLedB, 0);
  delay(10);
}
