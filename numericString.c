#include <stdio.h>
//Function to return string containing only numeric characters from a string of both characters and digits and then returning the sum of those digits as well.
long int foo() {
    char input[100]; // assuming a maximum sequence length of 100 characters
    printf("Enter a sequence of alphanumeric characters: ");
    scanf("%s", input);
    long int number = 0;
    // Loop through the input characters
    for (int i = 0; input[i] != '\0'; i++) {
        // Check if the character is a numeric digit
        if (input[i] >= '0' && input[i] <= '9') {
            number = number * 10 + (input[i] - '0');
        }
    }
    return number;
}
int sumOfDigits(long int n) {
    int sum = 0;
    // Compute sum of digits
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    long int result = foo();
    printf("Number formed by numeric characters: %ld\n", result);
    int digitSum = sumOfDigits(result);
    printf("Sum of digits: %d\n", digitSum);
    return 0;
}
