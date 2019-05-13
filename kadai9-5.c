#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void print(int m, int n, const float * x) {
  int i,j;
  float y;
  for(i=0;i<m;i++) {
    for(j=0;j<n;j++){
      y = x[n*i + j];
      printf("  %f", y);
    }
    printf("\n");
  }
}

void init(int n, float x, float * o) {
  int i;
  for(i=0;i<n;i++){
    o[i] = x;
  }
}

void save(char * name, const int m, const int n, const float * A, const float * b) {
  FILE *fp;
  fp = fopen(name, "w");
  int i,j;
  float y;
  for(i=0;i<m;i++) {
    for(j=0;j<n;j++){
      y = A[n*i + j];
      fprintf(fp, "  %f", y);
    }
    fprintf(fp, "\n");
  }
  for(j=0;j<n;j++){
    y = b[j];
    fprintf(fp, "  %f", y);
  }
}

int main(int argc, char *argv[]) {
  int m = 0;
  int n = 0;
  if(argc > 1) {
    m = atoi(argv[1]);
    n = atoi(argv[2]);
  }
  int all = m * n;
  float *A = malloc(sizeof(float) * all);
  float *b = malloc(sizeof(float) * n);
  init(all, 1, A);
  init(n, 2, b);
  print(m, n, A);
  print(1, n, b);
  save("test.dat", m, n, A, b);
  return 0;
}