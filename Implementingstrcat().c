#include <stdio.h>
// Function to implement strcat() function of the string library.
void strcat_custom(char *dest, const char *src) {
    // Move the pointer to the end of the destination string
    while (*dest != '\0') {
        dest++;
    }
    // Copy the source string to the end of the destination string
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    // Add the null terminator to mark the end of the concatenated string
    *dest = '\0';
}
int main() {
    char str1[50];
    printf("Enter the first string : ");
    scanf("%s", str1);

    char str2[20];
    printf("Enter the second string : ");
    scanf("%s", str2);

    strcat_custom(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
