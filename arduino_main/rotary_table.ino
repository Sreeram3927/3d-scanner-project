
const int r_in1 = 6;
const int r_in2 = 7;
const int r_in3 = 8;
const int r_in4 = 9;
int r_pos = 0;

void rotaryTableSetup() {

  pinMode(r_in1, OUTPUT);
  pinMode(r_in2, OUTPUT);
  pinMode(r_in3, OUTPUT);
  pinMode(r_in4, OUTPUT);

}

void rotary_HalfStep(int step) {

  for(float i = 0.0; i <= step; ) {
    if (r_pos == 0) {
      stepperStep(r_in1, r_in2, r_in3, r_in4, 1, 0, 0, 0);
      i += 0.5;
      r_pos = 1;
    } else if (r_pos == 1) {
      stepperStep(r_in1, r_in2, r_in3, r_in4, 1, 0, 1, 0);
      i += 0.5; 
      r_pos = 2;   
    } else if (r_pos == 2) {
      stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 0, 1, 0);
      i += 0.5;
      r_pos = 3;
    } else if (r_pos == 3) {
      stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 1, 1, 0);
      i += 0.5;
      r_pos = 4;
    } else if (r_pos == 4) {
      stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 1, 0, 0);
      i += 0.5;
      r_pos = 5;
    } else if (r_pos == 5) {
      stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 1, 0, 1);
      i += 0.5;
      r_pos = 6;
    } else if (r_pos == 6) {
      stepperStep(r_in1, r_in2, r_in3, r_in4, 0, 0, 0, 1);
      i += 0.5;
      r_pos = 7;
    } else if (r_pos == 7) {
      stepperStep(r_in1, r_in2, r_in3, r_in4, 1, 0, 0, 1);
      i += 0.5;
      r_pos = 0;
    }
  }
  
}