/ -------------------------------------------------
// Copyright (c) 2026 HiBit <https://www.hibit.dev>
// -------------------------------------------------

#define ANALOG_PIN A0
#define DIGITAL_PIN 2

void setup()
{
  Serial.begin(9600);

  pinMode(DIGITAL_PIN, INPUT);
}

void loop()
{
  int level = analogRead(ANALOG_PIN);   // continuous light level
  int state = digitalRead(DIGITAL_PIN); // comparator output

  Serial.print("AO: ");
  Serial.print(level);
  Serial.print("  DO: ");
  Serial.println(state);

  delay(200);
}
