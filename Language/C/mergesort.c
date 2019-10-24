#include <stdio.h>
typedef long long int lld;

void merge(lld a[], lld mid, lld l, lld r);

// l is for left index and r is for right index
void mergesort(lld a[], lld l, lld r)
{

    if (l < r) //it shows that atleast two elements in arrays
    {
        lld mid = (l + r) * 0.5;

        mergesort(a, l, mid);
        mergesort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

// Merges two subarrays of a[].
// First subarray is a[l..mid]
// Second subarray is a[mid+1..r]
void merge(lld a[], lld l, lld mid, lld r)
{
    lld i, j, k, l1 = mid - l + 1, l2 = r - mid;

    //temporary arrays
    lld left[l1], right[l2];

    //storing initial data in left[] and right[]
    for (i = 0; i < l1; i++)
        left[i] = a[l + i];

    for (i = 0; i <= l2; i++)
        right[i] = a[mid + 1 + i];

    i = 0, j = 0, k = l;

    while (i < l1 && j < l2)
    {

        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
            k++;
        }
        else
        {
            a[k] = right[j];
            j++;
            k++;
        }
    }

    //copy remaining elements from left[] if left
    while (i < l1)
    {
        a[k] = left[i];
        i++;
        k++;
    }

    //copy remaining elements from right[] if left
    while (j < l2)
    {
        a[k] = right[j];
        j++;
        k++;
    }
}

int main()
{

    lld i, size;
    lld a[100003];

    //size= size of the array
    scanf("%lld", &size);

    //input of the unsorted array
    for (i = 0; i < size; i++)
        scanf("%lld", &a[i]);

    lld l = 0, r = size - 1;

    mergesort(a, l, r);

    //printing the sorted array
    for (i = 0; i < size; i++)
        printf("%lld ", a[i]);

    printf("\n");

    return 0;
}