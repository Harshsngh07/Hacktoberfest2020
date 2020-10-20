#include<bits/stdc++.h>
using namespace std;

int func(int x, int y)
{
	int ctr=0;
	while(y>x)
	{
		if(y%2!=0)
		{
			y++;
			ctr++;
		}
		y=y/2;
		ctr++;
	}
	if(y==x)
	return ctr;
	else
	ctr=ctr+x-y;
	return ctr;
		
	
	
}



int main()
{
	int x,y;
	cin>>x>>y;
	cout<<func(x,y)<<endl;
}
