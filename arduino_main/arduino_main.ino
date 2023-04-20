
void setup() {
  rotaryTableSetup();
  irStepperSetup();
  irSetup();
  Serial.begin(9600);
}

void loop() {
  //irStep(200);
  rotarySpin();
  //stepperRun_FullStep(6, 7, 8, 9);
  //stepperRun_FullStep(2, 3, 4, 5);
  //Serial.println(irRead());
  delay(1000);
}