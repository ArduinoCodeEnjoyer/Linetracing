#include <POP32.h>

int l1, l, c, r, r1;
int RefL1 = 1780;
int RefL = 1856;
int RefC = 1759;
int RefR = 1441;
int RefR1 = 2045;

int Kp, Ki, Kd, Error, PreError, Integral, MaxSpeed;

int Speed = 40;
int SlowSpeed;
int SuperSlowSpeed;
int LeftSpeed, RightSpeed;
int TurnSpeed;

void setup() {
  LeftSpeed = Speed * .75;
  RightSpeed = Speed * .75;
  TurnSpeed = Speed * 1.42;
  SlowSpeed = Speed * 0.625;
  SuperSlowSpeed = Speed * 0.20;
  ShowADC();
  beep();
  waitAnykey_bmp();
  beep();
}

void loop() {
  can1();
}
