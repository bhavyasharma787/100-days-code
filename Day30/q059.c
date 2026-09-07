// Q59 (Day 30): Arrays (1D)
// Problem:
//   Count even and odd numbers in an array.
//
// Sample Test Cases:
//   Case 1:
//     Input:
//       6
//       1 2 3 4 5 6
//     Output: Even=3, Odd=3
//   Case 2:
//     Input:
//       4
//       2 4 6 8
//     Output: Even=4, Odd=0

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n <= 0) {
        printf("Even=0, Odd=0\n");
        return 0;
    }

    int *arr = malloc((size_t)n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 1;
        }
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Even=%d, Odd=%d\n", even_count, odd_count);

    free(arr);
    return 0;
}
