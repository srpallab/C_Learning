#include<stdio.h>


int main() {
  int T;
  scanf("%d", &T);
  getchar();
  while (T--) {
    char str[100000];
    int v = 1;
    scanf("%[^\n]", str);
    //printf("%s\n", str);
    for (int i = 0; str[i] != '\0'; i++) {
      if (str[i] == ' ' && str[i+1] != ' ') {
	v++;
      }
    }
    printf("%d\n", v);
    getchar();
  }
  return 0;
}
