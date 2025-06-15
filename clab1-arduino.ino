const int sensorPin = A0;    // Analog pin connected to the nail sensor
const int ledPin = 13;       // Digital pin connected to the LED
const int threshold = 300;   // Adjust this based on your testing

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(sensorPin);
  Serial.print("Moisture level: ");
  Serial.println(value);

  if (value < threshold) {
    // Dry condition — turn LED ON
    digitalWrite(ledPin, HIGH);
  } else {
    // Wet enough — turn LED OFF
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
}
