int pinLedA = 5;
int pinLedB = 6;

int var = 1;
int sleep = 10;

void setup()
{
  pinMode(pinLedA, OUTPUT);
  pinMode(pinLedB, OUTPUT);
}

void loop()
{  
  for (int state = 0; state <= 255; state += var) {
    analogWrite(pinLedA, state);
    delay(sleep);
  }
  for (int state = 250; state >= 0; state -= var) {
    analogWrite(pinLedA, state);
    delay(sleep);
  }

  for (int state = 0; state <= 255; state += var) {
    analogWrite(pinLedB, state);
    delay(sleep);
  }
  for (int state = 250; state >= 0; state -= var) {
    analogWrite(pinLedB, state);
    delay(sleep);
  }
}
