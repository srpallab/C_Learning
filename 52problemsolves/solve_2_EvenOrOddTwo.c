#include <stdio.h>
#include <string.h>

int main(){
  int n, i, len;
  char C[101];
  scanf("%d", &n);
  int A[n];
  for (i = 0; i < n; i++) {
    scanf("%s", C);
    len = strlen(C);
    A[i] = (int) C[len-1];
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
