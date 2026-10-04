// Question 107 (Day 57 - Logic Enhancers):
// Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist previous greater of current element, then previous greater element for current element is -1.
// N.B: Print the output for each element in a comma separated fashion. Do not use Stack, use brute force approach (nested loop) to solve.
//
// Note: Try solving this using brute force (nested loop). No need of attempting the optimized stack-based solution.
//
// Sample Test Cases:
//   Case 1: Input: arr = [1, 3, 2, 4]  =>  Output: -1, -1, 3, -1
//   Case 2: Input: arr = [6, 8, 0, 1, 3]  =>  Output: -1, -1, 8, 8, 8
//   Case 3: Input: arr = [1, 2, 3, 5]  =>  Output: -1, -1, -1, -1
//   Case 4: Input: arr = [5, 4, 3, 1]  =>  Output: -1, 5, 4, 3

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

    for (int i = 0; i < n; i++) {
        int prev_greater = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev_greater = arr[j];
                break;
            }
        }
        printf("%s%d", (i > 0) ? ", " : "", prev_greater);
    }
    putchar('\n');

    free(arr);
    return 0;
}
