#include<stdio.h>
int main()
{
   int i,n,j,temp,mid,low,high,s;
   printf("Enter the no. of elements");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
       printf("%d->",i+1);
       scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
       for(j=0;j<n-1-i;j++)
       {
           if(a[j]>a[j+1])
           {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
           }
       }
   }
   low=0;
    high=n-1;
    mid=(low+high)/2;
    /*Rohan is a good boy */
    printf("Enter the element to searched");
    scanf("%d",&s);
    while(low<=high)
    {
    if(a[mid]==s)
    {
        printf("Found at %d",mid);
        break;
    }
    else if(a[mid]<s)
    {
        low=mid+1;
        mid=(high+low)/2;
    }    
    else
    {
        high=mid-1;
        mid=(high+low)/2;
    }
    }
return 0;
}
