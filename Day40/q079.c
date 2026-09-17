/*
 * Question 79 (Day 40) - 2D Arrays
 * Statement: Perform diagonal traversal of a matrix.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     3 3
 *     1 2 3
 *     4 5 6
 *     7 8 9
 *   Output:
 *     1 2 4 7 5 3 6 8 9
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

    int firstPrinted = 0;
    int maxDiag = rows + cols - 2;
    for (int d = 0; d <= maxDiag; d++) {
        if (d % 2 == 0) {
            /* Traverse up-right */
            int r = (d < rows - 1) ? d : (rows - 1);
            int c = d - r;
            while (r >= 0 && c < cols) {
                if (firstPrinted) {
                    putchar(' ');
                }
                printf("%d", mat[r * cols + c]);
                firstPrinted = 1;
                r--;
                c++;
            }
        } else {
            /* Traverse down-left */
            int c = (d < cols - 1) ? d : (cols - 1);
            int r = d - c;
            while (r < rows && c >= 0) {
                if (firstPrinted) {
                    putchar(' ');
                }
                printf("%d", mat[r * cols + c]);
                firstPrinted = 1;
                r++;
                c--;
            }
        }
    }
    putchar('\n');

    free(mat);
    return 0;
}
