
void setup() {
  stepperSetup();
}

void loop() {
  //stepperRun_HalfStep();
  //delay(2000);
  stepperRun_FullStep();
}