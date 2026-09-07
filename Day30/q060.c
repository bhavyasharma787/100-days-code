// Q60 (Day 30): Arrays (1D)
// Problem:
//   Count positive, negative, and zero elements in an array.
//
// Sample Test Cases:
//   Case 1:
//     Input:
//       5
//       -1 0 1 2 -2
//     Output: Positive=2, Negative=2, Zero=1

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n <= 0) {
        printf("Positive=0, Negative=0, Zero=0\n");
        return 0;
    }

    int *arr = malloc((size_t)n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    int positive = 0;
    int negative = 0;
    int zero = 0;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 1;
        }
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);

    free(arr);
    return 0;
}
