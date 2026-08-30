/ -------------------------------------------------
// Copyright (c) 2026 HiBit <https://www.hibit.dev>
// -------------------------------------------------

#define LDR_PIN A0

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int reading = analogRead(LDR_PIN);  // 0 to 1023 on a 10 bit board

  Serial.print("Light level: ");
  Serial.println(reading);

  delay(200);  // slow enough to read the output by eye
}
