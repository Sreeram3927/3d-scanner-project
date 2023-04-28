const int r_in1 = 2;
const int r_in2 = 3;
const int r_in3 = 4;
const int r_in4 = 5;
const int rotaryDelay = 7;
const int rotaryLimit = 200;

void rotaryTableSetup() {

  pinMode(r_in1, OUTPUT);
  pinMode(r_in2, OUTPUT);
  pinMode(r_in3, OUTPUT);
  pinMode(r_in4, OUTPUT);

}

void rotarySpin(int newPos) {

  for(int i = 0; i < newPos; ) {

    stepperStep(r_in1, r_in2, r_in3, r_in4, 1, 0, 0, 0, rotaryDelay);
    i++;

    stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 0, 1, 0, rotaryDelay);
    i++;

    stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 1, 0, 0, rotaryDelay);
    i++;

    stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 0, 0, 1, rotaryDelay);
    i++;

  }

  // Serial.print("rotary table rotated: ");
  // Serial.println(i);
  
}

