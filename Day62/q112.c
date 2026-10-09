// Question 112 (Day 62 - Logic Enhancers):
// Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
//
// Sample Test Cases:
//   Case 1: Input: arr[] = [2, 3, -8, 7, -1, 2, 3]  =>  Output: 11
//   Case 2: Input: arr[] = [-2, -4]  =>  Output: -2
//   Case 3: Input: arr[] = [5, 4, 1, 7, 8]  =>  Output: 25

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

    long long current_sum = arr[0];
    long long max_sum = arr[0];
    for (int i = 1; i < n; i++) {
        if (current_sum + arr[i] > arr[i]) {
            current_sum += arr[i];
        } else {
            current_sum = arr[i];
        }
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%lld\n", max_sum);
    free(arr);
    return 0;
}
