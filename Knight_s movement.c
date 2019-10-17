//Program to calculate the number of possible moves of Knight in a chess board of 8x8
//Just by knowing the current position of the knight in Chess board whose origin is (0,0)
#include<stdio.h>
void main()
{
    int x,y,sum=0,flag=1;
    while(flag==1)
    {
    printf("\n Enter the coordinates of x,y:");
    scanf("%d %d",&x,&y);
    if(!(x>7 || y>7 || x<0 ||y<0))
        {
            if (x+2<=7 && y+1<=7)
                sum+=1;
            if (x+2<=7 && y-1>=0)
                sum+=1;
            if (x-2>=0 && y+1<=7)
                sum+=1;
            if (x-2>=0 && y-1>=0)
                sum+=1;
            if (x+1<=7 && y+2<=7)
                sum+=1;
            if (x+1<=7 && y-2>=0)
                sum+=1;
            if (x-1>=0 && y+2<=7)
                sum+=1;
            if (x-1>=0 && y-2>=0)
                sum+=1;
            flag=0;
        }
    else
       {
        printf("Enter the valid coordinate \n");
        flag=1;
       }
    }
    printf("The no of possible moves for (%d,%d) is %d",x,y,sum);



}
