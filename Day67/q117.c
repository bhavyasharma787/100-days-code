// Question 117 (Day 67 - Logic Enhancers):
// Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
//
// Sample Test Cases:
//   Case 1: Input: nums1 = [2,7,11,15] nums2 = [4,8,10]  =>  Output: 2 4 7 8 10 11 15
//   Case 2: Input: nums1 = [1,2,7] nums2 = [9,10,17]  =>  Output: 1 2 7 9 10 17
//   Case 3: Input: nums1 = [-10,-2,7] nums2 = [-3, -1, 7]  =>  Output: -10 -3 -2 -1 7 7

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int m = 0;
    if (scanf("%d", &m) != 1 || m < 0) {
        return 0;
    }

    int *nums1 = NULL;
    if (m > 0) {
        nums1 = (int *)malloc((size_t)m * sizeof(int));
        if (nums1 == NULL) {
            return 1;
        }
        for (int i = 0; i < m; i++) {
            if (scanf("%d", &nums1[i]) != 1) {
                free(nums1);
                return 0;
            }
        }
    }

    int n = 0;
    if (scanf("%d", &n) != 1 || n < 0) {
        free(nums1);
        return 0;
    }

    int *nums2 = NULL;
    if (n > 0) {
        nums2 = (int *)malloc((size_t)n * sizeof(int));
        if (nums2 == NULL) {
            free(nums1);
            return 1;
        }
        for (int i = 0; i < n; i++) {
            if (scanf("%d", &nums2[i]) != 1) {
                free(nums1);
                free(nums2);
                return 0;
            }
        }
    }

    int total = m + n;
    int *merged = (total > 0) ? (int *)malloc((size_t)total * sizeof(int)) : NULL;
    if (total > 0 && merged == NULL) {
        free(nums1);
        free(nums2);
        return 1;
    }

    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }
    while (i < m) {
        merged[k++] = nums1[i++];
    }
    while (j < n) {
        merged[k++] = nums2[j++];
    }

    for (int idx = 0; idx < total; idx++) {
        printf("%s%d", (idx > 0) ? " " : "", merged[idx]);
    }
    putchar('\n');

    free(nums1);
    free(nums2);
    free(merged);
    return 0;
}
