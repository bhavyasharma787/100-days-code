/*
 * Question 76 (Day 38) - 2D Arrays
 * Statement: Check if a matrix is symmetric.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     2 2
 *     1 2
 *     2 1
 *   Output:
 *     True
 * Test Case 2:
 *   Input:
 *     2 2
 *     1 0
 *     2 1
 *   Output:
 *     False
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

    int isSymmetric = (rows == cols);
    for (int i = 0; i < rows && isSymmetric; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (mat[i * cols + j] != mat[j * cols + i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    printf("%s\n", isSymmetric ? "True" : "False");
    free(mat);
    return 0;
}
