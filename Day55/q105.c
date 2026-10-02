// Question 105 (Day 55 - Logic Enhancers):
// Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than floor(n / 2) times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
//
// Note: Follow-up (optional): Can you do it in O(n) Time Complexity?
//
// Sample Test Cases:
//   Case 1: Input: nums = [3,2,3]  =>  Output: 3
//   Case 2: Input: nums = [2,2,1,1,1,2,2]  =>  Output: 2
//   Case 3: Input: nums = [2,2,1,1,1,2,2,3]  =>  Output: -1

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

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            free(nums);
            return 0;
        }
    }

    int candidate = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            freq++;
        }
    }

    if (freq > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    free(nums);
    return 0;
}
