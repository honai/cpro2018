#include <stdio.h>

int main(){
  int x[5] = {4, 1, 8, 2, 9};
  int i;
  int range;

  /* 配列の内容を表示 */
  for(i=0;i<5;i++) {
    printf("x[%d]=%d\n", i, x[i]);
  }
  /* 最大値をrangeに代入 */
  range = x[0];
  for(i=1;i<5;i++) {
    if(range < x[i]) {
      range = x[i];
    }
  }

  /* 結果を表示 */
  printf("max=%d\n", range);

  return 0;
}
