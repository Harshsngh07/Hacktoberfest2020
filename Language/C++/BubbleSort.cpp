//Bubble Sort in CPP (arrange array elements in ascending order)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int a[], int n)
{
    int round;
    for (int round = 1; round <= n - 1; round++)
    {
        int flag = 1;
        for (int i = 0; i <= n - 1 - round; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]); //swap elements if a[i] is greater than a[i+1]
                flag = 0;
            }
        }
        if (flag == 1)
            return; // return if no swapping is done in a round
    }
}
int main()
{
    int n;
    cout << "Enter size of array";
    cin >> n;
    int a[n];
    cout << "Enter elements of array";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bubbleSort(a, n); //Function calling
    for (int i = 0; i < n; i++)
        cout << a[i] << " "; //Print array after sorting
}