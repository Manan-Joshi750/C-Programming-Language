#include<stdio.h>
/*PRINT 'n' TERMS OF THE FIBONACCI SEQUENCE( in which every term is the sum of previous two terms).
THE SEQUENCE IS : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, .... */
int main(){
int n;
printf("enter n : ");
scanf("%d", &n);    
int fib[n];
fib[0] = 0;
fib[1] = 1;

for(int i=2; i<=n; i++){
    fib[i] = fib[i-1] + fib[i-2];
}
printf("Required Fibonacci Sequence is : ");
for(int j=0; j<=n; j++){
    printf("%d ", fib[j]);
}
printf("\n");
return 0;
}