#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i, m;
  scanf("%d", &n);
  int A[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &m);
    A[i] = m;
  }
  for (i = 0; i < n; i++) {
    if (A[i] % 2 == 0) {
      printf("even\n");
    }else{
      printf("odd\n");
    }
    //printf("%d\n", A[i]);
  }
  return 0;
}

