const int ir_in1 = 6;
const int ir_in2 = 7;
const int ir_in3 = 8;
const int ir_in4 = 9;
int ir_pos = 0;

void irStepperSetup() {

  pinMode(ir_in1, OUTPUT);
  pinMode(ir_in2, OUTPUT);
  pinMode(ir_in3, OUTPUT);
  pinMode(ir_in4, OUTPUT);

}

void irStep(int new_pos) {
  for (int i = ir_pos; i <= new_pos; i++) {

    stepperStep(ir_in1, ir_in2, ir_in3, ir_in4, 1, 0, 0, 0);

    stepperStep(ir_in1, ir_in2, ir_in3, ir_in4, 0, 0, 1, 0);

    stepperStep(ir_in1, ir_in2, ir_in3, ir_in4, 0, 1, 0, 0);

    stepperStep(ir_in1, ir_in2, ir_in3, ir_in4, 0, 0, 0, 1);
    
  }
  Serial.println("ir stepped");
}