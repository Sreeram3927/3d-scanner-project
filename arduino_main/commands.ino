
//int scanData[25];
int depthInfo;
int netDist;
double x, y, z;
double angle = 14.4, curAngle;

void scanObject(int irPos) {

  for (int z = 1; z <= 25; z++) {

    rotarySpin(5);
    depthInfo = irRead();

    curAngle = z * 14.4;
    netDist = 18 - depthInfo;
    x = (netDist * sin(curAngle * (3.14 / 180)));
    y = (netDist * cos(curAngle * (3.14 / 180)));
    z = irPos * 0.18;

    Serial.print(x);
    Serial.print(" ");
    Serial.print(y);
    Serial.print(" ");
    Serial.println(z);
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