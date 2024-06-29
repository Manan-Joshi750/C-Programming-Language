#include <stdio.h>
//Implementing bubble sort in c.
void bubbleSort(int array[], int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements if they are in the wrong order
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
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
    bubbleSort(arr, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}