#include<stdio.h>


int main() {
  int T, i = 1;
  scanf("%d", &T);
  getchar();
  while (T--) {
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 > n2 && n1 > n3) {
      if (n2 > n3) {
	printf("Case %d: %d %d %d\n", i, n3, n2, n1);
      }else{
	printf("Case %d: %d %d %d\n", i, n2, n3, n1);
      }
    }else if(n1 < n2 && n1 < n3){
      if (n2 > n3) {
	printf("Case %d: %d %d %d\n", i, n1, n3, n2);
      }else{
	printf("Case %d: %d %d %d\n", i, n1, n2, n3);
      }
    }else{
      if (n2 > n3) {
	printf("Case %d: %d %d %d\n", i, n3, n1, n2);
      }else{
	printf("Case %d: %d %d %d\n", i, n2, n1, n3);
      }
    }
    i++;
  }
  return 0;
}
