#include<stdio.h>
/*To determine whether a number is even or odd
Even -> 1
Odd -> 0
*/
int main(){
int x;
printf("enter a number : ");
scanf("%d", &x);
printf("%d", x % 2 == 0);
return 0;
}