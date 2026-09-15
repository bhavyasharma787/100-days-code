/*
 * Question 75 (Day 38) - 2D Arrays
 * Statement: Add two matrices.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     2 2
 *     1 2
 *     3 4
 *     2 2
 *     5 6
 *     7 8
 *   Output:
 *     6 8
 *     10 12
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int r1, c1;
    if (scanf("%d %d", &r1, &c1) != 2 || r1 <= 0 || c1 <= 0) {
        return 1;
    }

    int *a = (int *)malloc((size_t)r1 * (size_t)c1 * sizeof(int));
    if (a == NULL) {
        return 1;
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            if (scanf("%d", &a[i * c1 + j]) != 1) {
                free(a);
                return 1;
            }
        }
    }

    int r2, c2;
    if (scanf("%d %d", &r2, &c2) != 2 || r2 <= 0 || c2 <= 0) {
        free(a);
        return 1;
    }

    int *b = (int *)malloc((size_t)r2 * (size_t)c2 * sizeof(int));
    if (b == NULL) {
        free(a);
        return 1;
    }

    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            if (scanf("%d", &b[i * c2 + j]) != 1) {
                free(a);
                free(b);
                return 1;
            }
        }
    }

    if (r1 != r2 || c1 != c2) {
        printf("Matrix dimensions do not match\n");
        free(a);
        free(b);
        return 0;
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            if (j > 0) {
                putchar(' ');
            }
            printf("%d", a[i * c1 + j] + b[i * c2 + j]);
        }
        putchar('\n');
    }

    free(a);
    free(b);
    return 0;
}
