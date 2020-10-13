#include<iostream>
#include<math.h>

using namespace std;

#define ll long long

bool prime(ll n)
{
	if(n<=1)
		return false;
	if(n==2||n==3||n==5)
		return true;
	if(n%2==0||n%3==0)
		return false;
	for(int i=5;i<=sqrt(n);i+=6)
	{
		if(n%i==0||n%(i+2)==0)
			return false;
	}
	return true;
}

int main()
{
	ll n;//no.of test cases
	cin>>n;
	
	while(n--)
	{
		ll n1,n2;//two numbers
		cin>>n1>>n2;
		
		for(ll i=n1;i<=n2;i++)
		{
			if(prime(i))
				cout<<i<<endl;
		}
		
	}
	
	return 0;
}
