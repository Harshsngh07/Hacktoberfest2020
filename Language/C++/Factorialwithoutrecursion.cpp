/*This program accepts a integer variable as an input, calculates its factorial and then displays the result as output without recursion^/

#include<iostream>
using namespace std;
long int fact(int);
int main()
{
	int n;long int result;
	cout<<"Enter a number ";
	cin>>n;
	result=fact(n);
	cout<<"The factorial of the number "<<n<<" is "<<result;
	return 0;
}
long int fact(int n)
{  long int p=1;
	for(int i=1;i<=n;i++)   //used to find the factorial of number n 
	{
		p=p*i;
	}
	return p;
}
