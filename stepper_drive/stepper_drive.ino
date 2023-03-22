int a1 = 5;
int a2 = 6;
int b1 = 7;
int b2 = 8;

void setup() {
  pinMode(a1, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
}

void loop() {

  digitalWrite(a1, HIGH);
  digitalWrite(a2, LOW);
  digitalWrite(b1, HIGH);
  digitalWrite(b2, LOW);

  delay(100);

  digitalWrite(a1, LOW);
  digitalWrite(a2, HIGH);
  digitalWrite(b1, HIGH);
  digitalWrite(b2, LOW);

  delay(100);

  digitalWrite(a1, LOW);
  digitalWrite(a2, HIGH);
  digitalWrite(b1, LOW);
  digitalWrite(b2, HIGH);

  delay(100);

  digitalWrite(a1, HIGH);
  digitalWrite(a2, LOW);
  digitalWrite(b1, LOW);
  digitalWrite(b2, HIGH);

  delay(100);

}
