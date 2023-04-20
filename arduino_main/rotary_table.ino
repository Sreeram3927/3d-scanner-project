const int r_in1 = 2;
const int r_in2 = 3;
const int r_in3 = 4;
const int r_in4 = 5;
int i;

void rotaryTableSetup() {

  pinMode(r_in1, OUTPUT);
  pinMode(r_in2, OUTPUT);
  pinMode(r_in3, OUTPUT);
  pinMode(r_in4, OUTPUT);

}

void rotarySpin() {

  for(i = 0; i <= 200; ) {

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

  Serial.print("rotary table rotated: ");
  Serial.println(i);
  
}