#include<stdio.h>
//Simple program to understand the use of strings. 
void printString(char arr[]);
int main(){
char firstName[] = "Manan";
char lastName[] = "Joshi";
printString(firstName);
printString(lastName);

printf("OVER HERE WILL SEE THE USE OF THE STRING FORMAT SPECIFIER\n");
scanf("%s%s", firstName, lastName); /*Ensure to write firstName and lastName without including spaces in between them as  
scanf() can't input multi-word string with spaces. */
printf("AFTER YOUR NAME IS ASKED , IT WILL BE PRINTED AS SHOWN\n");
printf("%s\n%s\n", firstName, lastName);
return 0;
}
void printString(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
    printf("%c", arr[i]);
    }
    printf("\n");
}
