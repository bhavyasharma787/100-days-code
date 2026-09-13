/*
 * Question 71 (Day 36) - 2D Arrays
 * Statement: Read and print a matrix.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     2 2
 *     1 2
 *     3 4
 *   Output:
 *     1 2
 *     3 4
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

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j > 0) {
                putchar(' ');
            }
            printf("%d", mat[i * cols + j]);
        }
        putchar('\n');
    }

    free(mat);
    return 0;
}
