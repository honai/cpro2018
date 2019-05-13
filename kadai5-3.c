#include <stdio.h>

int main(){
  char text = 'a';
  printf("%c %d %x\n", text, text, text);
  text += 1;
  printf("%c %d %x", text, text, text);
  return 0;
}
