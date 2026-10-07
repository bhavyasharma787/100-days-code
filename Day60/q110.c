// Question 110 (Day 60 - Logic Enhancers):
// Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
//
// Sample Test Cases:
//   Case 1: Input: arr = [1, 2, 3, 1, 4, 5, 2, 3, 6], k = 3  =>  Output: 3 3 4 5 5 5 6
//   Case 2: Input: arr = [5, 1, 3, 4, 2], k = 1  =>  Output: 5 1 3 4 2

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 0;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int *arr = (int *)malloc((size_t)n * sizeof(int));
    int *dq = (int *)malloc((size_t)n * sizeof(int));
    if (arr == NULL || dq == NULL) {
        free(arr);
        free(dq);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            free(dq);
            return 0;
        }
    }

    int k = 0;
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        free(arr);
        free(dq);
        return 0;
    }

    int front = 0, back = 0;
    int first_out = 1;
    for (int i = 0; i < n; i++) {
        if (front < back && dq[front] <= i - k) {
            front++;
        }
        while (front < back && arr[dq[back - 1]] <= arr[i]) {
            back--;
        }
        dq[back++] = i;

        if (i >= k - 1) {
            printf("%s%d", first_out ? "" : " ", arr[dq[front]]);
            first_out = 0;
        }
    }
    putchar('\n');

    free(arr);
    free(dq);
    return 0;
}
