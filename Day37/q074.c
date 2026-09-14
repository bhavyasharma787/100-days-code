/*
 * Question 74 (Day 37) - 2D Arrays
 * Statement: Find the transpose of a matrix.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     2 3
 *     1 2 3
 *     4 5 6
 *   Output:
 *     1 4
 *     2 5
 *     3 6
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int *mat = (int *)malloc((size_t)rows * (size_t)cols * sizeof(int));
    int *trans = (int *)malloc((size_t)cols * (size_t)rows * sizeof(int));
    if (mat == NULL || trans == NULL) {
        free(mat);
        free(trans);
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &mat[i * cols + j]) != 1) {
                free(mat);
                free(trans);
                return 1;
            }
            trans[j * rows + i] = mat[i * cols + j];
        }
    }

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            if (j > 0) {
                putchar(' ');
            }
            printf("%d", trans[i * rows + j]);
        }
        putchar('\n');
    }

    free(mat);
    free(trans);
    return 0;
}
