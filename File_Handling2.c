#include<stdio.h>
//READING FROM A FILE.
//WRITING TO A FILE.
int main(){
    FILE *fptr;
    fptr = fopen("test.c", "r");
//Syntax of reading from a file.
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
    fclose(fptr);
    printf("After reading all the characters present in the file: test.c ; when you will open it, you will see that it now contains a new word.");

    fptr = fopen("test.c", "w");
//Syntax of writing to a file.
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'g');
    fprintf(fptr, "%c", 'o');

    fclose(fptr);
    return 0;
}
