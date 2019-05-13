#include <math.h>
#include <stdio.h>

int main() {
  double a;
  double b;
  double c;
  double xa;
  double xb;
  printf("a = ");
  scanf("%lf", &a);
  printf("b = ");
  scanf("%lf", &b);
  printf("c = ");
  scanf("%lf", &c);
  xa =(-b + sqrt((b*b) - (4*a*c)))/(2*a);
  xb =(-b - sqrt((b*b) - (4*a*c)))/(2*a);
  printf("%.10f\n", xa);
  printf("%.10f\n", xb);
  return 0;
}