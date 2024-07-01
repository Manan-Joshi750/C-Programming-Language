#include<stdio.h>
int main()
{
    char ch;
    printf("C program to check given character is digit or not \n");
    printf("Please enter a character: ");
    scanf("%c", &ch);
    if(ch>='0' && ch<='9')
    {
        printf("Given Character is Digit.\n");
    }
    else
    {
        printf("Given Character is Not Digit.\n");
    }
    return(0);
}
