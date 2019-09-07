#include<stdio.h>
#include <math.h>


int main() {
  int T, n, root;
  scanf("%d", &T);
  getchar();
  while (T--) {
    scanf("%d", &n);
    root = sqrt(n);
    if (root * root == n) {
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
}
