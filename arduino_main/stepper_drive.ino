
const int d = 10;
float i;

// void stepperSetup() {
  
//   pinMode(a1, OUTPUT);
//   pinMode(a2, OUTPUT);
//   pinMode(b1, OUTPUT);
//   pinMode(b2, OUTPUT);
    
// }

// void stepperRun_HalfStep(int step) {

//   for(float i = 0.0; i <= step; ) {
//     stepperStep(1, 0, 0, 0);
//     i += 0.5;
//     stepperStep(1, 0, 1, 0);
//     i += 0.5;    
//     stepperStep(0, 0, 1, 0);
//     i += 0.5;
//     stepperStep(0, 1, 1, 0);
//     i += 0.5;
//     stepperStep(0, 1, 0, 0);
//     i += 0.5;
//     stepperStep(0, 1, 0, 1);
//     i += 0.5;
//     stepperStep(0, 0, 0, 1);
//     i += 0.5;
//     stepperStep(1, 0, 0, 1);
//     i += 0.5;
//   }
  
// }

void stepperRun_FullStep() {
    
  stepperStep(5, 6, 7, 8, 1, 0, 1, 0);

//  stepperStep(5, 6, 7, 8, 0, 0, 1, 0);

  stepperStep(5, 6, 7, 8, 0, 1, 1, 0);

//  stepperStep(5, 6, 7, 8, 0, 1, 0, 0);

  stepperStep(5, 6, 7, 8, 0, 1, 0, 1);

//  stepperStep(5, 6, 7, 8, 0, 0, 0, 1);

  stepperStep(5, 6, 7, 8, 1, 0, 0, 1);

//  stepperStep(5, 6, 7, 8, 1, 0, 0, 0);
  
}

void stepperStep(int in1, int in2, int in3, int in4, int a, int a_, int b, int b_) {
  
  digitalWrite(in1, a);
  digitalWrite(in2, a_);
  digitalWrite(in3, b);
  digitalWrite(in4, b_);

  delayMicroseconds(d); 
  Serial.println(i, r_pos);

}