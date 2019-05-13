void add(int n, const float *x, float * o) {
  int i;
  for(i=0;i<n;i++){
    o[i] += x[i];
  }
}