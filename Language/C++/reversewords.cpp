#include<bits/stdc++.h>
using namespace std;

void reverse(string &s, int l, int r)
{
	while(l<=r)
	{
		swap(s[l],s[r]);
		l++;
		r--;
		
	}
}
void reversewords(string s)
{
	int n = s.length();
	int start = 0;
	for(int end = 0 ; end < n ; end++)
	{
		if(s[end]==' ')
		{ 
			reverse(s,start,end-1);
			start = end+1;
		}
		
	} 
	
	reverse(s,start,n-1);
	reverse(s,0,n-1);
	cout<<s;
}



int main()
{
	string s;
	getline(cin,s);
	reversewords(s);
	
}
