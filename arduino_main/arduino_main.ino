
void setup() {
  stepperSetup();
}

void loop() {
  stepperRun_HalfStep();
  stepperRun_FullStep();
  stepperStep(1, 0, 1, 0);
}