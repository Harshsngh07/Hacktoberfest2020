#include <stdio.h> 
void cyclicSwap(int *a, int *b,int *c);  //declaration of the function 
void cyclicSwap(int* a, int* b, int* c) //function definition
{ 
    int temp = *b; 
    *b = *a; 
    *a = *c; 
    *c = temp; 
} 
  
int main() 
{     
    int a,b,c;
    printf("Enter a,b and c respectively:");
    scanf("%d %d %d",&a,&b,&c);
    printf("Value before swapping:\n"); 
    printf("a = %d \nb = %d \nc = %d\n", a, b, c); 
  
    cyclicSwap(&a, &b, &c);              //function call 
  
    printf("Value after swapping:\n"); 
    printf("a = %d \nb = %d \nc = %d", a, b, c); 
  
    return 0; 
} 
