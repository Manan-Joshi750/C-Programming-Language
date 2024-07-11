#include <stdio.h>
/* PROGRAM TO SWAP TWO NUMBERS:-
i)SIMPLY WITH THE HELP OF TWO VARIABLES.
ii)WITH THE HELP OF POINTERS IN A FUNCTION CALL("CALL BY REFERENCE"). */

void _swap( int *a, int *b);
//FROM LINE NO. 10 TO 24, PART i) IS BEING PERFORMED.
//AND LINES 10, 26, 27, 30 TO 35 ARE PART WHERE ii) IS BEING PERFORMED.
int main() {
    int a, b, x=3, y=5;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);
    // Swapping without a third variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);

    _swap (&x, &y);
    printf("x = %d & y = %d\n", x , y);
    return 0;
}
//CALL BY REFERENCE
void _swap( int *a, int *b){
int t = *a;
*a = *b;
*b = t;
}