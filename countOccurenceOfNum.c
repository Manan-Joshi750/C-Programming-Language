#include <stdio.h>
int main() {
    int n, x;
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

    // Prompt user for the number 'x' to search for
    printf("Enter the number 'x' to search for: ");
    scanf("%d", &x);

    // Initialize a variable to keep track of the count
    int count = 0;

    // Iterate through the array and count the occurrences of 'x'
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    // Display the result
    printf("Number %d occurs %d times in the array.\n", x, count);
    return 0;
}
