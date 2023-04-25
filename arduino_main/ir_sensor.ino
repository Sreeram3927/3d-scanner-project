const int irPin = A0;
float distance;

void irSetup() {
  pinMode(irPin, OUTPUT);
}

float irRead() {
  int sensorValue = analogRead(irPin);
  distance = (6762.0 / (sensorValue - 9.0)) - 4.0;
  return distance;
}