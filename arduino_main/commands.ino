// const int limitSwitch = 13;
// int switchStatus = 0;

// void limitSwitchSetup() {
//   pinMode(limitSwitch, INPUT_PULLUP);
// }

// void irStepperStartup() {
//   while (1) {
//     if (digitalRead(limitSwitch) == LOW) {
//       irStepUp(10);
//     } else {
//       ir_pos = 0;
//       break;
//     }
//   }
// }