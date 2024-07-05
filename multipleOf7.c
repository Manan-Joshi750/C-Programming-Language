#include<stdio.h>
//Numbers will be taken as input until user enters a multiple of 7.
int main(){
int n;

do{
printf("enter the number : ");
scanf("%d", &n);
printf("%d\n", n);
if( n%7 == 0){
    break;
}
} while(1);
printf("THANK YOU\n");
return 0;
}