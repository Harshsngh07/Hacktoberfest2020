/*This code calculates factorial of a number using recursion*/

#include<stdio.h>
int fact(int);                     //Function declaration of fact.
int main()
{
  int n;
  printf("Enter the factorial you wish to find : ");
  scanf("%d",&n);
  int result = fact(n);
  printf("\n\nThe factorial is : %d",result);
  return 0;
}
int fact(int a)
{
  if(a==0)
    return 1;                       //when number gets to zero, it is multiplied by 1 to retain the result.
  else
    return a*fact(a-1);             //recursion here.
}

//__author__ = Vishal Tiwari
