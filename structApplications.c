#include<stdio.h>
//THIS IS A PROGRAM WHERE WE FIRST CREATED A STRUCTURE TO STORE VECTOR,THEN A FUNCTION TO RETURM THE SUM OF THOSE TWO VECTORS.
//THEN, WITHIN THE SAME CODE, WE ALSO CREATED A STRUCTURE TO STORE A COMPLEX NUMBER.
struct vector{
    int x;
    int y;
};
struct complex{
    int real;
    int imag;
};
void calcSum(struct vector v1, struct vector v2, struct vector sum);
int main(){
    int a,b,c,d;
    printf("\033[1;31m"); // Set text color to red.
    printf("Enter the x component of the vector 1 :\t");
    scanf("%d", &a);
    printf("Enter the y component of the vector 1 :\t");
    scanf("%d", &b);
    printf("Enter the x component of the vector 2 :\t");
    scanf("%d", &c);
    printf("Enter the y component of the vector 2 :\t");
    scanf("%d", &d);
    printf("\033[0m"); // Reset text color to default.
    struct vector v1 = {a,b};
    struct vector v2 = {c,d};
    struct vector sum = {0};
    calcSum(v1, v2, sum);

    struct complex number1 = {a,c};
    struct complex *ptr = &number1;
    printf("\033[1;32m"); // Set text color to green.
    printf("HERE ARE THE DETAILS OF THE COMPLEX NUMBER :\n");
    printf("Real part of the number is :\t%d\n", ptr->real);
    printf("Imaginary part of the number is :\t%d\n", ptr->imag);
    printf("\033[0m"); // Reset text color to default.
    return 0;
}
void calcSum(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("\033[1;33m"); // Set text color to yellow.
    printf("sum of x is :\t%d\n", sum.x);
    printf("sum of y is :\t%d\n", sum.y);
    printf("\033[0m"); // Reset text color to default.
}