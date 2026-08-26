// Q36 (Day 18): Loops without Arrays/Strings
// Problem:
//   Write a program to find the HCF (GCD) of two numbers.
//
// Sample Test Cases:
//   Case 1:
//     Input: 12 18
//     Output: 6
//   Case 2:
//     Input: 7 9
//     Output: 1

#include <stdio.h>

int main(void) {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) != 2) {
        return 1;
    }

    unsigned long long x = (a < 0) ? (unsigned long long)(-(a + 1)) + 1ULL : (unsigned long long)a;
    unsigned long long y = (b < 0) ? (unsigned long long)(-(b + 1)) + 1ULL : (unsigned long long)b;

    while (y != 0ULL) {
        unsigned long long rem = x % y;
        x = y;
        y = rem;
    }

    printf("%llu\n", x);
    return 0;
}
