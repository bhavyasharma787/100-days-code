/*
 * Question 67 (Day 34) - Arrays (1D)
 * Statement: Insert an element in an array at a given position.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     4
 *     10 20 30 40
 *     2 15
 *   Output:
 *     10 20 15 30 40
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    int *arr = (int *)malloc((size_t)(n + 1) * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 1;
        }
    }

    int pos, value;
    if (scanf("%d %d", &pos, &value) != 2 || pos < 0 || pos > n) {
        free(arr);
        return 1;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;

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
