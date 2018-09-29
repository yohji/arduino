#define PIN_PHOTO A0
#define PIN_AUDIO 5

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(PIN_PHOTO));
  int value = map(analogRead(PIN_PHOTO), 0, 1023, 3500, 50);
  tone(PIN_AUDIO, value);

  delay(10);
}
