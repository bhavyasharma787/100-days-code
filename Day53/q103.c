// Question 103 (Day 53 - Logic Enhancers):
// Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
//
// Note: Follow-up(optional): Try to solve this in O(n) TC
//
// Sample Test Cases:
//   Case 1: Input: nums = [1,7,3,6,5,6]  =>  Output: 3
//   Case 2: Input: nums = [1,2,3]  =>  Output: -1
//   Case 3: Input: nums = [2,1,-1]  =>  Output: 0

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 0;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int *nums = (int *)malloc((size_t)n * sizeof(int));
    if (nums == NULL) {
        return 1;
    }

    long long total_sum = 0;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            free(nums);
            return 0;
        }
        total_sum += nums[i];
    }

    long long left_sum = 0;
    int pivot = -1;
    for (int i = 0; i < n; i++) {
        long long right_sum = total_sum - left_sum - nums[i];
        if (left_sum == right_sum) {
            pivot = i;
            break;
        }
        left_sum += nums[i];
    }

    printf("%d\n", pivot);
    free(nums);
    return 0;
}
