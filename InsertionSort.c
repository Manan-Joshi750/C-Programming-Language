#include <stdio.h>
//Implementing insertion sort in c 
void insertionSort(int arr[], int size) {
    int key ,j;
    for (int i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    insertionSort(arr, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}