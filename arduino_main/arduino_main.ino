
void setup() {
  rotaryTableSetup();
  irStepperSetup();
  irSetup();
  limitSwitchSetup();
  serialSetup();

  irStepperStartup();
  delay(1000);
}

void loop() {
  rotarySpin(200);
  //irStepDown(50);
  //delay(500);
  //rotarySpin(5);
  //stepperRun_FullStep(6, 7, 8, 9);
  //stepperRun_FullStep(2, 3, 4, 5);
  //sendInt(serialRead());
  //delay(1000);
  //irStepUp(10);
  //irStepperStartup();
  //startScan();
  delay(1000);
  //startup();
}