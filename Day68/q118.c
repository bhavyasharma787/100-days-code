// Question 118 (Day 68 - Logic Enhancers):
// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.
//
// Sample Test Cases:
//   Case 1: Input: nums1 = [0,3,2,4]  =>  Output: 1
//   Case 2: Input: nums1 = [1,2,3]  =>  Output: 0
//   Case 3: Input: nums1 = [0,4,3,1,5]  =>  Output: 2

#include <stdio.h>

int main(void) {
    int n = 0;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 0;
    }

    int missing = n;
    for (int i = 0; i < n; i++) {
        int val = 0;
        if (scanf("%d", &val) != 1) {
            return 0;
        }
        missing ^= i ^ val;
    }

    printf("%d\n", missing);
    return 0;
}
