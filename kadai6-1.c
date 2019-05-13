void print(int m, int n, const float * x) {
  int i,j;
  float y;
  for(i=0;i<m;i++) {
    for(j=0;j<n;j++){
      y = x[m*i + j];
      printf("  %f", y);
    }
    printf("\n");
  }
}