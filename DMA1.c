#include<stdio.h>
#include<stdlib.h>
//PROGRAM TO UNDERSTAND THE CONCEPT OF USING 4 DMA FUNCTIONS : malloc(), calloc(), free(), realloc().
int main(){
    int *mptr;
    mptr = (int *)malloc(5 * sizeof(int));
    mptr[0] = 1;
    mptr[1] = 3;
    mptr[2] = 5;
    mptr[3] = 7;
    mptr[4] = 9;
    for(int i=0; i<5; i++){
        printf("%d\t", mptr[i]);
    }
    printf("\n");

    int *cptr;
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    cptr = (int *)calloc(n, sizeof(int));
    for(int i=0; i<n; i++){
        printf("%d\t", cptr[i]);
    }
    printf("\n");

    //So we are going to free the memory allocated with the help of calloc() in the above code.
    free(cptr);
    int m;
    printf("Enter m : ");
    scanf("%d", &m);
    cptr = (int *)calloc(m, sizeof(int));//memory which is going to become free = n - m.
    for(int i=0; i<m; i++){
        printf("%d\t", cptr[i]);
    }
    printf("\n");

    //Now we are going to allocate memory for a numbers and then dynamically increasing it to b numbers.
    int *rptr;
    int a;
    printf("Enter a : ");
    scanf("%d", &a);
    rptr = (int *)calloc(a, sizeof(int));
    printf("Enter %d numbers : ", a);
    for(int i=0; i<a; i++){
        scanf("%d", &rptr[i]);
    }
    int b;
    printf("Enter b : ");
    scanf("%d", &b);
    rptr = realloc(rptr, b);
    printf("Enter %d numbers now : ", b);
    for(int i=0; i<b; i++){
        scanf("%d", &rptr[i]);
    }
    //Print those numbers.
    for(int i=0; i<b; i++){
        printf("Number %d is %d\n", i, rptr[i]);
    }
    return 0;
}