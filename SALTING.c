#include<stdio.h>
#include<string.h>
// PROGRAM TO FIND THE "SALTED FORM" OF A PASSWORD.
/* Now, salting is a technique with the help of which passwords are secured. Salt is basically a string which we put randomly in a password(it is decided 
 by the company where to put the salt in the password). */
void salting(char password[], char salt[], int position);
int main() {
    printf("Please enter your password:->>\t");
    char password[50];
    scanf("%s", password);

    printf("Now, kindly enter the salt you want to get added in your password:->>\t");
    char salt[10];
    scanf("%s", salt);

    int position;
    printf("Enter the position (0-based index) to insert the salt into the password:->>\t");
    scanf("%d", &position);

    if (position < 0 || position > strlen(password)) {
        printf("Invalid position. Please choose a valid position between 0 and %lu.\n", strlen(password));
    } else {
        salting(password, salt, position);
    }
    return 0;
}
void salting(char password[], char salt[], int position) {
    char newpassword[100];

    if (position < strlen(password)) {
        strncpy(newpassword, password, position);
        newpassword[position] = '\0'; // Null-terminate the string at the desired position
        strcat(newpassword, salt);
        strcat(newpassword, password + position); // Concatenate the remaining password
    } else {
        strcpy(newpassword, password); // If position is at the end, just append the salt
        strcat(newpassword, salt);
    }
    printf("The Salt you entered was %s, and thus, the new password is:->>\t", salt);
    puts(newpassword);
}

