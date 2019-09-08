#include <stdio.h>

int fib(int n, int *fibo){
  if (fibo[n] != -1) {
    //printf("fibo[%d]: %d\n", n, fibo[n]);
    return fibo[n];
  }
  //printf("fibo[%d]: %d\n", n, fibo[n]);
  fibo[n] = fib(n-1, fibo) + fib(n-2, fibo);
  return fibo[n];
}

int main(){
  int N, i;
  scanf("%d", &N);
  int fibo[N], res;
  for (i = 0; i < N; ++i) {
    fibo[i] = -1;
  }
  fibo[0] = 0; fibo[1] = 1;
  res = fib(N-1, fibo);
  printf("%d\n", res);
  return 0;
}
