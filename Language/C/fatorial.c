#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//This program is used to calculate the fatorial of a chosen number
void Fatorial (double n){
	double fat=1;
	double nc = n;
	while (n > 1){
		fat = fat * n;
		n--;
	}
	printf("%.lf! = %.lf", nc, fat);
	return;
}
int main(int argc, char *argv[]) {
	double n;
	printf("enter a value for n");
	scanf("%lf", &n);
	Fatorial (n);
	
	return 0;
}	