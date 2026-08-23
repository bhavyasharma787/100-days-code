// Q30 (Day 15) - Loops without Arrays/Strings
// Question: Write a program to reverse a given number.
//
// Sample Test Cases:
//   Case 1: Input: 1234  ->  Output: 4321
//   Case 2: Input: 100  ->  Output: 1

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    int is_negative = 0;
    unsigned long long num;
    if (n < 0) {
        is_negative = 1;
        num = (unsigned long long)(-(n + 1)) + 1ULL;
    } else {
        num = (unsigned long long)n;
    }

    unsigned long long reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }

    if (is_negative && reversed != 0) {
        printf("-%llu\n", reversed);
    } else {
        printf("%llu\n", reversed);
    }

    return 0;
}
