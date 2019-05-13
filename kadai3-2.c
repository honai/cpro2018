#include <stdio.h>

int main(){
  int n;
  int x=1;
  int y=1;
  scanf("%d", &n);
  while(x<=n) {
    y = x*y;
    x += 1;
  }
  printf("%d", y);
  return 0;
}