// Implementation of singly linked list 


#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
}Node;

Node *st = NULL;

void insertBeg(int);
void insertEnd(int);
void traverse();
void deleteBeg();
void deleteEnd();
int count = 0;

int main () {
  int i, data;
  while(1){
      printf("\nMenu\n1.Insert At Begin\n2.Insert At End\n3.Display\n4.Delete At begin\n5.Delete At end\n6.Exit\n");
      scanf("%d",&i);
      if(i>5)
        break;
      switch (i)
      {
      case 1:
          printf("\nEnter Data\n");
          scanf("%d",&data);
          insertBeg(data);
          break;
      case 2:
          printf("\nEnter Data\n");
          scanf("%d",&data);
          insertEnd(data);
          break;
      
      case 3:
          traverse();
          break;

      case 4:
          deleteBeg();
          break;

      case 5:
          deleteBeg();
          break;
      }
  }
  

  return 0;
}

void insertBeg(int x) {
  struct node *a;

  a= (struct node*)malloc(sizeof(struct node));
  a->data = x;
  count++;

  if (st == NULL) {
    st = a;
    st->next = NULL;
    return;
  }

  a->next = st;
  st = a;
}

void insertEnd(int x) {
  struct node *a, *temp;

  a= (struct node*)malloc(sizeof(struct node));
  a->data = x;
  count++;

  if (st == NULL) {
    st = a;
    st->next = NULL;
    return;
  }

  temp = st;

  while (temp->next != NULL)
    temp = temp->next;

  temp->next = a;
  a->next   = NULL;
}

void traverse() {
  struct node *a;

 a= st;

  if (a == NULL) {
    printf("Linked list is empty.\n");
    return;
  }

  printf("There are %d elements in linked list.\n", count);

  while (a->next != NULL) {
    printf("%d\n", a->data);
   a= a->next;
  }
  printf("%d\n", a->data); // Print last node
}

void deleteBeg() {
  struct node *a;
  int n;

  if (st == NULL) {
    printf("Linked list is empty.\n");
    return;
  }

  n = st->data;
  a = st->next;
  free(st);
  st = a;
  count--;

  printf("%d deleted from the beginning successfully.\n", n);
}

void deleteEnd() {
  struct node *a, *u;
  int n;

  if (st == NULL) {
    printf("Linked list is empty.\n");
    return;
  }

  count--;

  if (st->next == NULL) {
    n = st->data;
    free(st);
    st = NULL;
    printf("%d deleted from end successfully.\n", n);
    return;
  }

  a= st;

  while (a->next != NULL) {
    u = a;
    a= a->next;
  }

  n = a->data;
  u->next = NULL;
  free(a);

  printf("%d deleted from end successfully.\n", n);
}
