/**
 * C program to sort an array using pointers.
 */

#include <stdio.h>

#define MAX_SIZE 100


/* Function declaration */
void inputArray(int * arr, int size);
void printArray(int * arr, int size);

/* Sort function declaration */
int sortAscending(int * num1, int * num2);
int sortDescending(int * num1, int * num2);

void sort(int * arr, int size, int (* compare)(int *, int *));



int main()
{
    int arr[MAX_SIZE];
    int size;

    /*
     * Input array size and elements.
     */
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    inputArray(arr, size);


    printf("\n\nElements before sorting: ");
    printArray(arr, size);


    // Sort and print sorted array in ascending order.
    printf("\n\nArray in ascending order: ");
    sort(arr, size, sortAscending);
    printArray(arr, size);


    // Sort and print sorted array in descending order.
    printf("\nArray in descending order: ");
    sort(arr, size, sortDescending);
    printArray(arr, size);


    return 0;
}



/**
 * Function to take input in array elements.
 *
 * @arr     Array to store input.
 * @size    Size of the array.
 */
void inputArray(int * arr, int size)
{
    // Pointer to last element of array
    int * arrEnd = (arr + size - 1);


    // (arr++) Input in current array element and move to next element.
    // Till last array element (arr <= arrEnd)
    while(arr <= arrEnd)
        scanf("%d", arr++);
}




/**
 * Function to print all array elements.
 *
 * @arr     Array to print.
 * @size    Size of the array.
 */
void printArray(int * arr, int size)
{
    // Pointer to last element of array
    int * arrEnd = (arr + size - 1);


    // *(arr++) Print current array element and move to next element.
    // Till last array element (arr <= arrEnd)
    while(arr <= arrEnd)
        printf("%d, ", *(arr++));
}



/**
 * Function to compare two succesive elements.
 * The function returns difference of first and second integer.
 *
 * @num1    First integer to compare.
 * @num2    Second integer to compare.
 *
 * @return  Difference of num1 and num2.
 */
int sortAscending(int * num1, int * num2)
{
    return (*num1) - (*num2);
}



/**
 * Function to compare two successive elements.
 * The function returns difference of second and first parameter.
 *
 * @num1    First integer to compare.
 * @num2    Second integer to compare.
 *
 * @return  Difference of num2 and num1.
 */
int sortDescending(int * num1, int * num2)
{
    return (*num2) - (*num1);
}



/**
 * Function to sort an array in ascending or descending order.
 * This function is used to sort array in both order ascending or
 * descending.
 *
 * @arr     Array to sort.
 * @size    Size of the array.
 * @compare Function pointer returning integer and takes two int *
 *          parameter. The function is called to get arrangement of
 *          two successive array elements.
 */
void sort(int * arr, int size, int (* compare)(int *, int *))
{
    // Pointer to last array element
    int * arrEnd  = (arr + size - 1);

    // Pointer to current array element
    int * curElem = arr;
    int * elemToSort;


    // Iterate over each array element
    while(curElem <= arrEnd)
    {
        elemToSort = curElem;


        // Compare each successive elements with current element
        // for proper order.
        while(elemToSort <= arrEnd)
        {
            /*
             * Compare if elements are arranged in order
             * or not. If elements are not arranged in order
             * then swap them.
             */
            if(compare(curElem, elemToSort) > 0)
            {
                *curElem    ^= *elemToSort;
                *elemToSort ^= *curElem;
                *curElem    ^= *elemToSort;
            }

            elemToSort++;
        }

        // Move current element to next element in array.
        curElem++;
    }
}
