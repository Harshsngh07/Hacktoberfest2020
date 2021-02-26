//program to demonstrate Bubble Sort in c++
//The array to be sorted is same as the array used in the program to demonstrate Selection Sort
#include<iostream>

using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubblesort(int arr[], int n)
{
	//array is sorted from the end
	for (int t = 0; t < n-1; t++)
	{
		//the maximum element in the array from 0 to n-t-1 is moved to (n-t-1)th position
		for (int i = 0; i < n - t - 1; i++)
		{
			if(arr[i]>arr[i+1])
				swap(&arr[i], &arr[i+1]);
		}
	}
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = { 64, 25, 12, 22, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	bubblesort(arr, n);

	cout << "Sorted array: \n";
	printArray(arr, n);

	return 0;
}