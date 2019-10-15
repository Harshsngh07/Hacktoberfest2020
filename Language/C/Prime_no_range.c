#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,l,u,count;
    printf("Enter the lower limit=");
    scanf("%d",&l);
    printf("Enter the upper limit=");
    scanf("%d",&u);
    for(i=l;i<=u;i++)
    {
        count=0;
        for(j=2;j<=sqrt(i);j++)
	    {
            if(i%j==0)
            {
    	    	count++;
	    	    break;
		    }
	    }
	    if(count==0 && i!=1)
	    printf("%d",i);
	    printf("\n");
    }
    return 0;
}
