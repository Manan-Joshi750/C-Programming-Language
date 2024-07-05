#include<stdio.h>
//Program to check if the given number is a natural number or not.  
int main(){

int num;
printf("enter the number : ");
scanf("%d", &num);

if(num>=1) {
    printf("NATURAL NUMBER\n");
}
else if(num==0) {
    printf("0 IS NEITHER A NATURAL NOR A WHOLE NUMBER\n");
}
else {
    printf("NOT A NATURAL NUMBER");
}
return 0;
}