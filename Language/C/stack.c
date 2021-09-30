//Array implementation of stack in c with all stack operations.
#include <stdio.h>
#include <stdlib.h>

int top = -1;

void push(int la[], int x){
    
    
    int item;
    printf("Enter a value to be pushed : ");
    scanf("%d", &item);
    top++;
    la[top] = item;
    
    printf("\n");
}

void pop(int la[]){

    if (top <= -1)
    {
        printf("Stack is underflow\n\n");
    } else
    {
        printf("The popped element is " "%d" "\n\n", la[top]);
        top--;
    }   
}

int peek(int la[]){

    if (top == -1)
    {
        printf("Underflow\n\n");
        return 0;
    } else
    {
        printf("The top element is " "%d" "\n\n", la[top]);
        return la[top];
    } 
}

void display(int la[]){

    if (top >= 0)
    {
        printf("Stack : ");
        for (int i = top; i>= 0; i--)
        {
            printf("%d ", la[i]);
        }
        printf("\n\n");
    } else
    {
        printf("The stack is empty.\n\n");
    }  
}

int main(){
    
    int stack[100];
    int m;
    printf("Enter the no. of elements in the stack (1 - 100) : ");
    scanf(" %d", &m);
    printf("\n");

    
    printf("\n");

    return 0;
}