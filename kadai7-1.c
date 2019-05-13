#include <stdio.h>

int main() {
  int len = 0;
  char str[128];
  printf("input a word: ");
  scanf("%s", str);
  while (str[len]) {
    if (str[len] == 'z') {
      str[len] = 'a';
    } else if (str[len] == 'Z') {
      str[len] = 'A';
    } else {
      str[len] += 1;
    }
    len += 1;
  }
  printf("result: %s", str);
  return 0;
}