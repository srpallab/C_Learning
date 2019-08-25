#include <stdio.h>

int main(){
  int T, sum;
  scanf("%d", &T);
  while (T--) {
    //printf("%d\n", T);
    char C[5];
    scanf("%s", C);
    //printf("%c %c \n", C[0], C[4]);
    sum = (int)C[0] - '0' + (int)C[4] - '0';
    printf("Sum = %d\n", sum);
  }
  return 0;
}

