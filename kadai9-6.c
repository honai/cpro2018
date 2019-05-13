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

void load(char * name, const int m, const int n, float * A, float * b) {
  FILE *fp = NULL;
  fp = fopen(name, "r");
  if(!fp) {
    printf("cannot open test.txt");
  } else {
    int i,j;
    float x, y;
    for(i=0;i<m;i++) {
      for(j=0;j<n;j++){
        fscanf(fp, "  %f", &x);
        A[n*i + j] = x;
      }
      fscanf(fp, "\n");
    }
    for(j=0;j<n;j++){
      fscanf(fp, "  %f", &y);
      b[j] = y;
    }
  }
  fclose(fp);
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
  load("test.dat", m, n, A, b);
  print(m, n, A);
  print(1, n, b);
  return 0;
}