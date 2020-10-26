//This code is used for finding value of Sin X using Taylor's series, where X and number of terms of the series to be calculated are given by the user


#include <stdio.h>

int factorial(int fj);
float power(float fx, int fj);
int main()
{
    float x, x1, sum = 0.0f;
    int i, lim, j = 0;

    printf("\n\t Finding value of Sin X using Taylor's series : ");
    printf("\n\t Enter X (deg): ");
    scanf("%f", &x);
    printf("\n\t Enter the limit upto which you want to expand the series: ");
    scanf("%d", &lim);
    x1 = x;
    x = x * (3.1415 / 180);
    // conversion of degree to radian
    for (i = 0; i < lim; i++)
    {
        j = 2 * i + 1;
        if (i % 2 == 0)
        // add_for_even_term
        {
            sum = sum + power(x, j) / factorial(j);
        }
        else
        // subtract_for_odd_term
        {
            sum = sum - power(x, j) / factorial(j);
        }
    }

    printf("\n\t Sin(%0.1f) = %f", x1, sum);
    // display result upto first decimal place

    return 0;
}
int factorial(int fj)
{
    //find factorial
    int i, fac = 1;
    for (i = 1; i <= fj; i++)
    {
        fac = fac * i;
    }
    return fac;
}
float power(float fx, int fj)
{
    //find the number raised to a power
    float pow = 1.0;
    int i = 0;
    for (i = 0; i < fj; i++)
    {
        pow = fx * pow;
    }
    return pow;
}
