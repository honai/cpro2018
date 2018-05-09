#include <stdio.h>

/* 関数absを自分で作成 */
float myabs(float x) {
  if(x<0) {
    x = -x;
  }
  return x;
}

int main() {
  float x = -1.3;
  float y = 3.7;
  float abs_x = myabs(x);
  float abs_y = myabs(y);
  printf("|x|=%f\n", abs_x);
  printf("|y|=%f\n", abs_y);
  return 0;
}
