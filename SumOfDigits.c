#include <stdio.h>
// Function to find the sum of digits of a number
int sumOfDigits(int number) {
    int sum = 0;
    
    // Iterate through each digit of the number
    while (number != 0) {
        // Get the last digit of the number.
        int digit = number % 10;
        
        // Add the digit to the sum
        sum += digit;
        
        // Remove the last digit from the number
        number /= 10;
    }
    
    return sum;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int result = sumOfDigits(num);
    
    printf("The sum of digits of %d is %d\n", num, result);
    
    return 0;
}
