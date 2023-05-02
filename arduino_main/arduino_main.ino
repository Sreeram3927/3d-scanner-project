
int flag = 0;

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
  //rotarySpin(200);
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
  //delay(1000);
  //startup();

  // if (3 == serialRead()) {
  //   if (flag == 0) {
  //     //Serial.println("got it");
      // startScan();
  //     flag = 1;
  //   } else {}
  // } else {
  //   //Serial.println("nope");
  //   flag = 0;
  // }

  if (flag == 0) {
    startScan();
    flag = 1;
  }

}