// Q43 (Day 22): Loops without Arrays/Strings
// Problem:
//   Write a program to check if a number is a strong number.
//
// Sample Test Cases:
//   Case 1:
//     Input: 145
//     Output: Strong number
//   Case 2:
//     Input: 123
//     Output: Not strong number

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    if (n <= 0) {
        printf("Not strong number\n");
        return 0;
    }

    long long temp = n;
    long long sum = 0;
    while (temp > 0) {
        int digit = (int)(temp % 10);
        long long fact = 1;
        for (int i = 2; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }

    if (sum == n) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
