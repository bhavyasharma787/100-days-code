// Q38 (Day 19): Loops without Arrays/Strings
// Problem:
//   Write a program to find the sum of digits of a number.
//
// Sample Test Cases:
//   Case 1:
//     Input: 123
//     Output: 6
//   Case 2:
//     Input: 999
//     Output: 27

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    unsigned long long u = (n < 0) ? (unsigned long long)(-(n + 1)) + 1ULL : (unsigned long long)n;
    int sum = 0;
    while (u > 0ULL) {
        sum += (int)(u % 10ULL);
        u /= 10ULL;
    }

    printf("%d\n", sum);
    return 0;
}
