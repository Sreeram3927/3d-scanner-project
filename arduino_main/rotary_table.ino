
const int r_in1 = 6;
const int r_in2 = 7;
const int r_in3 = 8;
const int r_in4 = 9;

void rotaryTableSetup() {

  pinMode(r_in1, OUTPUT);
  pinMode(r_in2, OUTPUT);
  pinMode(r_in3, OUTPUT);
  pinMode(r_in4, OUTPUT);

}

void rotarySpin() {

  for(int i = 0; i <= 50; ) {

    stepperStep(r_in1, r_in2, r_in3, r_in4, 1, 0, 0, 0);
    i++;

    //stepperStep(r_in1, r_in2, r_in3, r_in4, 1, 0, 1, 0);

    stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 0, 1, 0);
    i++;

    //stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 1, 1, 0);

    stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 1, 0, 0);
    i++;

    //stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 1, 0, 1);

    stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 0, 0, 1);
    i++;

    //stepperStep(r_in1, r_in2, r_in3, r_in4, 1, 0, 0, 1);

  }
  
}