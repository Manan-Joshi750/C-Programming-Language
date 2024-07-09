#include<stdio.h>
#include<math.h>
void calculateSqrt(int n);
// Function to calculate the square root of a number given by the user.
int main(){
int n;
printf("enter n : ");
scanf("%d", &n);

calculateSqrt(n);
return 0;
}

void calculateSqrt(int n){
if (n < 0) {
        printf("Error: Cannot find the square root of a negative number.\n");
    } else {
        double squareRoot = sqrt(n);
        printf("Square root is: %f\n", squareRoot);
    }
}