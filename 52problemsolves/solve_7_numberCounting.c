#include <stdio.h>

void input(char *str){
  int c, i=0;
  while((c = getchar()) != '\n'){
    str[i++] = c;
  }
  str[i] = '\0';
}

int main(){
  int T;
  char str[100];
  scanf("%d", &T);
  while (T--) {
    input(str);
    
  }
  return 0;
}
