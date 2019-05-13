#include <stdio.h>
#include <math.h>

typedef struct {
  double x;
  double y;
} Vector2d;

double getLength(Vector2d v) {
  return sqrt(v.x*v.x + v.y*v.y);
}

void scaleVector(Vector2d *v, double s) {
  v->x *= s;
  v->y *= s;
}

int main() {
  Vector2d vector;
  double s;
  printf("input 2d vector x: ");
  scanf("%lf", &vector.x);
  printf("input 2d vector y: ");
  scanf("%lf", &vector.y);
  printf("input scale value: ");
  scanf("%lf", &s);
  scaleVector(&vector, s);
  printf("Result: %f %f\n", vector.x, vector.y);
  double length = getLength(vector);
  printf("Length: %f", length);

  return 0;
}