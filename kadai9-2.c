#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print(int m, int n, const float * x) {
  int i,j;
  float y;
  for(i=0;i<m;i++) {
    for(j=0;j<n;j++){
      y = x[m*i + j];
      printf("  %f", y);
    }
    printf("\n");
  }
}

void rand_init(int n, float * o) {
  int i;
  float r1, r2;
  srand(time(NULL));
  for(i=0;i<n;i++){
    r1 = rand();
    r2 = r1 / RAND_MAX - 0.5;
    o[i] = r2;
  }
}

void swap(float *a, float *b) {
  float temp = *a;
  *a = *b;
  *b = temp;
}

void loop(float * data, int n) {
  for (int i=0;i<n-1;i++) {
    if (data[i] > data[i+1]) {
      swap(&data[i], &data[i+1]);
    }
  }
}
void sort(float * data, int n) {
  for (int i=0;i<n-1;i++) {
    loop(data, n);
  }
}

void shuffle(int n, float * index) {
  srand(time(NULL));
  for (int i=0;i<n;i++) {
    int r1 = rand() % n;
    int r2 = rand() % n;
    if(r1 != r2) swap(&index[r1], &index[r2]);
  }
}

int main(int argc, char *argv[]) {
  int n = 0;
  if (argc > 1) n = atoi(argv[1]);
  float *y = malloc(sizeof(float) * n);
  rand_init(n, y);
  sort(y, n);
  print(1, n, y);
  float * index = malloc(sizeof(int)*n);
  // floatにしたのはシャッフルするときswap関数を使うため
  for(int i=0; i<n; i++) index[i] = i;
  shuffle(n, index);
  print(1, n, index);
  for(int i=0; i<n; i++) {
    int position = index[i];
    printf("%f  ", y[position]);
  }
  return 0;
}