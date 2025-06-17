const int sensorPin = A0;    // Analog pin connected to the nail sensor
const int ledPin = 13;       // Digital pin connected to the LED
const int threshold = 400;   // Dry (< 400) and wet (>= 400) threshold

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(sensorPin);
  Serial.print("Moisture level: ");
  Serial.println(value);

  if (value < threshold) {
    digitalWrite(ledPin, HIGH); // Dry condition — turn LED ON
    Serial.println("Feed me!");
  } else {
    digitalWrite(ledPin, LOW); // Wet enough — turn LED OFF
    Serial.println("Thank you, Billy!");
  }

  delay(1000);
}
