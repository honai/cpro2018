#include <stdio.h>

int main(){
  int i;
  float a=0.0f, b=0.0f;
  double c=0, d=0;
  a = 1e-8f;
  printf("%21.20f", a);
  for(i=0;i<100000000;i++){
    a += 1e-8f;
    c += 1e-8;
  }
  b = 1e-8f * 1e+8f;
  d = 1e-8 * 1e+8;
  printf("a = %21.20f\nb = %21.20f\nc = %21.20f\nd = %21.20f", a, b, c, d);

  return 0;
}