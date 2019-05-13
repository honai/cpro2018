#include <stdio.h>

void printData(int *data, int n, char *name) {
  printf("%s:", name);
  for(int i=0;i<n;i++) {
    printf(" %d", data[i]);
  }
  printf("\n");
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void loop(int * data, int n) {
  for (int i=0;i<n;i++) {
    if (data[i] > data[i+1]) {
      swap(&data[i], &data[i+1]);
    }
  }
}
void sort(int * data, int n) {
  for (int i=0;i<n-1;i++) {
    loop(data, n);
  }
}

int main() {
  int data[6] = {64, 30, 8, 87, 45, 13};
  printData(data, 6, "Data");
  sort(data, 6);
  printData(data, 6, "Result");

  return 0;
}