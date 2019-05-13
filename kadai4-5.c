#include <stdio.h>

int input() {
  int n=-1, i;

  do {
    printf("n = ");
    i = scanf("%d", &n);
    if(i != 1) { /* 入力値が整数以外の場合 */
      scanf("%*s");
      printf("Invalid input\n");
    } else if(n<0) { /* 入力値が負の場合 */
      printf("n < 0\n");
    }
  } while(n<0);

  return n;
}

int fact(int n) {
  int fact=1, i;
  if(n) {
    for(i=1;i<=n;i++){
      fact *= i;
    }
  }
  return fact;
}

int perm(int n, int r) {
  int perm;
  perm = fact(n) / fact(n-r);
  return perm;
}

int main() {
  int n, i, p;
  n = input();
  for(i=0; i<=n; i++){
    p = perm(n, i);
    printf("perm(%d,%d) = %d\n", n, i, p);
  }

  return 0;
}