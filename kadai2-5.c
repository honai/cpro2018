#include <stdio.h>

int main(){
  int x;
  int y;
  for(x=0; x<10; x=x+1) {
    for(y=x; y<10; y=y+1) {
      printf("%d ", y);
    }
    printf("\n");
  }
  return 0;
}