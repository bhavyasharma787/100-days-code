// Q56 (Day 28): Arrays (1D)
// Problem:
//   Read and print elements of a one-dimensional array.
//
// Sample Test Cases:
//   Case 1:
//     Input:
//       3
//       10 20 30
//     Output: 10 20 30
//   Case 2:
//     Input:
//       5
//       1 2 3 4 5
//     Output: 1 2 3 4 5

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n <= 0) {
        putchar('\n');
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
