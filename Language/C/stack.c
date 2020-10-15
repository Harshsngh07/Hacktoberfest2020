#include<stdio.h>
#define MAX 5
struct stack
{
        int data[MAX];
        int top;
};
typedef struct stack STACK;
STACK s;

int isEmpty()
{
    if(s.top == -1)
        return 1;
    else 
        return 0;
}
int isFull()
{
    if(s.top == MAX - 1)
        return 1;
    else 
        return 0;
}
void push()
{
    int num;
    if(isFull())
        printf("The stack is full\n");
    else
    {
        printf("Enter the element to be pushed\n");
        scanf("%d",&num);
        s.top ++;
        s.data[s.top] = num;
    }
    
}
void pop()
{
    if(isEmpty())
        printf("The stack is empty\n");
    else
    {
        printf("The element that is popped is %d\n", s.data[s.top]);
        s.top --;
    }
}
void peek()
{
    if(isEmpty())
        printf("The stack is empty\n");
    else
        printf("The element at peek is %d", s.data[s.top]);
}
void display()
{
    if(isEmpty())
        printf("The stack is empty\n");
    else
    {
        printf("The status of the stack is\n");
        for(int i = s.top; i>= 0; i--)
            printf("%d\n", s.data[i]);
    }
}

void main()
{
    int ch;
    int option = 1;
    s.top = -1;
    while(option)
    {
        printf("\nEnter a choice\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
                case 1:push();
                        break;
                case 2:pop();
                        break;
                case 3:peek();
                        break;
                case 4:display();
                        break;
                case 5:option = 0;
                        break;
                default:printf("Enter a valid input");
        }
    }
}
