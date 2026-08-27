// Q37 (Day 19): Loops without Arrays/Strings
// Problem:
//   Write a program to find the LCM of two numbers.
//
// Sample Test Cases:
//   Case 1:
//     Input: 4 5
//     Output: 20
//   Case 2:
//     Input: 7 3
//     Output: 21

#include <stdio.h>

int main(void) {
    long long a, b;
    if (scanf("%lld %lld", &a, &b) != 2) {
        return 1;
    }

    unsigned long long x = (a < 0) ? (unsigned long long)(-(a + 1)) + 1ULL : (unsigned long long)a;
    unsigned long long y = (b < 0) ? (unsigned long long)(-(b + 1)) + 1ULL : (unsigned long long)b;

    if (x == 0ULL || y == 0ULL) {
        printf("0\n");
        return 0;
    }

    unsigned long long gx = x;
    unsigned long long gy = y;
    while (gy != 0ULL) {
        unsigned long long rem = gx % gy;
        gx = gy;
        gy = rem;
    }

    unsigned long long lcm = (x / gx) * y;
    printf("%llu\n", lcm);
    return 0;
}
