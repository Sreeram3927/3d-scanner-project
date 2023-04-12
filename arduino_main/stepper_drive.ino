
const int delay = 3000;

void stepperSetup() {
  
  pinMode(a1, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
    
}

void stepperRun_HalfStep() {

  stepperStep(1, 0, 0, 0);
    
  stepperStep(1, 0, 1, 0);

  stepperStep(0, 0, 1, 0);

  stepperStep(0, 1, 1, 0);

  stepperStep(0, 1, 0, 0);

  stepperStep(0, 1, 0, 1);

  stepperStep(0, 0, 0, 1);

  stepperStep(1, 0, 0, 1);
  
}

void stepperRun_FullStep() {
    
  stepperStep(1, 0, 1, 0);

//  stepperStep(0, 0, 1, 0);

  stepperStep(0, 1, 1, 0);

//  stepperStep(0, 1, 0, 0);

  stepperStep(0, 1, 0, 1);

//  stepperStep(0, 0, 0, 1);

  stepperStep(1, 0, 0, 1);

//  stepperStep(1, 0, 0, 0);
  
}

void stepperStep(int a, int a_, int b, int b_) {
  
  digitalWrite(a1, a);
  digitalWrite(a2, a_);
  digitalWrite(b1, b);
  digitalWrite(b2, b_);

  delayMicroseconds(delay); 
   
}