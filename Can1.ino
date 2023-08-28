void can1() {
//  TracSimpleJC(Speed, Speed + 15);
//  TurnLeft(); //Left1
//  TracSimpleJC(Speed, Speed + 105);
//  TurnLeft(); //Left2
//  TracSimpleJC(Speed, Speed + 10);
//  TurnLeft(); //Left3
//  TracSimpleJC(Speed, Speed + 5);
//  TurnLeft(); //Left4
//  TracSimpleJC(Speed, Speed + 10);
//  TurnRight(); //Right1
//  TracSimpleJC(Speed, Speed + 55);
//  TracSimpleJC(Speed, Speed + 10);
//  TurnRight(); //Right2
//  TracSimpleJC(Speed, Speed + 10);
//  TurnRight();
//  TracSimpleJC(Speed, SlowSpeed + 20);
//  Speed = 42;
//  TracSimpleJC(Speed - 3, 100);
//  TracSimpleJC(Speed, 100);
//  TracSimpleJC(Speed, 100);
//  TurnLeft();
//  TracSimpleJC(Speed, 50);
//  TracSimpleJC(SlowSpeed, 50);
//  beep();
//  while(1){
//    ao();
//  }
  Speed = 39;
  TracPIDJC(Speed, Speed * 1.3);
  TurnLeft(); //Left1
  TracPIDJC(Speed, Speed * 2.5);
  TurnLeft(); //Left2
  TracPIDJC(Speed, Speed * 2.75);
  TurnLeft(); //Left3
  Speed = 30;
  TracPIDJC(Speed, Speed);
  TurnLeft(); //Left4
  TracPIDJC(Speed, Speed + 25);
  TurnLeft(); //Left5
  TracPIDJC(Speed, Speed * 1.25);
  TurnRight();
  TracPIDJC(Speed, Speed * 1.25);
  TurnRight(); //Right2
  TracPIDJC(Speed, SlowSpeed * 1.7);
  Speed = 41;
  TracPIDJC(Speed - 3, 100);
  TracPIDJC(Speed, 100);
  TracPIDJC(Speed, 100);
  TurnLeft();
  TracPIDJC(Speed, 50);
  TracPIDJC(SlowSpeed, 50);
  beep();
  while(1){
    ao();
  }
}
