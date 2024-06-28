#include <stdio.h>
int main() {
    int element; // Element to be inserted
    int n;
    // Prompt user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    // Declare an array of integers of size n
    int arr[n];
    // Prompt user to input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to be inserted
    printf("Enter the element to insert at the end: ");
    scanf("%d", &element);

    // Insert the element at the end
    arr[n] = element;
    n++; // Increase the size of the array

    // Print the updated array
    printf("Updated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
