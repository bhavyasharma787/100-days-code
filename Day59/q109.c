// Question 109 (Day 59 - Logic Enhancers):
// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
//
// Sample Test Cases:
//   Case 1: Input: arr = [100, 200, 300, 400], k = 2  =>  Output: 700
//   Case 2: Input: arr = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4  =>  Output: 39
//   Case 3: Input: arr = [100, 200, 300, 400], k = 1  =>  Output: 400

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 0;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int *arr = (int *)malloc((size_t)n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 0;
        }
    }

    int k = 0;
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        free(arr);
        return 0;
    }

    long long window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    long long max_sum = window_sum;
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    printf("%lld\n", max_sum);
    free(arr);
    return 0;
}
