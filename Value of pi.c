//calculating the value of pi upto 4th decimal place
#include<stdio.h>
void main()
{
    double pi,term;
    float sign=1.0;
    for (double i =1; i<1000000;i+=2)
    {
        term=sign/i;    //Generating general term for the calculation of value of pi
        pi+=(term*4.0);
        sign*=-1;       //Getting rid of sign
    }
    printf("The value of pi upto 4th decimal place is : %.4f\n",pi);
}
