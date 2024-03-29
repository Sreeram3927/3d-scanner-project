
int depthInfo;
int netDist;
double coordX, coordY, coordZ;
double angle = 14.4, curAngle;

void sendData(double x, double y, double z) {
  Serial.print(x);
  Serial.print(" ");
  Serial.print(y);
  Serial.print(" ");
  Serial.println(z);
}

void scanObject(int irPos) {

  for (int z = 1; z <= 25; z++) {

    rotarySpin(5);
    depthInfo = irRead();

    curAngle = z * 14.4;
    netDist = 18 - depthInfo;
    coordX = (netDist * sin(curAngle * (3.14 / 180)));
    coordY = (netDist * cos(curAngle * (3.14 / 180)));
    coordZ = irPos * 0.18;

    sendData(coordX, coordY, coordZ);
  }

}

void startScan() {

  for (int i = 1; i <= 70; i++) {
    scanObject(i);
    irStepUp(10);
  }

}