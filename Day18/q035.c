// Q35 (Day 18): Loops without Arrays/Strings
// Problem:
//   Write a program to print all factors of a given number.
//
// Sample Test Cases:
//   Case 1:
//     Input: 6
//     Output: 1 2 3 6
//   Case 2:
//     Input: 10
//     Output: 1 2 5 10

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    if (n < 0) {
        n = -n;
    }

    int first = 1;
    for (long long i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (!first) {
                putchar(' ');
            }
            printf("%lld", i);
            first = 0;
        }
    }
    putchar('\n');

    return 0;
}
