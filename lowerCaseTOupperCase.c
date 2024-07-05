#include<stdio.h>
#include<string.h>
//Function to convert all lowercase VOWELS to uppercase in a string.
void convertVowels(char str[]);
int main(){
    printf("Enter the string :->>\t");
    char str[50];
    fgets(str, 50, stdin);

    convertVowels(str);
}
void convertVowels(char str[]){
    char newstr[50];
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str[i] = str[i] - 32;// this is done as ASCII value of 'a' = 97 and of 'A' = 65 , so 97-65 = 32.
        }
        strcpy(newstr, str);
    }
    printf("Modified string is:->>\t");
    puts(newstr);
}

// #include <stdio.h>
// #include <string.h>
// //PROGRAM TO DO THE SAME AS DONE ABOVE.
// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     gets(str);  // Input the string (unsafe, consider using fgets)
    
//     int i;
//     for (i = 0; str[i] != '\0'; i++) {
//         // Check if the character is a lowercase vowel
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
//             // Convert the lowercase vowel to uppercase
//             str[i] = str[i] - 32;
//         }
//     }
    
//     printf("String with lowercase vowels converted to uppercase: %s\n", str);
    
//     return 0;
// }
