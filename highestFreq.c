#include <stdio.h>
#include <string.h>
//PROGRAM TO PRINT THE HIGHEST FREQUENCY CHARACTER IN A STRING.
//The "frequency of a character" in a string refers to how many times a specific character appears or occurs within that string.
int main() {
    char str[100];
    printf("Enter a string :->>\t");
    fgets(str, 100, stdin);

/*In the ASCII character encoding, there are a total of 128 standard characters, 
and the extended ASCII character set includes another 128 characters, for a total of 256. */

    int freq[256] = {0}; // Initialize an array to store character frequencies
    // Calculate character frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') { // Ignore spaces and newline characters
            freq[(int)str[i]]++;// This is used to get the ASCII values of the characters at index i.
        }
    }
    char highestFreqChar = '\0';
    int highestFreq = 0;
    // Find the character with the highest frequency
    for (int i = 0; i < 256; i++) {
        if (freq[i] > highestFreq) {
            highestFreq = freq[i];
            highestFreqChar = (char)i;
        }
    }

    printf("The highest frequency character(s) is/are:->>\t");
    // Print characters with the highest frequency
    for (int i = 0; i < 256; i++) {
        if (freq[i] == highestFreq) {
            printf("%c ", (char)i);
        }
    }
    printf("with frequency %d\n", highestFreq);
    return 0;
}
