#include<stdio.h>
#include<stdlib.h>

//Node of the linked list
typedef struct Node {
	int data;
	struct Node *link;
} Node;

//Handle of the list. Its head points to the first node in the list.
typedef struct List {
	Node *head;
	int number_of_nodes;
} List;

/* initializes a linked list */
List* list_initialize(); 

/* Inserts data at specified position 0 <= position <= length(list). */
void list_insert_at(List* list, int data, int position); 

/*Inserts data at the end of the List*/
void insert_at_end(List *list, int data);

/* Removes the First node of the linked list. No operation if the list was empty */
void list_delete_front(List* list); 

/* Prints the entire List as "X1, X2, ..., Xn" where X1 to Xn are the elements of the list,
if list is empty prints "EMPTY" */
void list_print(List* list); 

/* Reverses the element of the list*/
void list_reverse(List* list);

/* deallocates resources held by the list */
void list_destroy(List* list);


