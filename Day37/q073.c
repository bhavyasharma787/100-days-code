/*
 * Question 73 (Day 37) - 2D Arrays
 * Statement: Find the sum of each row of a matrix and store it in an array.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     2 3
 *     1 2 3
 *     4 5 6
 *   Output:
 *     6 15
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int *mat = (int *)malloc((size_t)rows * (size_t)cols * sizeof(int));
    long long *rowSums = (long long *)malloc((size_t)rows * sizeof(long long));
    if (mat == NULL || rowSums == NULL) {
        free(mat);
        free(rowSums);
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        long long sum = 0;
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &mat[i * cols + j]) != 1) {
                free(mat);
                free(rowSums);
                return 1;
            }
            sum += mat[i * cols + j];
        }
        rowSums[i] = sum;
    }

    for (int i = 0; i < rows; i++) {
        if (i > 0) {
            putchar(' ');
        }
        printf("%lld", rowSums[i]);
    }
    putchar('\n');

    free(mat);
    free(rowSums);
    return 0;
}
