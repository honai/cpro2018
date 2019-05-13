#include <math.h>
#include <stdio.h>

int main() {
  double a;
  double b;
  double c;
  double d;
  double rl;
  double im;
  printf("a = ");
  scanf("%lf", &a);
  printf("b = ");
  scanf("%lf", &b);
  printf("c = ");
  scanf("%lf", &c);
  d = (b*b) - (4*a*c);
  rl = -b/(2*a);
  im = sqrt(fabs(d))/(2*a);
  if(d < 0) {
    printf("Imaginary solution.\n");
    printf("%.10f +/- ", rl);
    printf("%.10fi", im);
  } else {
    printf("Real solution.\n");
    printf("%.10f\n", rl + im);
    printf("%.10f", rl - im);
  }
  return 0;
}