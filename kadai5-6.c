#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 人間が手を選ぶ関数 */
int input(){
  int i, hand;
  do {
    printf("n = ");
    i = scanf("%d", &hand);
    if(i != 1) { /* 入力値が整数以外の場合 */
      scanf("%*s");
      printf("Invalid input\n");
    } else if (!(hand==0||hand==2||hand==5)) {
      printf("Input 0 or 2 or 5\n");
    }
  } while(!(hand==0||hand==2||hand==5));
  return hand;
}

/* コンピュータが手を選ぶ関数 */
int comp_hand(){
  int comp=1;
  srand(time(NULL));
  while(!(comp==0||comp==2||comp==5)){
    /* 0か2か5になるまで乱数発生を繰り返す */
    comp = (rand() % 6);
  }
  return comp;
}

int main(){
  int hand=1;
  int comp=1;
  int win;
  while(1){
    /* あいこ用のループ */
    hand = input();
    comp = comp_hand();
    printf("comp:%d vs You:%d => ", comp, hand);
    if(!(hand==comp)){
      break;
    }
    printf("Try again.\n");
  }

  /* 勝敗判定方法 */
  if((hand==5&&comp==2)||(hand==2&&comp==5)||(hand==0&&comp==5)){
    printf("You win.\n");
  } else {
    printf("You lose.\n");
  }
  return 0;
}