void mul(int m, int n, const float * x, const float * A, float * o) {
  int i,j;
  for(i=0;i<m;i++){
    o[i] = 0;
    for(j=0;j<n;j++){
      o[i] += A[n*i + j] * x[j];
    }
  }
}