#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node* next;
};

void Insert(struct Node** head, int x, int y){
  struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
  temp1 -> data = x;
  temp1 -> next = NULL;
  printf("temp1: %d\n", temp1 -> data);
  printf("temp1: %p\n", temp1 -> next);
  if (y == 1){
    temp1 -> next = *head;
    printf("temp1 in if: %p\n", temp1 -> next);
    *head = temp1;
    printf("head in if: %p\n", head);
  }
  int i;
  struct Node* temp2 = *head;
  for (i = 0; i < y-2; ++i) {
    temp2 = temp2 -> next; 
  }

  temp1 -> next = temp2 -> next;
  temp2 -> next = temp1;
}

void Print(struct Node* head){
  struct Node* temp = head;
  printf("List is: ");
  //printf("%p\n", temp);
  while (temp != NULL) {
    printf("%d ", temp -> data);
    temp = temp -> next;
  }
  printf("\n");
}

int main(){
  struct Node* head;
  head = NULL;
  int n, i, x, y;
  printf("How Many Numbers to Input? ");
  scanf("%d", &n);
  for (i = 0; i < n; ++i) {
    scanf("%d %d", &x, &y);
    Insert(&head, x, y);
    //printf("%p\n", head);
    // Print(head);
  }

  return 0;
}
