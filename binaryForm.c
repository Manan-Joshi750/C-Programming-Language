#include <stdio.h>
//Recursive function to find the binary representation of a given integer.
void decimalToBinary(int num) {
    int binary[32];
    int i = 0;
    if (num == 0) {
        printf("Binary representation: 0\n");
        return;
    }
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    // Print the binary representation in reverse order
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    decimalToBinary(number);

    return 0;
}
