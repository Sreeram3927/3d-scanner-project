
const int stepDelay = 10;

void stepperRun_FullStep(int i1, int i2, int i3, int i4) {
    
  stepperStep(i1, i2, i3, i4, 1, 0, 1, 0);

//  stepperStep(i1, i2, i3, i4, 0, 0, 1, 0);

  stepperStep(i1, i2, i3, i4, 0, 1, 1, 0);

//  stepperStep(i1, i2, i3, i4, 0, 1, 0, 0);

  stepperStep(i1, i2, i3, i4, 0, 1, 0, 1);

//  stepperStep(i1, i2, i3, i4, 0, 0, 0, 1);

  stepperStep(i1, i2, i3, i4, 1, 0, 0, 1);

//  stepperStep(i1, i2, i3, i4, 1, 0, 0, 0);
  
}

void stepperStep(int in1, int in2, int in3, int in4, int a, int a_, int b, int b_) {
  
  digitalWrite(in1, a);
  digitalWrite(in2, a_);
  digitalWrite(in3, b);
  digitalWrite(in4, b_);

  delay(stepDelay); 
//  Serial.println(i, r_pos);

}