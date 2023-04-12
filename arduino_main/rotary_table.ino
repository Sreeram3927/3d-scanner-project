
const int r_in1 = 5;
const int r_in2 = 6;
const int r_in3 = 7;
const int r_in4 = 8;

void rotaryTableSetup() {

  pinMode(r_in1, OUTPUT);
  pinMode(r_in2, OUTPUT);
  pinMode(r_in3, OUTPUT);
  pinMode(r_in4, OUTPUT);

}

void rotary_HalfStep(int step) {

  for(float i = 0.0; i <= step; ) {
    stepperStep(r_in1, r_in2, r_in3, r_in4, 1, 0, 0, 0);
    i += 0.5;
    stepperStep(r_in1, r_in2, r_in3, r_in4, 1, 0, 1, 0);
    i += 0.5;    
    stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 0, 1, 0);
    i += 0.5;
    stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 1, 1, 0);
    i += 0.5;
    stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 1, 0, 0);
    i += 0.5;
    stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 1, 0, 1);
    i += 0.5;
    stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 0, 0, 1);
    i += 0.5;
    stepperStep(r_in1, r_in2, r_in3, r_in4, 1, 0, 0, 1);
    i += 0.5;
  }
  
}