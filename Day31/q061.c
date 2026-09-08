/*
 * Question 61 (Day 31) - Arrays (1D)
 * Statement: Search for an element in an array using linear search.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     5
 *     1 2 3 4 5
 *     3
 *   Output:
 *     Found at index 2
 * Test Case 2:
 *   Input:
 *     4
 *     10 20 30 40
 *     25
 *   Output:
 *     -1
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

    int target;
    if (scanf("%d", &target) != 1) {
        free(arr);
        return 1;
    }

    int foundIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Found at index %d\n", foundIndex);
    } else {
        printf("-1\n");
    }

    free(arr);
    return 0;
}
