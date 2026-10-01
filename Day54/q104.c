// Question 104 (Day 54 - Logic Enhancers):
// Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
//
// Note: Follow-up 1 (optional): Can you do it in O(log n) Time Complexity? Follow-up 2 (optional): Can you do it in O(1) Time Complexity?
//
// Sample Test Cases:
//   Case 1: Input: n = 8  =>  Output: 6
//   Case 2: Input: n = 1  =>  Output: 1
//   Case 3: Input: n = 4  =>  Output: -1

#include <stdio.h>

static long long isqrt_ll(long long val) {
    if (val <= 0) {
        return 0;
    }
    long long x = val;
    long long y = (x + 1) / 2;
    while (y < x) {
        x = y;
        y = (x + val / x) / 2;
    }
    return x;
}

int main(void) {
    long long n = 0;
    if (scanf("%lld", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    /* sum(1..x) == sum(x..n)  <=>  x^2 == n * (n + 1) / 2 */
    long long total = n * (n + 1) / 2;
    long long x = isqrt_ll(total);

    if (x * x == total) {
        printf("%lld\n", x);
    } else {
        printf("-1\n");
    }
    return 0;
}
