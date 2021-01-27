#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("Enter No. of Rows : ");
	int c;
	scanf("%d",&c);
	int matr[c];
	for(int i = 1; i <= c ; i++)
	{
		matr[i-1]=2*i-1;
		printf("%*c",c-i+1,' ');
		for(int j = 1; j <= i; j++)
			(j%2 == 0)?printf("*"):printf("%d",matr[(j-1)/2]);
		for(int j = i; j < 2*i-1; j++)
			(j%2 != 0)?printf("*"):printf("%d",matr[i-j/2-1]);
	printf("\n");
	}
	return 0;
}
