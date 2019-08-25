#include <stdio.h>
#include <math.h>

int main(){
  int i, j, N, m;
  scanf("%d", &N);
  int A[N];
  for (i = 0; i < N; ++i) {
    scanf("%d", &m);
    A[i] = m;
  }
  for (i = 0; i < N; ++i) {
    //printf("Num is: %d\n", A[i]);
    printf("Case %d:", i+1);
    for (j = 1; j <= A[i]; ++j) {
      if (A[i] % j == 0) {
	printf(" %d", j);
      }
    }
    printf("\n");
  }
  return 0;
}

