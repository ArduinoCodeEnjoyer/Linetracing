void MotorStop(){
  ao();
  delay(10);
}

void Forward(int MotorSpeed, int Time){
  InitialSpeed(MotorSpeed);
  fd2(LeftSpeed, RightSpeed);
  delay(Time);
}

void Backward(int MotorSpeed, int Time){
  InitialSpeed(MotorSpeed);
  bk2(LeftSpeed, RightSpeed);
  delay(Time);
}

void TurnLeft() {
  MotorStop();
  sl(TurnSpeed);
  delay(150);
  ConvertADC();
  while (l == 1) {
      ConvertADC();
  }
  MotorStop();
}

void TurnRight() {
  MotorStop();
  sr(TurnSpeed);
  delay(150);
  ConvertADC();
  while (r == 1) {
     ConvertADC();
  }
  MotorStop();
}

void UTurn() {
  MotorStop();
  sr(TurnSpeed);
  delay(200);
  ConvertADC();
  while (r1 == 1) {
      ConvertADC();
  }
  MotorStop();
}
