/*Heap sort is a comparison based sorting technique based on Binary Heap data structure. 
It is similar to selection sort where we first find the maximum element and place the maximum element at the end. We repeat the same process for the remaining elements*/
#include<stdio.h>  
int temp;  
/*To heapify a subtree rooted with node i which is 
an index in arr[]. n is size of heap*/
void heapify(int arr[], int size, int i)  
{  
int largest = i;    
int left = 2*i + 1;    
int right = 2*i + 2;    
if (left < size && arr[left] >arr[largest])  
largest = left;  
if (right < size && arr[right] > arr[largest])  
largest = right;  

if (largest != i)  
{  
temp = arr[i];  
    arr[i]= arr[largest];   
    arr[largest] = temp;  
heapify(arr, size, largest);  
}  
}  
void heapSort(int arr[], int size)  
{  
int i;  
for (i = size / 2 - 1; i >= 0; i--)  
heapify(arr, size, i);  
for (i=size-1; i>=0; i--)  
{  
temp = arr[0];  
    arr[0]= arr[i];   
    arr[i] = temp;  
heapify(arr, i, 0);  
}  
}  
void main()  
{  
int arr[] = {1, 10, 2, 3, 4, 1, 2, 100,23, 2};  
int i;  
int size = sizeof(arr)/sizeof(arr[0]);  
heapSort(arr, size);  
printf("printing sorted elements\n");  
for (i=0; i<size; ++i)  
printf("%d\n",arr[i]);  
}
