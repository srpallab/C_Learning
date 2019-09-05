#include<stdio.h>

void input(char *str){
  int c, i=0;
  while((c = getchar()) != '\n'){
    str[i++] = c;
  }
  str[i] = '\0';
}

int main() {
  char str[20];
  input(str);
  printf("%s\n", str);
  return 0;
}
