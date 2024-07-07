#include <stdio.h>
//Rearrange the elements in following order : A[0], A[n-1], A[1], A[n-2], A[2],....., A[n/2], A[n/2 + 1]. 
void rearrangeArray(int arr[], int n) {
    int temp[n];
    int left = 0, right = n - 1;
    int flag = 1;
    for (int i = 0; i < n; i++) {
        if (flag)
            temp[i] = arr[left++];
        else
            temp[i] = arr[right--];

        flag = !flag;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter the element at %d position : ", i);
        scanf("%d", &arr[i]);
    }
    rearrangeArray(arr, n);
    printf("The rearranged array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
