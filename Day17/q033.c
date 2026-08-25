// Q33 (Day 17): Loops without Arrays/Strings
// Problem:
//   Write a program to check if a number is an Armstrong number.
//
// Sample Test Cases:
//   Case 1:
//     Input: 153
//     Output: Armstrong
//   Case 2:
//     Input: 123
//     Output: Not Armstrong

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    if (n < 0) {
        printf("Not Armstrong\n");
        return 0;
    }

    int digits = 0;
    long long temp = n;
    do {
        digits++;
        temp /= 10;
    } while (temp > 0);

    long long sum = 0;
    temp = n;
    do {
        long long d = temp % 10;
        long long power = 1;
        for (int i = 0; i < digits; i++) {
            power *= d;
        }
        sum += power;
        temp /= 10;
    } while (temp > 0);

    if (sum == n) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
