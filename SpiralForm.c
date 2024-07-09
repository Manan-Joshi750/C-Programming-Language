#include <stdio.h>
//Program to print elements in spiral form.
int main() {
    int matrix[10][10];
    int rows, cols;
    printf("Enter number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Elements in spiral form:\n");
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; ++i)
            printf("%d ", matrix[top][i]);
        top++;
        // Print right column
        for (int i = top; i <= bottom; ++i)
            printf("%d ", matrix[i][right]);
        right--;
        // Print bottom row if it's present
        if (top <= bottom) {
            for (int i = right; i >= left; --i)
                printf("%d ", matrix[bottom][i]);
            bottom--;
        }
        // Print left column if it's present
        if (left <= right) {
            for (int i = bottom; i >= top; --i)
                printf("%d ", matrix[i][left]);
            left++;
        }
    }
    return 0;
}
