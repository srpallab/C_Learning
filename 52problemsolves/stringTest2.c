#include<stdio.h>
#include<string.h>

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
  char *t = strtok(str, " ");
  while (t != NULL) {
    printf("%s\n", t);
    t = strtok(NULL, " ");
  }
  return 0;
}
