// Q32 (Day 16): Loops without Arrays/Strings
// Problem:
//   Write a program to check if a number is a palindrome.
//
// Sample Test Cases:
//   Case 1:
//     Input: 121
//     Output: Palindrome
//   Case 2:
//     Input: 123
//     Output: Not palindrome

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    if (n < 0) {
        printf("Not palindrome\n");
        return 0;
    }

    long long original = n;
    long long reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    if (reversed == original) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
