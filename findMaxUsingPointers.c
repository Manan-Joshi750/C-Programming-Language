#include<stdio.h>
//PROGRAM TO FIND THE MAXIMUM OF TWO NUMBERS USING "POINTERS".
int findMaximum(int *num1, int *num2);

int main() {
    int num1, num2;
    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d", &num2);

    int result = findMaximum(&num1, &num2);

    printf("The maximum number is: %d\n", result);
    return 0;
}

int findMaximum(int *num1, int *num2) {
    if (*num1 > *num2) {
        return *num1;
    } else {
        return *num2;
    }
}