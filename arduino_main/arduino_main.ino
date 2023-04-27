
void setup() {
  pinMode(13, INPUT);
  rotaryTableSetup();
  irStepperSetup();
  irSetup();
  serialSetup();
}

void loop() {
  //rotarySpin();
  //irStepDown(50);
  //delay(500);
  //rotarySpin();
  //stepperRun_FullStep(6, 7, 8, 9);
  //stepperRun_FullStep(2, 3, 4, 5);
  //sendInt(serialRead());
  //delay(1000);
  //irStepUp(50);
  //irStepperStartup();
  startup();
  delay(1000);
  //startup();
}