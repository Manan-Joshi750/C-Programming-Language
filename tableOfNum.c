#include<stdio.h>
// print the table of a number input by a user and reverse of the table as well.
int main(){
int n;
printf("enter number :");
scanf("%d", &n);

for(int i=1; i<=10; i++){
    printf("%d\n", n*i);
}

for(int i=10; i>=1; i--){
    printf("%d\n", n*i);
}
return 0;
}