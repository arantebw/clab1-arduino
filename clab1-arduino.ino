void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0);
  Serial.println(value); // should show 0–1023 depending on light or knob
  delay(500);
}
