
void setup() {
  rotaryTableSetup();
  irStepperSetup();
  irSetup();
  Serial.begin(9600);
}

void loop() {
  irStep(200);
  delay(500);
  rotarySpin();
  //stepperRun_FullStep(7, 6, 8, 9);
  //stepperRun_FullStep(2, 3, 4, 5);
  //Serial.println(irRead());
  delay(1000);
}