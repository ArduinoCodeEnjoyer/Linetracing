void TracPID()
{
  int Output, LeftOutput, RightOutput, KpTemp;

  //if (abs(Error) <= 2) KpTemp = 1; else KpTemp = Kp;

  Output = (Kp * Error) + (Ki * Integral) + Kd * (Error - PreError);

  LeftOutput = LeftSpeed + Output;
  RightOutput = RightSpeed - Output;

  if (LeftOutput > MaxSpeed) LeftOutput = MaxSpeed;
  if (RightOutput > MaxSpeed) RightOutput = MaxSpeed;
  if (LeftOutput < 0) LeftOutput = 0;
  if (RightOutput < 0) RightOutput = 0;

  fd2(LeftOutput, RightOutput);
  PreError = Error;
  Integral += Error;
}

void TracPIDJC(int MotorSpeed, int Time) {
  InitialSpeed(MotorSpeed);
  CalError();
  while (Error < 100) {
    TracPID();
    CalError();
  }
  Forward(MotorSpeed, Time);
}
