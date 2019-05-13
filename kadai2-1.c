#include <stdio.h>

int main() {
  int x;
  printf("Type an integer: \n");
  scanf("%d", &x);

  if (x % 3||x % 5){
    printf("NO");
  }else{
    printf("YES");
  }

  return 0;
}