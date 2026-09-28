// Question 101 (Day 51 - Logic Enhancers):
// Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
//
// Note: Follow-up(optional): Can you do it in O(log n) Time Complexity?
//
// Sample Test Cases:
//   Case 1: Input: nums = [5,7,7,8,8,10], target = 8  =>  Output: 3,4
//   Case 2: Input: nums = [5,7,7,8,8,10], target = 6  =>  Output: -1,-1
//   Case 3: Input: nums = [5,7,7,8,8,10], target = 10  =>  Output: 5,5

#include <stdio.h>
#include <stdlib.h>

static int find_first(const int *nums, int n, int target) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

static int find_last(const int *nums, int n, int target) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans = mid;
            low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main(void) {
    int n = 0;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 0;
    }

    int *nums = NULL;
    if (n > 0) {
        nums = (int *)malloc((size_t)n * sizeof(int));
        if (nums == NULL) {
            return 1;
        }
        for (int i = 0; i < n; i++) {
            if (scanf("%d", &nums[i]) != 1) {
                free(nums);
                return 0;
            }
        }
    }

    int target = 0;
    if (scanf("%d", &target) != 1) {
        free(nums);
        return 0;
    }

    int first = (n > 0) ? find_first(nums, n, target) : -1;
    int last = (first != -1) ? find_last(nums, n, target) : -1;

    printf("%d,%d\n", first, last);
    free(nums);
    return 0;
}
