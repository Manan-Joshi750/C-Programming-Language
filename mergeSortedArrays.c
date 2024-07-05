#include <stdio.h>
//Merging two sorted arrays such hat the merged array is also sorted. 
int main() {
    int size1, size2;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr1[size1 + size2], arr2[size2];
    printf("Enter elements of the first array (in sorted order):\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of the second array (in sorted order):\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int i = size1 - 1, j = size2 - 1, k = size1 + size2 - 1;
    // Merge the arrays in sorted order
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k--] = arr1[i--];
        } else {
            arr1[k--] = arr2[j--];
        }
    }
    // Copy remaining elements from arr2 to arr1
    while (j >= 0) {
        arr1[k--] = arr2[j--];
    }
    printf("Merged Array in Sorted Order:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", arr1[i]);
    }
    return 0;
}
