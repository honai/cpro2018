#include <stdio.h>

int main() {
  FILE *fp1 = NULL;
  FILE *fp2;
  char str[128];
  fp1 = fopen("test.txt", "r");
  fp2 = fopen("test.bak", "w");
  if(!fp1) {
    printf("cannot open test.txt");
    return 0;
  }
  while (fgets(str, 128, fp1)) {
    fputs(str, fp2);
  }
  fclose(fp1);
  fclose(fp2);
  return 0;
}