#include <iostream>

using namespace std;

int binarySearch(int arr[], int length, int value)
{
    int left = 0, right = length-1, middle;
    while (right >= left)
    {
        middle = (left + right)/2;
        if (arr[middle] > value)
            right = middle-1;

        else if (arr[middle] < value)
            left = middle+1;
            
        else return middle;
    }
    return -1;
}

int main()
{
    int arr[] = {120, 230, 250, 370, 400, 500};
    cout << binarySearch(arr, 6, 120) << endl;
    cout << binarySearch(arr, 6, 250) << endl;
    cout << binarySearch(arr, 6, 400) << endl;
    cout << binarySearch(arr, 6, 230) << endl;
    cout << binarySearch(arr, 6, 500) << endl;
}

