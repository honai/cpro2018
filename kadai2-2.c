#include <stdio.h>

int main() {
  int x;
  printf("Type an integer: \n");
  scanf("%d", &x);

  if (!(x % 3)){
    printf("YES\n");
  } else if(!(x % 5)) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}