#include<stdio.h>
#include<stdlib.h>
#include"sll.h"

int main() {
	int choice;
	List* list = list_initialize();
	for(;;) {
		printf("\n 1. Insert at the end of the list \n 2.Display the list \n 3.Delete from the front of the list \n 4. Insert elements at specified positions \n 5.Reverse the elements of the list\n ");
		printf("\n enter your choice\n");
		scanf("%d", &choice);
		switch(choice) {
			int element, index;
			case 1:
				/*1. Insert at the end of the list*/
				printf("enter the element to be inserted:\n");
				scanf("%d", &element);
				printf("inserted succesfully");
				insert_at_end(list, element);
				break;
			case 2:
				/* Print list contents */ 
				list_print(list);
				break;
			case 3:
				/* Remove front element */ 
				list_delete_front(list);
				break;
			case 4:
				/* Insert elements at specified positions */
				printf("enter the element and the index of the element to be inserted respectively(element position):\n");
				scanf("%d%d", &element, &index);
				list_insert_at(list, element, index);
				break;
			case 5:
				/*Reverses the elements of the list*/
				list_reverse(list);
				break;
			default: exit(0);
		}
	} while(choice != 0);
	list_destroy(list);
	return 0;
}

List* list_initialize() {
	List* list = (List*) malloc(sizeof(List));
	list->head = NULL;
	list->number_of_nodes = 0;
	return list;
}

void list_print(List* list) 
	{
	Node *p;
	p=list->head;
	if(p == NULL)
	{
		printf("EMPTY\n");
		return;
	}
	while (p!=NULL){
		printf("%d ",p->data);
		p=p->link;
	}
	printf("\n");
}


void list_destroy (List *list)
{
	Node *t, *u=NULL;
	t=list->head;
	while (t->link!=NULL){
		u=t;
		t=t->link;
		free(u);
	}
	free(list);
}
