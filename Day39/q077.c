/*
 * Question 77 (Day 39) - 2D Arrays
 * Statement: Check if the elements on the diagonal of a matrix are distinct.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     3 3
 *     1 2 3
 *     4 5 6
 *     7 8 1
 *   Output:
 *     False
 * Test Case 2:
 *   Input:
 *     3 3
 *     1 2 3
 *     4 5 6
 *     7 8 9
 *   Output:
 *     True
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
    int isDistinct = 1;
    for (int i = 0; i < diagLen && isDistinct; i++) {
        for (int j = i + 1; j < diagLen; j++) {
            if (mat[i * cols + i] == mat[j * cols + j]) {
                isDistinct = 0;
                break;
            }
        }
    }

    printf("%s\n", isDistinct ? "True" : "False");
    free(mat);
    return 0;
}
