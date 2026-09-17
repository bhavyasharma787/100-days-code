/*
 * Question 80 (Day 40) - 2D Arrays
 * Statement: Multiply two matrices.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     2 3
 *     1 2 3
 *     4 5 6
 *     3 2
 *     7 8
 *     9 10
 *     11 12
 *   Output:
 *     58 64
 *     139 154
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

    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        free(a);
        free(b);
        return 0;
    }

    long long *res = (long long *)calloc((size_t)r1 * (size_t)c2, sizeof(long long));
    if (res == NULL) {
        free(a);
        free(b);
        return 1;
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            long long sum = 0;
            for (int k = 0; k < c1; k++) {
                sum += (long long)a[i * c1 + k] * (long long)b[k * c2 + j];
            }
            res[i * c2 + j] = sum;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            if (j > 0) {
                putchar(' ');
            }
            printf("%lld", res[i * c2 + j]);
        }
        putchar('\n');
    }

    free(a);
    free(b);
    free(res);
    return 0;
}
