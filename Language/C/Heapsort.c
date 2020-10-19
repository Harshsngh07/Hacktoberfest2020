//Implementation of heap sort
#include <stdio.h>

int n;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void print(int arr[], int l, int r) {
	int i;
    for(i=l; i<=r; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void heapSort(int arr[], int n) {
	int i;
	for(i=(n/2)-1; i>=0; i--) {
		heapify(arr, n, i);
	}
	for(i=n-1; i>0; i--) {
		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
	}
}

void heapify(int arr[], int n, int i) {
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n && arr[l]>arr[largest])
		largest=l;
	if(r<n && arr[r]>arr[largest])
		largest=r;
	if(largest!=i) {
		swap(&arr[i], &arr[largest]);
		heapify(arr, n, largest);
	}
}

void main() {
	
    int i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Unsorted array : ");
    print(arr,0, n-1);
    heapSort(arr, n);
    printf("Sorted array : ");
    print(arr,0, n-1);
    
}
