#include <stdio.h>
#include <string.h>
//PROGRAM TO REMOVE BLANK SPACES IN A STRING.
void removeSpaces(char str[]);
int main() {
    char str[100]; 
    printf("Enter a string:->>\t");
    fgets(str,100,stdin);
    removeSpaces(str);
    printf("String after removing spaces:->>\t%s", str);
    return 0;
}
void removeSpaces(char str[]){
    int len = strlen(str);
    int i, j = 0;
    for (i = 0; i < len; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null-terminate the string at the new end
}
