/*
Problem statement: 

Sort an array using the Quick sort algorithm.
*/

/* Solution */

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <time.h>
using namespace std;

int findpivot(vector<int> &nums, int i, int j)
{
    //optimization
    int randd = rand() % (j - i + 1) + i;
    swap(nums[j], nums[randd]);
    int piv = nums[j];

    int s = i, f = i;
    while (f < j)
    {
        if (nums[f] <= piv)
            swap(nums[s++], nums[f]);
        f++;
    }
    swap(nums[j], nums[s]);
    return s;
}

void quicksort(vector<int> &nums, int i, int j)
{
    srand(time(0));
    while (i < j) //optimization
    { 
        int pivot = findpivot(nums, i, j);
        quicksort(nums, i, pivot - 1);
        // quicksort(nums, pivot+1, j);
        i = pivot + 1;
    }
}

void sortArray(vector<int> &nums)
{
    if (nums.size() <= 1)
        return;

    //quick sort
    quicksort(nums, 0, nums.size() - 1);
}