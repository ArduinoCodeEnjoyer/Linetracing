void TracSimple(int MotorSpeed) {
  ConvertADC();
  if (c == 0){ 
    fd(MotorSpeed);
  }
  else if (l == 0){ 
    tl(MotorSpeed);
  }
  else if (r == 0){ 
    tr(MotorSpeed);
  }
  else if (l1 == 0){ 
    fd2(-MotorSpeed/2, MotorSpeed);
  }
  else if (r1 == 0){ 
    fd2(MotorSpeed, -MotorSpeed/2);
  }
}

void TracSimpleJC(int MotorSpeed, int Time) {
  Forward(MotorSpeed, Time);
  ConvertADC();
  while (l1 == 1 || r1 == 1 || r == 1 || l == 1) {
    TracSimple(MotorSpeed);
  }
  Forward(MotorSpeed, Time);
}
