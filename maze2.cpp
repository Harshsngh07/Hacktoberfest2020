#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int a[5][4]={0};
int m1,n1;
int flag;
int m,n;
int p,q;

bool ispossible(int row,int col,int n1);

bool maze(int row,int col,int count);
stack<int>s1,s2;

int main()
{
	m1=5;
	n1=4;
	
	
	s1.push(0);
	s2.push(0);	
	cout<<"Enter matrix\n";
		
	for(int i=0;i<m1;i++)
	{
		for(int j=0;j<n1;j++)
		{
			cin>>a[i][j];
		}
	}
	
	
	cout<<"enter destination\n";
	cin>>p;
	cin>>q;
	a[0][0]=2;
	bool res=maze(0,0,0);

	if(res==true)
	{
		cout<<"maze solved"<<"\n";
	
		while(!s1.empty())
		{
			int i=s1.top();
			s1.pop();
			int j=s2.top();
			s2.pop();
			a[i][j]=2;
		}
		for(int i=0;i<m1;i++)
		{
		for(int j=0;j<n1;j++)
		{
			cout<<a[i][j]<<" ";
			
		}
		cout<<"\n";
		}
	}
	
	else{
		cout<<"maze cannot be solved";
	}
	
	return 0;
}

bool maze(int row,int col,int flag)
{
	int r=row;
	int c=col;
	while(flag==0)
	{
		if(ispossible(r,c,n1))
		{
			s1.push(m);
			s2.push(n);
			cout<<m<<" "<<n<<"\n";
			
			if(m==p && n==q)
			{
				return true;
			}
			else
			{
				bool res=maze(m,n,0);
				 if(res)
				 {
				 	return true;
				 }
				 else
				 {
				 	s1.pop();
				 	s2.pop();
				 	flag=0;
				 	continue;
				 }
			}
		}
		else
		{
			flag=1;
		}
		
		
		
	}
	return false;
}


bool ispossible(int row,int col,int n1)
{
 	m=row;
	n=col;
	
	
	
	if(a[m-1][n+1]==0 && (m-1>=0) && (n+1<n1))
	{
	
		m=m-1;
		n=n+1;
		a[m][n]=-1;
		return true;
	}
	else if(a[m][n+1]==0 && (n+1<n1))
	{  
		n=n+1;
		a[m][n]=-1;
		return true;
		
	}
	else if(a[m+1][n+1]==0 && (m+1<m1) && (n+1<n1))
	{
			m=m+1;
			n=n+1;
			a[m][n]=-1;
			return true;
		
	}
		else if(a[m+1][n]==0 && (m+1<m1))
	{
	
			m=m+1;
			a[m][n]=-1;
			return true;
		
	}
	else if(a[m+1][n-1]==0 && (m+1<m1)&& (n-1>=0))
	{	
		m=m+1;
		n=n-1;
		a[m][n]=-1;
		return true;
		
	}
		else if(a[m][n-1]==0 && (n-1>=0))
	{	
		n=n-1;
		a[m][n]=-1;
		return true;
		
	}
		else if(a[m-1][n-1]==0 && (m-1)>=0 && (n+1>=0))
	{
		m=m-1;
		n=n-1;
		a[m][n]=-1;
		return true;
		
	}
		else if(a[m-1][n]==0 && (m-1)>=0)
	{
	
		m=m-1;
		a[m][n]=-1;
		return true;
		
	}
		else if(a[m-1][n+1]==0 && (m-1>=m1)&& (n+1)<n1)
	{	
		m=m-1;
		n=n+1;
		a[m][n]=-1;
		return true;
		
	}
	else
	{
		return false;
		
	}
}
