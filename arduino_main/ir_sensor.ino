const int irPin = A0;
float distance;

int getDistance() {
  int sensorValue = analogRead(sensorPin);
  distance = (6762.0 / (sensorValue - 9.0)) - 4.0;
  return distance;
}