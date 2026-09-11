/*
 * Question 68 (Day 34) - Arrays (1D)
 * Statement: Delete an element from an array.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     5
 *     1 2 3 4 5
 *     2
 *   Output:
 *     1 2 4 5
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int *arr = (int *)malloc((size_t)n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 1;
        }
    }

    int pos;
    if (scanf("%d", &pos) != 1 || pos < 0 || pos >= n) {
        free(arr);
        return 1;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            putchar(' ');
        }
        printf("%d", arr[i]);
    }
    putchar('\n');

    free(arr);
    return 0;
}
