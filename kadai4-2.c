#include <stdio.h>

#define M 3
#define N 4

int main(){
  int a[M][N];
  int i, j;

  /* i行j列が10i+j */
  for(i=0; i<M; i++) {
    for(j=0; j<N; j++) {
      a[i][j] = 10*i + j;
    }
  }

  /* 結果を出力 */
  for(i=0; i<M; i++) {
    for(j=0; j<N; j++) {
      printf("%2d ", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}