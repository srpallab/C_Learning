#include <stdio.h>

int main(){
  int T;
  scanf("%d", &T);
  while (T--) {
    int res = 0, N, i = 5;
    scanf("%d", &N);
    while (i < N) {
      res = res + (N/i);
      i = i*5;
    }
    printf("%d\n", res);
  }

  return 0;
}
