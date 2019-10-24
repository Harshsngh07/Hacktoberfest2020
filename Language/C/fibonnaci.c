#include <stdio.h>
int main()
{
    int n;
    printf("Enter the nth term of fibonacci series ");
    scanf("%d",&n);

    int c=fibonnaci(n);

    printf("nth term of fibonnaci series is %d",c);
}
int  fibonnaci(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    return ( fibonnaci(n-1) + fibonnaci(n-2) );
}


