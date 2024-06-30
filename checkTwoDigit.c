#include<stdio.h>
/*If a number is greater than 9 and less than 100
OR
Whether a given number is a 2 digit number or not 
*/

int main(){
int x;
printf("enter a number : ");
scanf("%d", &x);
printf("%d\n", x>9 && x<100);
return 0;
}