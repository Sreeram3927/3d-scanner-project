
void serialSetup() {
  Serial.begin(9600);
}

void sendInt(int data) {
  Serial.println(data);
}

int serialRead() {
  if (Serial.available() > 0) {
    int data = Serial.parseInt();
    if (Serial.read() == '\n') {
      return data;
    }
  }
}


