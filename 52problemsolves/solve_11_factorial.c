#include <stdio.h>

int fib(int N, int *fibo){
  
  if (N == 0) {
    return ;
  }
  printf("%d\n", fibo[N]);
  return fibo[N];
}

int main()
{
  int T;
  scanf("%d", &T);
  while (T--) {
    int N, i;
    scanf("%d", &N);
    int fibo[N];
    for (i = 0; i < N; ++i) {
      fibo[i] = -1;
    }
    fibo[0] = 0; fibo[1] = 1;
    
    fib(N, fibo);
    //result = fib(N, fibo);
    //printf("%d\n", result);
  }
  
  return 0;
}
