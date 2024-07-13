#include <stdio.h>
//TWO SUM Problem(that is, we need to return the index of those two elements whose sum equals to target(given by the user)).
void twoSum(int arr[], int size, int target) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Indices are: %d and %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    if (!found) {
        printf("No two numbers found that add up to the target.\n");
    }
}
int main() {
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    int target;
    printf("Enter the target sum you want to achieve : ");
    scanf("%d", &target);

    int arr[size];
    printf("Enter %d elements for the array : \n", size);
    for(int i=0; i<size; i++){
        printf("Enter the element at %d position : ", i);
        scanf("%d", &arr[i]);
    }
    twoSum(arr, size, target);

    return 0;
}
