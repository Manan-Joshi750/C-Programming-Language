#include<stdio.h>
#include<math.h>
// Program to check whether the given number is prime or not.
int main(){
int a;
printf("enter a : ");
scanf("%d", &a);

for(int i=2; i <= pow(a , 0.5); i++){
if(a % i == 0){
    printf("NOT PRIME\n");
    exit(0); 
}
}
printf("YAY WE GOT THE PRIME!");
}