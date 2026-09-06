// Q57 (Day 29): Arrays (1D)
// Problem:
//   Find the sum of array elements.
//
// Sample Test Cases:
//   Case 1:
//     Input:
//       4
//       2 4 6 8
//     Output: 20
//   Case 2:
//     Input:
//       3
//       1 1 1
//     Output: 3

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n <= 0) {
        printf("0\n");
        return 0;
    }

    int *arr = malloc((size_t)n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 1;
        }
        sum += arr[i];
    }

    printf("%lld\n", sum);

    free(arr);
    return 0;
}
