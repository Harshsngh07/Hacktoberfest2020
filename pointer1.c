#include<stdio.h>
int main()
{
    int sum=0,*d,*c,a,b;
    c=&a;
    d=&b;
    printf("enter the value of a ");
    scanf("%d",&a);
    printf("enter the value of b ");
    scanf("%d",&b);
    
    sum=*c+*d;
    
    printf("sum is = %d",sum);
    return 0;
}