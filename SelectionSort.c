#include <stdio.h>
//Implementing Selection sort in c.
void selectionSort(int arr[], int size ) {
    int min_idx;
    // One by one move boundary of unsorted subarray
    for ( int i = 0; i < size; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for ( int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
int main() {
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements for the array : \n", size);
    for(int i=0; i<size; i++){
        printf("Enter the element at %d position : ", i);
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
