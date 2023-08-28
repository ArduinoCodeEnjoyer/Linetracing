void CalError() { 
  ConvertADC();
  if ((l1 == 1) && (l == 1) && (c == 1) && (r == 1) && (r1 == 0)) Error = 4;
  else if ((l1 == 1) && (l == 1) && (c == 1) && (r == 0) && (r1 == 0)) Error = 3;
  else if ((l1 == 1) && (l == 1) && (c == 1) && (r == 0) && (r1 == 1)) Error = 2;
  else if ((l1 == 1) && (l == 1) && (c == 0) && (r == 0) && (r1 == 1)) Error = 1;
  else if ((l1 == 1) && (l == 1) && (c == 0) && (r == 1) && (r1 == 1)) Error = 0;
  else if ((l1 == 1) && (l == 0) && (c == 0) && (r == 1) && (r1 == 1)) Error = -1;
  else if ((l1 == 1) && (l == 0) && (c == 1) && (r == 1) && (r1 == 1)) Error = -2;
  else if ((l1 == 0) && (l == 0) && (c == 1) && (r == 1) && (r1 == 1)) Error = -3;
  else if ((l1 == 0) && (l == 1) && (c == 1) && (r == 1) && (r1 == 1)) Error = -4;
  else if ((l1 == 0) && (l == 0) && (c == 0) && (r == 0) && (r1 == 0)) Error = 100;
}
