int in = 0;
void startup() {
  if (digitalRead(13) == LOW) {
    in = 0;
    sendInt(222);
  }

  if (in == 1) {
    sendInt(1);
  }
  
}