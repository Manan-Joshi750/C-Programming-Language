#include <stdio.h>
//PROGRAM TO PRINT ALL LETTERS IN ENGLISH ALPHABET USING A POINTER.
int main() {
    char start = 'a';
    char end = 'z';
    char *ptr = &start;

    printf("Letters in the English alphabet using a pointer:\n");

    while (*ptr <= end) {
        printf("%c ", *ptr);
        (*ptr)++; // Increment the character pointed to by ptr
    }

    printf("\n");
    return 0;
}
