void add(int n, const float *x, float * o) {
  int i;
  for(i=0;i<n;i++){
    o[i] += x[i];
  }
}

void mul(int m, int n, const float * x, const float * A, float * o) {
  int i,j;
  for(i=0;i<m;i++){
    o[i] = 0;
    for(j=0;j<n;j++){
      o[i] += A[n*i + j] * x[j];
    }
  }
}

void fc(int m, int n, const float * x, const float * A, const float * b, float * o) {
  mul(m, n, x, A, o);
  add(n, b, o);
}