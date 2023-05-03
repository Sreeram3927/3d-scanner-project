
//int scanData[25];
int depthInfo;
int netDist;
double coordX, coordY, coordZ;
double angle = 14.4, curAngle;

void scanObject(int irPos) {

  for (int z = 1; z <= 25; z++) {

    rotarySpin(5);
    depthInfo = irRead();

    curAngle = z * 14.4;
    netDist = 18 - depthInfo;
    coordX = (netDist * sin(curAngle * (3.14 / 180)));
    coordY = (netDist * cos(curAngle * (3.14 / 180)));
    coordZ = irPos * 0.18;

    Serial.print(coordX);
    Serial.print(" ");
    Serial.print(coordY);
    Serial.print(" ");
    Serial.println(coordZ);
  }

  // for (int i = 0; i < 25; i++) {
  //   netDist = 18 - scanData[]
  //   // Serial.print(scanData[z]);
  //   // Serial.print(" ");
  // }
  // Serial.println("");

}

void startScan() {

  for (int i = 1; i <= 70; i++) {
    scanObject(i);
    irStepUp(10);
  }

}