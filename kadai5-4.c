#include <stdio.h>

int input() {
  int n=-1, i;

  do {
    printf("n = ");
    i = scanf("%d", &n);
    if(i != 1) { /* 入力値が整数以外の場合 */
      scanf("%*s");
      printf("Invalid input\n");
    }
  } while(i != 1);

  return n;
}

void bindisplay(int n) {
  int i, bit[32];
  printf("%d(10) = ", n);
  for (i=0;i<32;i++) {
    bit[i] = n & 1;
    n = n>>1;
  }
  for (i=31;i>=0;i--) {
    printf("%d", bit[i]);
  }
  printf("(2)");
}

int main(){
  int n;
  n = input();
  bindisplay(n);
  return 0;
}