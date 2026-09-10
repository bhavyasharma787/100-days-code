/*
 * Question 66 (Day 33) - Arrays (1D)
 * Statement: Insert an element in a sorted array at the appropriate position.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     5
 *     1 2 4 5 6
 *     3
 *   Output:
 *     1 2 3 4 5 6
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

    int value;
    if (scanf("%d", &value) != 1) {
        free(arr);
        return 1;
    }

    int i = n - 1;
    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = value;
    n++;

    for (int j = 0; j < n; j++) {
        if (j > 0) {
            putchar(' ');
        }
        printf("%d", arr[j]);
    }
    putchar('\n');

    free(arr);
    return 0;
}
