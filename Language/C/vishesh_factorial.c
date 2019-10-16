#include <stdio.h>
void main() {
	int number;
	printf("Enter a number : ");
	scanf("%d", &number);
	printf("Factorial of a given number %d = %d\n", number, factorial(number));
}
int factorial(int a){
	int t=1;
	for(int i=1;i<=a;i++){
		t*=i;
	}
return t;}

