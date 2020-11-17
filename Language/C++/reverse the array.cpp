Given the size and the elements of array A, print all the elements in reverse order.

Input:
First line of input contains, N - size of the array.
Following N lines, each contains one integer, i{th} element of the array i.e. A[i].

Output:
Print all the elements of the array in reverse order, each element in a new line.

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int * arr = new int (n);
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=n-1;i>=0;i--)
	cout<<arr[i]<<endl;
	return 0;
}