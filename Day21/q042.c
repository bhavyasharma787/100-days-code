// Q42 (Day 21): Loops without Arrays/Strings
// Problem:
//   Write a program to check if a number is a perfect number.
//
// Sample Test Cases:
//   Case 1:
//     Input: 6
//     Output: Perfect number
//   Case 2:
//     Input: 10
//     Output: Not perfect number

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    if (n <= 1) {
        printf("Not perfect number\n");
        return 0;
    }

    long long sum = 1;
    for (long long i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }

    if (sum == n) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}
