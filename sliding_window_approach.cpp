#include <iostream>
using namespace std;

int main() {
	int t,n,s;
	cin>>t; // t=number of test cases.

	while(t--)
	{
	    int b=0;
	    int sum=0;
	    int flag=1;
	    cin>>n>>s; // n=size of array and s= given sum
	    int a[n];
	    int i,j;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	   
	    for(i=0;i<n;i++)
	    {
	      
	         sum=sum+a[i];
	        
	        while(sum>s)
	        {  
	            sum=sum-a[b]; // sliding the elements which make the sum greater than the guven sum.
	            b++;
	        }
	       
	       
	           
	        if(sum==s)
	            
	        {
				flag=0;
	            cout<<b+1<<" "<<i+1<<"\n"; // displays the first and last index of the subarray with the given sum
	            break;
	        }
	        
	        
	   
	    }
	    if(flag==1)
	    {
	        cout<<"-1"<<"\n"; //returns -1 if no such subarray is found.
	    }
	    
	}
	return 0;
}
