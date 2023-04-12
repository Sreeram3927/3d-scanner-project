
void setup() {
  rotaryTableSetup();
}

void loop() {
  stepperRun_HalfStep(20);
  delay(2000);
  //stepperRun_FullStep();
}