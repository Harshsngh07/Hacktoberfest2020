//Stack basic opertions
#include<stdio.h>

struct ArrayStack{
    int top,capacity,array[100];
};

void main(){
    struct ArrayStack stack;
    printf("Enter the capacity of stack(1-100)=");
    scanf("%d",&stack.capacity);
    stack.top=-1;
    int choice,item;
    while(1){
        printf("\n1.push\n2.pop\n3.peek\n4.isFull\n5.isEmpty\n6.exit\n");
        printf("\nEnter your choice= ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            if(stack.top==(stack.capacity-1))
                printf("OverFlow");

            else{
                stack.top+=1;
                printf("\nEnter the value=");
                scanf("%d",&stack.array[stack.top]);
                fflush(stdin);
                }
            break;

        case 2:
            if(stack.top==-1)
                printf("UnderFlow");
            else{
                item=stack.array[stack.top];
                stack.top-=1;
                printf("\nPopped value is %d",item);
                }
            break;

        case 3:
            if(stack.top==-1)
                printf("\nThere is no data to peek.");
            else{
                item=stack.array[stack.top];
                printf("\ntop value is %d",item);
                }
            break;

        case 4:
            if(stack.top==(stack.capacity-1))
                printf("\nStack is Full");

            else
                printf("\nStack is not Full");
            break;

        case 5:
            if(stack.top==-1)
                printf("\nStack is empty");
            else
                printf("\nStack is not empty");
            break;

        case 6:
            return;

        default:
            printf("invalid choice");
            break;
        }
    }
}
