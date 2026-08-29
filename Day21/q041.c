// Q41 (Day 21): Loops without Arrays/Strings
// Problem:
//   Write a program to swap the first and last digit of a number.
//
// Sample Test Cases:
//   Case 1:
//     Input: 1234
//     Output: 4231
//   Case 2:
//     Input: 1001
//     Output: 1001

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    int negative = (n < 0);
    unsigned long long u = negative ? (unsigned long long)(-(n + 1)) + 1ULL : (unsigned long long)n;

    if (u < 10ULL) {
        printf("%lld\n", n);
        return 0;
    }

    unsigned long long last = u % 10ULL;
    unsigned long long temp = u;
    unsigned long long place = 1ULL;
    while (temp >= 10ULL) {
        temp /= 10ULL;
        place *= 10ULL;
    }

    unsigned long long first = temp;
    unsigned long long middle = (u % place) / 10ULL;
    unsigned long long swapped = last * place + middle * 10ULL + first;

    if (negative && swapped != 0ULL) {
        putchar('-');
    }
    printf("%llu\n", swapped);

    return 0;
}
