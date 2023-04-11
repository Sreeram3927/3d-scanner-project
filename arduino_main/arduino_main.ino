
void setup() {
  stepperSetup();
}

void loop() {
  stepperRun();
  stepperStep(1, 0, 1, 0);
}