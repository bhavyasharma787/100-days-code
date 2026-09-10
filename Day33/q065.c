/*
 * Question 65 (Day 33) - Arrays (1D)
 * Statement: Search in a sorted array using binary search.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     5
 *     1 3 5 7 9
 *     7
 *   Output:
 *     Found at index 3
 * Test Case 2:
 *   Input:
 *     5
 *     1 3 5 7 9
 *     6
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

    int low = 0;
    int high = n - 1;
    int foundIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            foundIndex = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
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
