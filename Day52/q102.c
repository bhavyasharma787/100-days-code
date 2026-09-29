// Question 102 (Day 52 - Logic Enhancers):
// Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
//
// Note: Follow-up(optional): Can you do it in O(log n) Time Complexity?
//
// Sample Test Cases:
//   Case 1: Input: arr = [1, 2, 8, 10, 11, 12, 19], x = 5  =>  Output: 2
//   Case 2: Input: arr = [1, 2, 8, 10, 11, 12, 19], x = 20  =>  Output: -1
//   Case 3: Input: arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0  =>  Output: 0
//   Case 4: Input: arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2  =>  Output: 2

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 0;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 0;
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
                return 0;
            }
        }
    }

    int x = 0;
    if (scanf("%d", &x) != 1) {
        free(arr);
        return 0;
    }

    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("%d\n", ans);
    free(arr);
    return 0;
}
