/*
 * Question 69 (Day 35) - Arrays (1D)
 * Statement: Find the second largest element in an array.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     5
 *     10 20 30 40 50
 *   Output:
 *     40
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) {
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

    int first = arr[0];
    int second = 0;
    int hasSecond = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
            hasSecond = 1;
        } else if (arr[i] < first && (!hasSecond || arr[i] > second)) {
            second = arr[i];
            hasSecond = 1;
        }
    }

    if (hasSecond) {
        printf("%d\n", second);
    } else {
        printf("-1\n");
    }

    free(arr);
    return 0;
}
