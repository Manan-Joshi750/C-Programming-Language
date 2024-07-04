#include <stdio.h>
int main() {
    int n;
    // Prompt user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    // Declare an array of integers of size n
    int arr[n];
    if (n == 0) {
        printf("The array is empty.\n");
        return 1; // Exit with an error code
    }
    // Prompt user to input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest number in the array is: %d\n", largest);
    return 0;
}
