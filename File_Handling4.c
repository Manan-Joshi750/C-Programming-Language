#include <stdio.h>
//PROGRAM TO READ A STRING FROM A FILE AND OUTPUT IT TO THE USER. 
int main() {
    FILE *fptr;
    fptr = fopen("string.c", "r"); 
    if (fptr == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    char readstr[500];
    if (fgets(readstr, sizeof(readstr), fptr) != NULL) { //We can either write sizeof(readstr) or directly the size of the string which over here is 500.
        printf("THE STRING WHICH WE READ WAS:\n");
        puts(readstr);
        printf("\n");
    } else {
        printf("Error reading the string from the file.\n");
    }
    fclose(fptr);

    //Some other code to do the same as done above.
    fptr = fopen("string.c", "r"); 
    printf("NOW THE SAME STRING IS GOING TO PRINT, BUT THIS TIME, IT'S BECAUSE OF A DIFFERENT CODE !!\n");
    char ch;
    ch = fgetc(fptr);
    while(ch != EOF){
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);

    return 0;
}
