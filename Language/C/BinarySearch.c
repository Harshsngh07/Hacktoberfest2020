// Binary search Implementaion of a given array
#include<stdio.h>
void search(int *a,int key,int nof)
{
	int end=nof-1,flag=0;;
	int start=0;
	int middle=(start+end)/2;
	while(start<=end)
	{
		if(key==a[middle])
		{
		flag=1;
		break;
		}
		else if(key>a[middle])
		{
			start=middle+1;
		}
		else if(key<a[middle])
		{
			end=middle-1;
		}
		middle=(start+end)/2;
	}
	if(flag==1)
	printf("Found!");
	else
	printf("Not Found!");
}
int main()
{
	int key;
	int a[]={1,2,3,4,5};
	scanf("%d",&key);
	search(a,key,5);
	return 0;
}
