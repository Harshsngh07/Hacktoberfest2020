#include<stdio.h>
#include<stdlib.h>
struct linked_list
{
	int info;
	struct linked_list *next;
};
typedef struct linked_list l;
l *start, *node, *temp;

void traversal()
{
	l * t;
	t = start;
	while(t != NULL)
	{
		printf("%d\t", t->info);
		t = t->next;
	}
	printf("\n");
}
void insert_beg(int data)
{
	node = (l*) malloc(sizeof(l));
	node -> info = data;
	node -> next = start;
	start = node;
}
void insert_loc(int location, int data)
{
	l * t;
	t = start;
	int i = 0;
	node = (l*) malloc(sizeof(l));
	for(int i = 1; i < location; i++)
	{
		t = t -> next;
		if(t == NULL)
		{
			printf("Location doesn't exist.\n");
			return;
		}
	}	
	node -> info = data;
	node -> next = t -> next ;
	t -> next  = node;	
	
}
void insert_end(int data)
{
	l * t;
	t = start;
	node = (l*) malloc(sizeof(l));
	node -> info = data;
	node -> next = NULL;
	while(t -> next != NULL)
	{
		t = t -> next;
	}
	t -> next = node;
	
}
void delete_beg()
{
	temp = start;
	start = temp -> next;
	free(temp);	
}
void delete_loc(int data)
{
	l * t;
	t = start;
	temp = t;
	if(temp->info == data)
	{
		t = temp -> next;
		start = t;
		free(temp);
	}
	else
	{
		while(temp->info != data)
		{
			t = temp;
			temp = temp -> next;
			if(temp -> info == data)
			{
				t->next = temp->next;
				free(temp);
				return;
			}
			
		}
	}
}
void delete_end()
{
	l * t;
	t = start;
	while(t -> next != NULL)
	{
		temp = t;
		t = t -> next;
	}
	temp -> next = NULL;
	free(t);
			
}
int main()
{
	int ch, loc, item;
	char choice;
	start = NULL;
	do
	{
		node = (l*) malloc(sizeof(l));
		printf("Enter the data values:-\t");
		scanf("%d", &node -> info);
		if(start == NULL)
		{
			start = node;
			temp = node;
		}
		else
		{
			temp -> next = node;
			temp = node;
		}
		printf("Want to enter more values:- (Y/N):-\t");
		scanf("%s", &choice);		
	}while(choice == 'Y'||choice == 'y');
	temp -> next = NULL;
	do
	{
		printf("\t\t\t\t\t\tMENU\n");
		printf("1. Traversal.\n");
		printf("2. Insertion at beginning.\n");
		printf("3. Insertion at given location.\n");
		printf("4. Insertion at end.\n");
		printf("5. Deletion at beginning.\n");
		printf("6. Deletion at given location.\n");
		printf("7. Deletion at end.\n");
		printf("8. Quit.\n");
		printf("Enter your choice:-\t");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: printf("The traversal of data:-\n");
					traversal();
					break;
			case 2: printf("Enter the value to be inserted at the beginning:-\t");
					scanf("%d", &item);
					insert_beg(item);
					break;
			case 3: printf("Enter the location you want to insert the data:-\t");
					scanf("%d", &loc);
					printf("Enter the value to be inserted at the location %d:-\t", loc);
					scanf("%d", &item);
					insert_loc(loc, item);
					break;
			case 4: printf("Enter the value to be inserted at the end:-\t");
					scanf("%d", &item);
					insert_end(item);
					break;
			case 5: printf("Deletion of the element at the beginning.\n");
					delete_beg();
					break;
			case 6: printf("Enter the data to be deleted:-\t");
					scanf("%d", &item);
					delete_loc(item);
					break;
			case 7: printf("Deletion at the end.\n");
					delete_end();
					break;
			case 8: exit(0);
					break;
			default: printf("Please Enter a valid choice.\n");
		}
		
	}while(ch!= 8);
	return 0;
}
