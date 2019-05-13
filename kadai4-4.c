#include <stdio.h>

#define M 3
#define N 4

int a[M][N];

int a_set(int x[M][N]) {
  int i, j;

  /* i行j列が10i+j */
  for(i=0; i<M; i++) {
    for(j=0; j<N; j++) {
      x[i][j] = 10*i + j;
    }
  }
  return 0;
}

int a_display(int x[M][N]){
  int i, j;
  /* 結果を出力 */
  for(i=0; i<M; i++) {
    for(j=0; j<N; j++) {
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }
  return 0;
}

int main() {
  a_set(a);
  a_display(a);

  return 0;
}