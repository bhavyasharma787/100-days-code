/*
 * Question 63 (Day 32) - Arrays (1D)
 * Statement: Merge two arrays.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     3
 *     1 2 3
 *     2
 *     4 5
 *   Output:
 *     1 2 3 4 5
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n1;
    if (scanf("%d", &n1) != 1 || n1 < 0) {
        return 1;
    }

    int *arr1 = NULL;
    if (n1 > 0) {
        arr1 = (int *)malloc((size_t)n1 * sizeof(int));
        if (arr1 == NULL) {
            return 1;
        }
        for (int i = 0; i < n1; i++) {
            if (scanf("%d", &arr1[i]) != 1) {
                free(arr1);
                return 1;
            }
        }
    }

    int n2;
    if (scanf("%d", &n2) != 1 || n2 < 0) {
        free(arr1);
        return 1;
    }

    int *arr2 = NULL;
    if (n2 > 0) {
        arr2 = (int *)malloc((size_t)n2 * sizeof(int));
        if (arr2 == NULL) {
            free(arr1);
            return 1;
        }
        for (int i = 0; i < n2; i++) {
            if (scanf("%d", &arr2[i]) != 1) {
                free(arr1);
                free(arr2);
                return 1;
            }
        }
    }

    int total = n1 + n2;
    int *merged = NULL;
    if (total > 0) {
        merged = (int *)malloc((size_t)total * sizeof(int));
        if (merged == NULL) {
            free(arr1);
            free(arr2);
            return 1;
        }
        for (int i = 0; i < n1; i++) {
            merged[i] = arr1[i];
        }
        for (int i = 0; i < n2; i++) {
            merged[n1 + i] = arr2[i];
        }
    }

    for (int i = 0; i < total; i++) {
        if (i > 0) {
            putchar(' ');
        }
        printf("%d", merged[i]);
    }
    putchar('\n');

    free(arr1);
    free(arr2);
    free(merged);
    return 0;
}
