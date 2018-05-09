#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int hist(int n) {
  srand(time(NULL));
  int range = 9;
  int i, x;
  float percentage;
  /* 各数の出現回数を格納 */
  float number_times[10] = {0};

  /* 乱数発生ループ */
  for(i=0; i<n; i++) {
    x = (int)(rand()*(range+1.0)/(1.0+RAND_MAX));
    number_times[x] += 1;
  }

  printf("n=%7d:  ", n);
  /* 頻度計算と表示ループ */
  for(i=0; i<10; i++) {
    percentage = (number_times[i] / n) * 100;
    printf("%4.1f  ", percentage);
  }
  printf("\n");

  return 0;
}

int main() {
  hist(100);
  hist(1000);
  hist(10000);
  hist(100000);
  hist(1000000);

  return 0;
}
