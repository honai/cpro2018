#include <stdio.h>

void minmax(int data[], int *min, int *max) {
  *min = *max = data[0];
  for (int i=1;i<3;i++) {
    if (data[i] < *min) {
      *min = data[i];
    }
    if (data[i] > *max) {
      *max = data[i];
    }
  }
}

int main() {
  int n[3];
  int min, max;
  printf("input 1st integer: ");
  scanf("%d", &n[0]);
  printf("\ninput 2nd integer: ");
  scanf("%d", &n[1]);
  printf("\ninput 3rd integer: ");
  scanf("%d", &n[2]);

  minmax(n, &min, &max);

  printf("min: %d, max: %d", min, max);

  return 0;
}