#include<stdio.h>
int add(int, int);
int main() {
    int num1, num2;
    printf("Enter 2 numbers:\n");
    scanf("%d%d", &num1, &num2);
    printf("Result:\t%d + %d = %d\n", num1, num2, add(num1, num2));
    return 0;
}
int add(int num1, int num2) {
    if(!num2)
        return num1;
    else
        return add(num1 ^ num2, (num1 & num2) << 1);
}