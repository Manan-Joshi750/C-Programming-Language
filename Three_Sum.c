/* 3SUM(Given an integer array nums,
return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.) */
#include<stdio.h>
void threeSum(int arr[], int size){
    int found = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for(int k = j + 1; k < size; k++ ){
            if (arr[i] + arr[j] + arr[k] == 0) {
                if (!found) {
                printf("Triplets are : [ ");
                found = 1;
            }    
                printf("[ %d, %d, %d ] ", arr[i], arr[j], arr[k]);
            }
        }
    }
}
printf("]");    
    if (!found) {
        printf("No triplets found that add up to ZERO. ");
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
    threeSum(arr, size);

    return 0;
}