/*
 * Question 72 (Day 36) - 2D Arrays
 * Statement: Find the sum of all elements in a matrix.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     2 3
 *     1 2 3
 *     4 5 6
 *   Output:
 *     21
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

    long long sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &mat[i * cols + j]) != 1) {
                free(mat);
                return 1;
            }
            sum += mat[i * cols + j];
        }
    }

    printf("%lld\n", sum);
    free(mat);
    return 0;
}
