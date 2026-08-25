// Q34 (Day 17): Loops without Arrays/Strings
// Problem:
//   Write a program to check if a number is prime.
//
// Sample Test Cases:
//   Case 1:
//     Input: 7
//     Output: Prime
//   Case 2:
//     Input: 10
//     Output: Not prime

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    int is_prime = (n >= 2);
    for (long long i = 2; is_prime && i <= n / i; i++) {
        if (n % i == 0) {
            is_prime = 0;
        }
    }

    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}
