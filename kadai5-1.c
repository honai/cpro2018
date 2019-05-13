# include <stdio.h>

int combination(int n, int r) {
  if (r == 0||r == n) {
    return 1;
  } else if (r == 1) {
    return n;
  } else {
    return combination(n-1, r-1) + combination(n-1, r);
  }
}

int input() {
  int n=-1, i;

  do {
    i = scanf("%d", &n);
    if(i != 1) { /* 入力値が整数以外の場合 */
      scanf("%*s");
      printf("Invalid input\n");
    } else if(n<0) { /* 入力値が負の場合 */
      printf("Negative is not allowed\n");
    }
  } while(n<0);

  return n;
}

int main() {
  int n, r, c;
  printf("n = ");
  n = input();
  while(1) {
    printf("r = ");
    r = input();
    if (n >= r) {
      break;
    }
    printf("Error: n < r\n");
  }
  c = combination(n, r);
  printf("C(%d, %d) = %d", n, r, c);
  return 0;
}