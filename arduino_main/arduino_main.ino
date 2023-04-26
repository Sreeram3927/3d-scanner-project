
void setup() {
  rotaryTableSetup();
  irStepperSetup();
  irSetup();
  serialSetup();
}

void loop() {
  //rotarySpin();
  //irStep(50);
  //delay(500);
  //rotarySpin();
  //stepperRun_FullStep(6, 7, 8, 9);
  //stepperRun_FullStep(2, 3, 4, 5);
  sendInt(irRead());
  delay(1000);
}