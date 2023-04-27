const int ir_in1 = 6;
const int ir_in2 = 7;
const int ir_in3 = 8;
const int ir_in4 = 9;
const int irDelay = 2;
const int limitSwitch = 13;

static int ir_pos;

void irStepperSetup() {

  pinMode(ir_in1, OUTPUT);
  pinMode(ir_in2, OUTPUT);
  pinMode(ir_in3, OUTPUT);
  pinMode(ir_in4, OUTPUT);

}

void irStepDown(int new_pos) {
  for (int i = ir_pos; i <= new_pos; i++) {

    stepperStep(ir_in1, ir_in2, ir_in3, ir_in4, 1, 0, 0, 0, irDelay);

    stepperStep(ir_in1, ir_in2, ir_in3, ir_in4, 0, 0, 1, 0, irDelay);

    stepperStep(ir_in1, ir_in2, ir_in3, ir_in4, 0, 1, 0, 0, irDelay);

    stepperStep(ir_in1, ir_in2, ir_in3, ir_in4, 0, 0, 0, 1, irDelay);
    
  }
}

void irStepUp(int new_pos) {
  for (int i = ir_pos; i >= new_pos; i--) {

    stepperStep(ir_in2, ir_in1, ir_in3, ir_in4, 1, 0, 0, 0, irDelay);

    stepperStep(ir_in2, ir_in1, ir_in3, ir_in4, 0, 0, 1, 0, irDelay);

    stepperStep(ir_in2, ir_in1, ir_in3, ir_in4, 0, 1, 0, 0, irDelay);

    stepperStep(ir_in2, ir_in1, ir_in3, ir_in4, 0, 0, 0, 1, irDelay);
    
  }
}


void limitSwitchSetup() {
  pinMode(limitSwitch, INPUT_PULLUP);
}

void irStepperStartup() {
  while (1) {
    if (digitalRead(limitSwitch) == LOW) {
      irStepDown(10);
    } else {
      ir_pos = 0;
      break;
    }
  }
}