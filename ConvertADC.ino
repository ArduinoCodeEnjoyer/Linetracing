void ConvertADC(){
  l1 = analog(4);
  l = analog(3);
  c = analog(2);
  r = analog(1);
  r1 = analog(0);
  if (l1 < RefL1) l1 = 0; else l1 = 1;
  if (l < RefL) l = 0; else l = 1;
  if (c < RefC) c = 0; else c = 1;
  if (r < RefR) r = 0; else r = 1;
  if (r1 < RefR1) r1 = 0; else r1 = 1;
}
