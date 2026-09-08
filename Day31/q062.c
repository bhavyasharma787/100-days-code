/*
 * Question 62 (Day 31) - Arrays (1D)
 * Statement: Reverse an array without taking extra space.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     4
 *     1 2 3 4
 *   Output:
 *     4 3 2 1
 */

#include <stdio.h>
#include <stdlib.h>

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

    int left = 0;
    int right = n - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
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
