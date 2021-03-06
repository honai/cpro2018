#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 人間が手を選ぶ関数 */
int input(){
  int hand;
  while(1){
    printf("Your input (0,2,5): ");
    scanf("%d", &hand);
    if(hand==0||hand==2||hand==5){
      break;
    }
    printf("\nInvalid input => Input again.\n");
  }
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

  /* 謎の勝敗判定方法 */
  if(comp>hand){
    if(comp-hand==5){
      win = 0;
    } else {
      win = 1;
    }
  } else {
    if(hand-comp==5){
      win = 1;
    } else {
      win = 0;
    }
  }

  if(win){
    printf("You win.\n");
  } else {
    printf("You lose.\n");
  }
  return 0;
}