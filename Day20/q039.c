// Q39 (Day 20): Loops without Arrays/Strings
// Problem:
//   Write a program to find the product of odd digits of a number.
//
// Sample Test Cases:
//   Case 1:
//     Input: 12345
//     Output: 15 (1*3*5)
//   Case 2:
//     Input: 2468
//     Output: 1 (no odd digits, assume 1)

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    unsigned long long u = (n < 0) ? (unsigned long long)(-(n + 1)) + 1ULL : (unsigned long long)n;
    unsigned long long product = 1ULL;
    while (u > 0ULL) {
        unsigned long long digit = u % 10ULL;
        if (digit % 2ULL != 0ULL) {
            product *= digit;
        }
        u /= 10ULL;
    }

    printf("%llu\n", product);
    return 0;
}
