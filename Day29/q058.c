// Q58 (Day 29): Arrays (1D)
// Problem:
//   Find the maximum and minimum element in an array.
//
// Sample Test Cases:
//   Case 1:
//     Input:
//       5
//       2 9 1 4 7
//     Output: Max=9, Min=1
//   Case 2:
//     Input:
//       3
//       10 10 10
//     Output: Max=10, Min=10

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n <= 0) {
        return 0;
    }

    int *arr = malloc((size_t)n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 1;
        }
    }

    int max_val = arr[0];
    int min_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    printf("Max=%d, Min=%d\n", max_val, min_val);

    free(arr);
    return 0;
}
