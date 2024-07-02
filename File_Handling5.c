#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//PROGRAM TO REPLACE THE STRING IN A FILE WITH THE NUMBER OF VOWELS IN THAT STRING.
int countVowels(char *str) {
    int count = 0;
    while (*str) {
        char c = *str;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
        str++;
    }
    return count;
}
int main() {
    FILE *fptr1, *fptr2;
    char fileName[50];
    char data[1000];
    printf("Enter the file name:->>\t");
    scanf("%s", fileName);
    // Open the input file for reading
    fptr1 = fopen(fileName, "r");
    if (fptr1 == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }
    // Read the string from the file
    if (fgets(data, sizeof(data), fptr1) == NULL) {
        printf("Unable to read from the file.\n");
        fclose(fptr1);
        return 1;
    }
    // Count the number of vowels
    int vowelCount = countVowels(data);
    // Close the input file
    fclose(fptr1);
    // Open the input file again for writing
    fptr2 = fopen(fileName, "w");
    if (fptr2 == NULL) {
        printf("Unable to open the file for writing.\n");
        return 1;
    }
    // Write the count of vowels to the file
    fprintf(fptr2, "%d", vowelCount);
    // Close the output file
    fclose(fptr2);

    printf("Data replaced with the count of vowels in the file.\n");
    return 0;
}
