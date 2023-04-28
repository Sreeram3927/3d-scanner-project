
int scanData[40];
int fullScan[70][40];

void scanObject(int irPos) {

  for (int z = 0; z < 40; z++) {
    rotarySpin(5);
    fullScan[irPos][z] = irRead();
  }

  // for (int z = 0; z <= 40; z++) {
  //   Serial.print(scanData[z]);
  //   Serial.print(" ");
  // }
  // Serial.println("");

}

void startScan() {

  for (int i = 0; i < 70; i++) {
    scanObject(i);
    irStepUp(10);
  }

  for (int j = 0; j < 70; j++) {
    for (int k = 0; k < 40; k++) {
      Serial.print(fullScan[j][k]);
      Serial.print(" ");
    }
    Serial.println("");
  }

}