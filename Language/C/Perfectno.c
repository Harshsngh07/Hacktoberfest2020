//Program to check whether a no is a perfect no. or not 

#include<stdio.h> 

int isPerfect(int n)
{
    int i,r=0;
    for(i = 1; i <= n/2; i++)
    {
        if(n%i==0)
        {
            r=r+i;
        }  
    }
    if(n==r)
        return 1;
    return 0;

}

int main()
{
   
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    if(isPerfect(n)==1)
    {
        printf("%d is a perfect number\n",n);
    }
    else
    {
         printf("%d is not a perfect number\n",n);
    }
    return 0;
}