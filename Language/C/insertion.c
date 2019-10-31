#include<stdio.h>
int main()
{	int i,j,num,arr[100],key;
	printf("Enter number of elements in array :  ");
	scanf("%d",&num);
	printf("\n Enter The array \n");
	for(i=0;i<num;i++)	
	{
		scanf("%d",&arr[i]);
		printf("\n");
	}
	for(i=1;i<num;i++)
		{	key=arr[i];
			j=i-1;
            while(j>=0&&arr[j]>key)
            {
            	arr[j+1]=arr[j];
            	j=j-1;
            }  
            arr[j+1]=key;
        }
    printf("\n The sorted array is: \n");
    for(i=0;i<num;i++)
    	printf("%d \t",arr[i]);
        

}