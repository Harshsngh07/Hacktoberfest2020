//Code to reverse a number

#include<iostream>

using namespace std;

int main()
{
	//long long t;
	//cin>>t;
	//while(t--){
		long long n,n1=0;
		//cin>>n;
		n=134;
		while(n){
			n1=(n1*10)+(n%10);
			n=n/10;
		}
		cout<<n1<<"\n";
		
	//}
	return 0;
}
