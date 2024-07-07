#include <stdio.h>
// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not a prime number
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}
// Function to check if a number can be expressed as the sum of two prime numbers
int isSumOfPrimes(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            printf("%d = %d + %d\n", num, i, num - i);
            return 1; // It is a sum of two prime numbers
        }
    }
    return 0; // It is not a sum of two prime numbers
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isSumOfPrimes(number)) {
        printf("%d can be expressed as the sum of two prime numbers.\n", number);
    } else {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", number);
    }

    return 0;
}
