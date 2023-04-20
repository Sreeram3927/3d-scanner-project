
void setup() {
  rotaryTableSetup();
  irStepperSetup();
  Serial.begin(9600);
}

void loop() {
  irStep(10);
  rotarySpin();
}