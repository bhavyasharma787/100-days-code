// Q31 (Day 16): Loops without Arrays/Strings
// Problem:
//   Write a program to take a number as input and print its equivalent binary representation.
//
// Sample Test Cases:
//   Case 1:
//     Input: 10
//     Output: 1010
//   Case 2:
//     Input: 7
//     Output: 111

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    unsigned long long u;
    if (n < 0) {
        putchar('-');
        u = (unsigned long long)(-(n + 1)) + 1ULL;
    } else {
        u = (unsigned long long)n;
    }

    unsigned long long mask = 1ULL;
    while (mask <= u / 2ULL) {
        mask <<= 1;
    }

    while (mask > 0ULL) {
        putchar((u & mask) ? '1' : '0');
        mask >>= 1;
    }
    putchar('\n');

    return 0;
}
