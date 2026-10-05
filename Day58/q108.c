// Question 108 (Day 58 - Logic Enhancers):
// Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
//
// Note: Follow-up(optional): Can you write a code that runs in O(n) time and without using the division operation.
//
// Sample Test Cases:
//   Case 1: Input: nums = [1,2,3,4]  =>  Output: [24,12,8,6]
//   Case 2: Input: nums = [-1,1,0,-3,3]  =>  Output: [0,0,9,0,0]

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 0;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 0;
    }
    if (n == 0) {
        printf("[]\n");
        return 0;
    }

    int *nums = (int *)malloc((size_t)n * sizeof(int));
    int *answer = (int *)malloc((size_t)n * sizeof(int));
    if (nums == NULL || answer == NULL) {
        free(nums);
        free(answer);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            free(nums);
            free(answer);
            return 0;
        }
    }

    answer[0] = 1;
    for (int i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    putchar('[');
    for (int i = 0; i < n; i++) {
        printf("%s%d", (i > 0) ? "," : "", answer[i]);
    }
    printf("]\n");

    free(nums);
    free(answer);
    return 0;
}
