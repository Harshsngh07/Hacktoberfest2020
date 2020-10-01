/*

Generating Hash Code on 8 bits using XOR Operator

*/

#include<stdio.h>
int main()
{
 char ch, input[9], s[9];
 int i, len=0;
 
 printf("Enter your input bits: ");
 scanf("%s",input);
  
 printf("Enter your key in 8 bits: ");
 scanf("%s",s);
 
 printf("Your hash code: ");
 for(i=0; i<8; i++)
 {
   ch=input[i]^s[i]; // XOR operation
  printf("%d",ch); 
 }
 return 0;
}
