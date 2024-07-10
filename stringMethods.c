#include<stdio.h>
#include<string.h>//this header file is required for the use of standard libraray functions of strings.
//C PROGRAM SHOWING THE USE OF SIX MAIN LIBRARY FUNCTIONS OF STRINGS:-
/*1.strlen(str); 2.strcpy(newstr, oldstr); 3.strcat(firststr, secstr); 4.strcmp(firststr, secstr); 5.strncpy(firststr, secstr, limit);
6.strncat(firststr, secstr, limit).*/
int main(){
char name[] = "manan";
int length = strlen(name);
printf("length is : %d\n", length);

char oldstr[] = "Hi World.";
char newstr[] = "What's Up, World!!";
strcpy(oldstr, newstr);
puts(oldstr);

char firststr[50] = "MANAN ";//always mention the size of the string in which you are going to concatenate both the strings.
char secstr[] = "JOSHI";
strcat(firststr, secstr);
puts(firststr);

char thirdstr[] = "Apple";//strcmp compares on the basis of ASCII values of the characters. Like of 'A' is 65 and of 'B' is 66.
char forstr[] = "Banana";
printf("%d\n", strcmp(thirdstr, forstr));// so, value of A - value of B i.e., 65-66 = -1.
printf("%d\n", strcmp(forstr, thirdstr));// so, value of B - value of A i.e., 66-65 = 1.

char fifstr[] = "Mango";
char sixstr[] = "rriages";
char sevstr[50]; char eigstr[50];
//strncpy copies only a limited part of one string into another string.
strncpy(sevstr, fifstr, 2);// sevstr contains Ma.
sevstr[2] = '\0';// Null-terminate the string at the desired position.
strncpy(eigstr, sixstr, 6);// eigstr contains rriage.
eigstr[6] = '\0';// Null-terminate the string at the desired position.
strcat(sevstr, eigstr);
puts(sevstr);

char ninstr[50] = "Hel";
char tenstr[] = "lotus";
strncat(ninstr, tenstr, 2);
puts(ninstr);
return 0;
}