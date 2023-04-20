const int ir_in1 = 2;
const int ir_in2 = 3;
const int ir_in3 = 4;
const int ir_in4 = 5;
int ir_pos = 0;

void irStepperSetup() {

  pinMode(ir_in1, OUTPUT);
  pinMode(ir_in2, OUTPUT);
  pinMode(ir_in3, OUTPUT);
  pinMode(ir_in4, OUTPUT);

}

void irStep(int new_pos) {
  for (int i = ir_pos; i <= new_pos;) {
    
  }
}