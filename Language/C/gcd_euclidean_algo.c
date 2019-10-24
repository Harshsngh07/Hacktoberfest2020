// C program to find GCD of two numbers 
#include<stdio.h>
// Iterative function to return gcd of a and b
long long int gcd(long long int a, long long int b)
{
    long long int r=0;
    while(b>0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
} 
int main()
{
    long long int a=0,b=0;
    printf("Enter the 2 natural numbers(>=1)\n");
    scanf(" %lld %lld",&a,&b);
    printf("GCD of %lld & %lld = %lld\n",a,b,gcd(a,b));
}
