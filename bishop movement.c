//Program to find the number of possible moves of a bishop in a 8x8 chess board
//First block has coordinates (0,0)
#include<stdio.h>
void main()
{
    int x,y,flag=1,count=0;
    while (flag==1)
    {
        printf("Enter the coordinates of bishop: \n");
        scanf("%d %d",&x,&y);
        if (x>7 || y>7 || x<0 || y<0)
            {
                printf("wrong input\n");
                flag=1;
            }
        else
            {flag=0;
            if (7-x>0 && 7-y>0)
                if (7-x<7-y)
                    count+=7-x;
                else
                    count+=7-y;
            if(7-x>0 && y>0)
                if (7-x<y)
                    count+=7-x;
                else
                    count+=y;
            if (7-y>0 && x>0)
                if(7-y<x)
                    count+=7-y;
                else
                    count+=x;
            if(x>0 && y>0)
                if (x>y)
                    count+=y;
                else
                    count+=x;
            }
    }
    printf("No. of possible moves of bishop is %d",count);
}
