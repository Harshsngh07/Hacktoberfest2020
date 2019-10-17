#include<iostream>
using namespace std;
int n=11; // index of matrix....
int a[11][11];
int row,col;
bool ispossible(int row,int col,int n );
bool queen(int row,int col,int n);

int main()
{
	int i,j;
	
	
	
	a[4][4]={0};
	
	if(queen(0,0,n)){
		cout<<"	      *********************************   THE N_QUEEN PROBLEM!!!!!   *****************************\n\n                                                  "; 
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
	
	cout<<"\n                                                  ";
	}
	}
	
}
	
		
		
		
		
	
	


bool queen(int row,int col, int n)
{	
	

	while(col<n)
	{
		
		if(ispossible(row,col,n)==true)
		{
			
			a[row][col]=1;
			cout<<row<<" "<<col<<"                                       \n";
			
			if(row==n-1)
			{
				return true;
			}
			else{
				
					if(queen(row+1,0,n)) // recursive approach
					{
						return true;
						
					}
					else{
						a[row][col]=0;
						col=col+1;
						cout<<"\n                              I N V A L I D !!!!                      \n"; // checks invalid option
					}
				}
		}
		else
		{
			col=col+1;
		}
		
	}
	return false;
	
	
}

 bool ispossible(int l,int m,int n) // function checking queen can be placed or not 
{
//	cout<<"&";
	cout<<l<<" "<<m<<"\n";
	int sum=l+m;
	 int diff;
	
	for(int i=0;i<n;i++)
	{
		
			for(int j=0;j<n;j++)
			{
				if(l>m)
				{
					diff=l-m;
				if(i+j==sum||(i-j)==diff||i==l||j==m)
				{
					if(a[i][j]==1)
					{
						
					
						return false;
					}
				}
				}
				else
				{
							diff=m-l;
				if(i+j==sum||(j-i)==diff||i==l||j==m)
				{
					if(a[i][j]==1)
					{
						
					
						return false;
					}
				}	
				} 
			}
	}

	return true;
		
		
}
