#define PIN_LED_A 5
#define PIN_LED_B 6

#define STEP 1
#define SYNC 10

void setup()
{
  pinMode(PIN_LED_A, OUTPUT);
  pinMode(PIN_LED_B, OUTPUT);
}

void loop()
{  
  for (int state = 0; state <= 255; state += STEP) {
    analogWrite(PIN_LED_A, state);
    delay(SYNC);
  }
  for (int state = 250; state >= 0; state -= STEP) {
    analogWrite(PIN_LED_A, state);
    delay(SYNC);
  }

  for (int state = 0; state <= 255; state += STEP) {
    analogWrite(PIN_LED_B, state);
    delay(SYNC);
  }
  for (int state = 250; state >= 0; state -= STEP) {
    analogWrite(PIN_LED_B, state);
    delay(SYNC);
  }
}
