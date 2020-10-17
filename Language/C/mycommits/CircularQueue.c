//Implementing circular queue of size 5. We change size according to our use.

#include<stdio.h>

#define MAX_SIZE 5

struct Queue{
	int a[MAX_SIZE];
	int rear, front;
}q;

void enqueue(){
	int n;
	q.rear = (q.rear+1)%MAX_SIZE;
	if(q.rear == q.front){
		q.rear--;
		printf("queue is full\n");
		return;
	}
	printf("Enter the element : ");
	scanf("%d",&n);
	q.a[q.rear]=n;
}

void display(){
	int i=q.front;
	while(i!=q.rear){
		i=(i+1)%MAX_SIZE;
		printf("%d\n",q.a[i]);
	}
}

void clear(){
	q.front=MAX_SIZE-1;
	q.rear=MAX_SIZE-1;
}

int dequeue(){
	if(q.rear==q.front){
		printf("queue is empty\n");
		return;
	}
	q.front = (q.front+1)%MAX_SIZE;
	return q.a[q.front];
}

void main(){
	q.front=MAX_SIZE-1;
	q.rear=MAX_SIZE-1;
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
