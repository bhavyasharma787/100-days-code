/*
 * Question 70 (Day 35) - Arrays (1D)
 * Statement: Rotate an array to the right by k positions.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     5
 *     1 2 3 4 5
 *     2
 *   Output:
 *     4 5 1 2 3
 */

#include <stdio.h>
#include <stdlib.h>

static void reverseRange(int *arr, int left, int right) {
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    int *arr = NULL;
    if (n > 0) {
        arr = (int *)malloc((size_t)n * sizeof(int));
        if (arr == NULL) {
            return 1;
        }
        for (int i = 0; i < n; i++) {
            if (scanf("%d", &arr[i]) != 1) {
                free(arr);
                return 1;
            }
        }
    }

    int k;
    if (scanf("%d", &k) != 1) {
        free(arr);
        return 1;
    }

    if (n > 0) {
        k = ((k % n) + n) % n;
        if (k > 0) {
            reverseRange(arr, 0, n - 1);
            reverseRange(arr, 0, k - 1);
            reverseRange(arr, k, n - 1);
        }
    }

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
