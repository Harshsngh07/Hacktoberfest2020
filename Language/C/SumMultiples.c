#include <stdio.h>

int sum_naturals(int n)
{
	return (n-1) * n / 2;
}

int sum_multiples (int x, int y)
{
	return x*sum_naturals(y);
}
void test_sum_multiples(void)
{
	int n;
	int r;
	printf("The sum of the first x multiples of y are:\n");
	while (scanf("%d%d", &r, &n) != EOF)
	{
		int z = sum_multiples(n, r);
		printf("The sum of the first %d multiples of %d is %d\n", r, n, z);
	}
}

int main(void)
{
	test_sum_multiples();
	return 0;
}
