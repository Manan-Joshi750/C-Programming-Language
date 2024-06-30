#include <stdio.h>
//Program to print all composite numbers between 1 and n.
int main() {
    int n;
    printf("Enter a number upto which you want to find the composite numbers : ");
    scanf("%d", &n);

    printf("Composite numbers between 1 and %d are: ", n);
    for (int i = 4; i <= n; ++i) { //Loop begins from 4 as 1,2,3 are not composite numbers.
        int flag = 0; //flag is used to determine whether a number is composite or not. 
        for (int j = 2; j <= i / 2; ++j) { //this loop is for checking the number of divisiors of each number in the range of 1 to n.
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
