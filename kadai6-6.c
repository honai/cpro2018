void rand_init(int n, float * o) {
  int i;
  float r1, r2;
  srand(time(NULL));
  for(i=0;i<n;i++){
    r1 = rand();
    r2 = r1 / RAND_MAX - 0.5;
    o[i] = r2;
  }
}