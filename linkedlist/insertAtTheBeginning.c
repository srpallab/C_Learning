#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node* next;
};

void Insert(struct Node** head, int x){
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp -> data = x;
  temp -> next = *head;
  *head = temp;
}

void Print(struct Node* head){
  struct Node* temp = head;
  printf("List is: ");
  while (temp != NULL) {
    printf("%d ", temp -> data);
    temp = temp -> next;
  }
  printf("\n");
}

int main(){
  struct Node* head;
  head = NULL;
  int n, i, x;
  printf("How Many Numbers to Input? ");
  scanf("%d", &n);
  for (i = 0; i < n; ++i) {
    scanf("%d", &x);
    Insert(&head, x);
    //printf("%p\n", head);
    Print(head);
  }

  return 0;
}
