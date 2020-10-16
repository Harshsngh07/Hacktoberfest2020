#include<stdio.h>
#include<stdlib.h>
#include "sll.h"

void insert_at_end(List *list, int data) 
{
	Node *temp = (Node*)malloc(sizeof(Node));
	temp->data = data;
	temp->link = NULL;
	if (list->head==NULL)
	{
		list->head = temp;
	}
	else
	{
		Node *cur = list->head;
		while(cur->link!=NULL)
		{
			cur=cur->link;
		}
		cur->link = temp;
	}	
	list->number_of_nodes+=1;
}

void list_delete_front(List* list) 
{
	if (list->head==NULL)
	{
	}
	else
	{
		Node *temp = (Node*)malloc(sizeof(Node));
		temp->link = NULL;
		temp = list->head;
		list->head=list->head->link;
		free(temp);
	}
	list->number_of_nodes-=1;
}

void list_insert_at (List *list, int data, int position)
{
	Node *temp = (Node*)malloc(sizeof(Node));
	temp->data = data;
	temp->link = NULL;
	if (list->head==NULL && position==0)
	{
		list->head = temp;
	}
	else if (list->head!=NULL && position==0)
	{
		temp->link = list->head;
		list->head = temp;
	}
	else if (position>=0 && position<=list->number_of_nodes)
	{
		Node *cur = list->head;
		for (int ct=1; ct<position; ct++)
		{
			cur=cur->link;
		}
		temp->link=cur->link;
		cur->link = temp;
	}
	else
	{	
	}
	list->number_of_nodes+=1;
}

void list_reverse(List* list)
{
	Node *prev=NULL, *next=NULL, *cur=list->head;
	while(cur!=NULL)
	{
		next=cur->link;	
		cur->link=prev;	
		prev=cur;
		cur=next;
	}
	list->head=prev;
}


