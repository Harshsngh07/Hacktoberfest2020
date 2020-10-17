// Implementing queue data structure along with it's operations. Length of stack is 10.
#include <stdio.h>

#define MAX_SIZE 10

struct Queue{
	int a[MAX_SIZE];
	int rear, front;
}q;

void enqueue(){
	if(q.rear!=(MAX_SIZE-1)){
		int ele;
		printf("Enter the element :- ");
		scanf("%d",&ele);
		q.a[++q.rear]=ele;
	}
	else
		printf("The stack is full\n");
}

int dequeue(){
	int x=-1;
	if(q.rear==-1)
		printf("The stack is empty\n");
	else
		x=q.a[q.front++];
	return x;
}

void display(){
	printf("QUEUE :- ");
	if(q.rear>-1){
		for(int i=q.front; i<=q.rear; i++){
			printf("%d ",q.a[i]);
		}
	}
	else{
		printf("No sufficient elements\n");
	}
}

void clear(){
	q.rear=-1;
	q.front=0;
	printf("Queue cleared\n");
}

int main(){
	q.rear=-1;
	q.front=0;
	int loop=1;
	while(loop){
		printf("\n1-Enqueue\n2-Dequeue\n3-Display\n4-Clear\n5-Exit\n");
		int ch, ele;
		printf("Enter your choice :- ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				enqueue();
				break;
			case 2:
				ele=dequeue();
				printf("Dequeued element = %d",ele);
				break;
			case 3:
				display();
				break;
			case 4:
				clear();
				break;
			case 5:
				loop=0;
				printf("Thank you\n");
				break;
			default:
				printf("Wrong input\n");
		}
	}
}
