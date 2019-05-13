#include <stdio.h>

int main(){
  int x;
  int sum=0;

  for(x=0; x<100; x=x+1) {
    if(x % 3) {
      sum = sum + x;
    }
  }
  printf("sum=%d\n", sum);
  return 0;
}