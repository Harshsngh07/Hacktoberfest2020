// A C++ program to find floor(sqrt(x)
#include<bits/stdc++.h>
using namespace std;

// Returns floor of square root of x
int floorSqrt(int x)
{
	// Base cases
	if (x == 0 || x == 1)
	return x;

	// Do Binary Search for floor(sqrt(x))
	int start = 1, end = x, ans;
	while (start <= end)
	{
		int mid = (start + end) / 2;

		// If x is a perfect square
		if (mid*mid == x)
			return mid;

		// Since we need floor, we update answer when mid*mid is
		// smaller than x, and move closer to sqrt(x)
		if (mid*mid < x)
		{
			start = mid + 1;
			ans = mid;
		}
		else // If mid*mid is greater than x
			end = mid-1;
	}
	return ans;
}

// Driver program
int main()
{
	int x = 11;
	cout << floorSqrt(x) << endl;
	return 0;
}
