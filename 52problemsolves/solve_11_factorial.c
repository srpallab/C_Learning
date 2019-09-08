#include <stdio.h>

double facto(double n){
  if (n == 0) {
    return 1;
  }
  return n * facto(n-1);
}

int main(){
  int T;
  scanf("%d", &T);
  while (T--) {
    double res, N;
    scanf("%lf", &N);
    res = facto(N);
    printf("%.0lf\n", res);
  }

  return 0;
}
