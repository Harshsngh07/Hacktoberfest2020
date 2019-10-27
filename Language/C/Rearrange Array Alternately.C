#include<stdio.h>
int main()
{
	int num;scanf("%d",&num);
	while(num--)
	{
	    int n;scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++)
	        scanf("%d",&a[i]);
	    for(int i=0,j=n-1;i<n,j>=i;i++,j--)
	    {
	        if(a[i]!=a[j])
	        printf("%d %d ",a[j],a[i]);
	        else
	        printf("%d",a[j]);
	    }
	    printf("\n");
	}
}
