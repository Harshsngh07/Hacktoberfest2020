#include<stdio.h>
int main()
{
	int b,a=0,i,n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if((n%i)==0)
		{
			a=a+i;
		}
		else
		a=a+0;
	}
	if(a==n)
	printf("The given number %d is a perfect number\n",n);
	else if(a<=n)
	printf("The given number %d is a deficient number\n",n);
	else if(a>=n)
	printf("The given number %d is an abundant number\n",n);
	return 0;
}
