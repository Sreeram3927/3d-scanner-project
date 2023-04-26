
void serialSetup() {
  Serial.begin(9600);
}

void sendInt(int data) {
  Serial.println(data);
}

int serialRead() {
  return Serial.read();
}

