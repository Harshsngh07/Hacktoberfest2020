//0/1 Knapsack using DP
#include<bits/stdc++.h>
using namespace std;
int o1(int n,int m,int W[],int P[])
{
	int p1,p2,i,j;
	int A[n+1][m+1];
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			if(i==0||j==0)
			A[i][j]=0;
			else if(W[i-1]>j)
			A[i][j]=A[i-1][j];
			else
			{
				p1=A[i-1][j-W[i-1]]+P[i-1];
				p2=A[i-1][j];
				A[i][j]=max(p1,p2);
			}
		}
		
	}
	return A[n][m];
}
int main()
{
	int n,m,i,a;
	cin>>n>>m;
	int P[n],W[n];
	for(i=0;i<n;i++)
	{
		cin>>P[i]>>W[i];
	}
	a=o1(n,m,W,P);
	cout<<a<<endl;
}
