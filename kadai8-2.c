#include <stdio.h>
#include <math.h>

typedef struct {
  double x;
  double y;
} Vector2d;

double getLength(Vector2d v) {
  return sqrt(v.x*v.x + v.y*v.y);
}

int main() {
  Vector2d vector;
  printf("input 2d vector x: ");
  scanf("%lf", &vector.x);
  printf("input 2d vector y: ");
  scanf("%lf", &vector.y);
  double length = getLength(vector);
  printf("Length: %f", length);

  return 0;
}