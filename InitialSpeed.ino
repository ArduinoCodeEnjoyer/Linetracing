void InitialSpeed(int MotorSpeed){
  Error = 0 ;
  PreError = 0;
  Integral = 0;
  Ki = 0;
  MaxSpeed = MotorSpeed;
  
  if(MotorSpeed < 40){
    Kp = 30;
    Kd = 10;
    LeftSpeed = MotorSpeed - 0;  
    RightSpeed = MotorSpeed - 0;
  }
  else if(MotorSpeed <= 41){
    Kp = 1000;
    Kd = 2000;
    LeftSpeed = MotorSpeed - 0;
    RightSpeed = MotorSpeed - 0;
  }
  else if(MotorSpeed <= 100){
    Kp = 2000;
    Kd = 4000;
    LeftSpeed = MotorSpeed - 0;
    RightSpeed = MotorSpeed - 2;
  }
}
