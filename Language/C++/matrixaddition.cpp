#include<iostream>
using namespace std;
int main()
{
	int p,q,i,j,l,a,b;
	int A[10][10],B[10][10];
	cout<<"Enter Number of rows"<<endl;
	cin>>p;
	cout<<"Enter Number of coloumns"<<endl;
	cin>>q;
	cout <<endl<<endl;
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			cout<<"Enter the value of A"<<"["<<i<<"]"<<"["<<j<<"] ";
			cin>>A[i][j];
		}
		cout<<"\n";
	}
	cout<<"Enter Number of rows"<<endl;
	cin>>a;
	cout<<"Enter Number of coloumns"<<endl;
	cin>>b;
	cout <<endl<<endl;
	if(p==a&&q==b)
	{
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cout<<"Enter the value of B"<<"["<<i<<"]"<<"["<<j<<"] ";
			cin>>B[i][j];
		}
		cout <<"\n";
	}
}
if(p==a&&q==b)
{
        for(i=0;i<a;i++)
       {
			for(j=0;j<b;j++)
			{
				cout<<A[i][j]+B[i][j];
				cout<<"\t";
			}
			cout<<"\n";
		}
}	
else
{
	cout <<"Addition is not possible";
}
return 0;
}
