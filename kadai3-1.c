#include <stdio.h>

int main(){
  int n;
  int x;
  int y=1;
  scanf("%d", &n);
  for(x=1; x<=n; x+=1) {
    y = x*y;
  }
  printf("%d", y);
  return 0;
}