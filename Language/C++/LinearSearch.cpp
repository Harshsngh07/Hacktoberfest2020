//C++ Program to print "YES" if an element is present in the array, otherwise print "NO" using Linear Search.

#include <iostream>

using namespace std;

int main()
{
	cout << "Enter the size of the array: ";
	int n; 						// Size of the Array
	cin >> n;
	int s; 	
	int flag = 0;
	int arr[n]; 				//Creating an array

	cout << "Enter the elements of the array: ";
	for(int i = 0; i < n; i++) // Inputing Elements
	{
		cin >> arr[i];
	}
	cout << "Enter the element to search in the array: ";				//Element to be searched in the array
	cin >> s;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == s)
			flag = 1;
	}
	if(flag == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}