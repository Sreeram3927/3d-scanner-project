
void setup() {
  rotaryTableSetup();
}

void loop() {
  rotary_HalfStep(20.0);
  delay(2000);
  //stepperRun_FullStep();
}