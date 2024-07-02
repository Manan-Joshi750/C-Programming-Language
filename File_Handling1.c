#include <stdio.h>
//PROGRAM TO CHECK WHETHER A FILE EXISTS OR NOT.
int main() {
    FILE *fptr;
    printf("Enter the fileName you want to check : \n");
    char fileName[51]; // Increased the size by 1 to accommodate the null terminator
    fgets(fileName, sizeof(fileName), stdin);
    // Remove the newline character from fileName
    size_t len = strlen(fileName);
    if (len > 0 && fileName[len - 1] == '\n') {
        fileName[len - 1] = '\0';
    }

    fptr = fopen(fileName, "r");
    if (fptr == NULL) {
        printf("File does not exist.\n");
    } else {
        printf("File exists!!\n");
        fclose(fptr);
    }
    return 0;
}
