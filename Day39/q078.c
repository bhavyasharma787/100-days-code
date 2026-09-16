/*
 * Question 78 (Day 39) - 2D Arrays
 * Statement: Find the sum of main diagonal elements for a square matrix.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     3 3
 *     1 2 3
 *     4 5 6
 *     7 8 9
 *   Output:
 *     15
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int *mat = (int *)malloc((size_t)rows * (size_t)cols * sizeof(int));
    if (mat == NULL) {
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &mat[i * cols + j]) != 1) {
                free(mat);
                return 1;
            }
        }
    }

    int diagLen = (rows < cols) ? rows : cols;
    long long sum = 0;
    for (int i = 0; i < diagLen; i++) {
        sum += mat[i * cols + i];
    }

    printf("%lld\n", sum);
    free(mat);
    return 0;
}
