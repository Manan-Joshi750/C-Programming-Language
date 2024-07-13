#include <stdio.h>
//program to print a triangular star pattern using NESTED LOOPS.(EACH ROW CONTAINING CONTINOUS NUMBER OF STARS).
int main() {
    int n; // Number of rows in the triangle
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &n);
    // Loop for each row
    for (int i = 1; i <= n; i++) {
        // Loop to print spaces before the stars
        for (int j = 1; j <= n - i ; j++) {
            printf(" ");
        }
       // Loop to print the stars
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
       // Move to the next line for the next row
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>
// //program to print a triangular star pattern using NESTED LOOPS.(EACH ROW CONTAINING ODD NUMBER OF STARS.)
// int main() {
//     int n; // Number of rows in the triangle
//     printf("Enter the number of rows for the triangle: ");
//     scanf("%d", &n);
//     // Loop for each row
//     for (int i = 1; i <= 2*n; i= i + 2) {
//         // Loop to print spaces before the stars
//         for (int j = 1; j <= 2*n - i; j++) {
//             printf(" ");
//         }
//        // Loop to print the stars
//         for (int k = 1; k <= i; k++) {
//             printf("* ");
//         }
//        // Move to the next line for the next row
//         printf("\n");
//     }
//     return 0;
// }

