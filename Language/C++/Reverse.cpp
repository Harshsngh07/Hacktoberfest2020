//A CPP Program to find the reverse of any given integer.

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long n;
	    cin>>n;
	    long reverse=0;
          while(n>0)    
          {
             reverse=reverse*10+n%10;    
             n=n/10;    
          } 
          cout<<reverse<<"\n";
	}
	return 0;
}