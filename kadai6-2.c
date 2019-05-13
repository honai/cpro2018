void print_oct(int m, int n, const float * x, const char * name) {
  int i,j;
  float y;
  printf("%s = [", name);
  for(i=0;i<m;i++) {
    for(j=0;j<n;j++){
      y = x[i*n + j];;
      printf("  %f", y);
    }
    printf("  ;\n");
  }
  printf("];\n");
}