//Implementing stack data structure in c
#include<stdio.h>
#define SIZE 10

struct stack{
	char a[SIZE];
	int top,count;
}s;

void push(char c){
	if(s.top == SIZE-1){
		printf("Stack is full\n");
		return;
	}
	else{
		s.top++;
		s.count++;
		s.a[s.top] = c;
		return;
	}
}

char pop(){
	char pp;
	if(s.top == -1){
		printf("stack is empty\n");
		return;
	}
	else{
		pp=s.a[s.top];
		s.top--;
		s.count--;
		return pp;
	}
}

void printstack(){
	int i;
	printf("\n\n");
	for(i=0;i<s.count;i++){
		printf("%c\n",s.a[i]);
	}
}

void main(){
	s.top=-1;
	s.count = 0;
	int x=1,ch;
	char c;
	while(x){
		printf("\n\n1.push\n2.pop\n3.exit\n->");
		scanf("%d",&ch);
		printf("choice %d\n",ch);
		switch(ch){
			case 1:
				printf("Enter the charachter : ");
				scanf("\n%c",&c);
				push(c);
				printstack();
				break;
			case 2:
				c = pop();
				printf("Element removed is %c\n",c);
				printstack();
				break;
			case 3:
				x=0;
				break;
			default:
				printf("Invalid input\n");
		}	
	}
	
}
