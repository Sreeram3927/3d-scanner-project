
void setup() {
  Serial.begin(9600);
  rotaryTableSetup();
}

void loop() {
  rotary_HalfStep(20);
  ///delay(2000);
  //stepperRun_FullStep();
}