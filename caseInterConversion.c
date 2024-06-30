#include <stdio.h>
//PROGRAM TO CONVERT ALL LOWERCASE LETTERS TO UPPERCASE AND VICE VERSA.
void convertCase(char *str);
int main() {
    char str[100];
    printf("Enter a string:->>\t");
    fgets(str, 100, stdin);
    // Remove the newline character if it's present
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    convertCase(str);
    printf("Converted string:->>\t%s", str);
    return 0;
}
void convertCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert uppercase to lowercase
            str[i] = str[i] + 32;
        }
    }
}
