#include <stdio.h>
#include <conio.h>
void main()
{
    int a[500],n,i,c;
    int flag=0;
    printf("Enter the search element:\n");
    scanf("%d",&n);
    printf("Enter the limit of the array:");
    scanf("%d", &c);
    printf("Enter the array in which the element has to be searched: \n");
    for(i=0;i<c;i++)//Accepting the array to be searched
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < c; i++)//Searching the for the element in the array
    {
        if (n==a[i])
        {
            printf("Element Found at index %d.", i);
            flag=1;
        }
        
    }
    if (flag==0)
    {
        printf("Element not found in the array.");
    }
}
    