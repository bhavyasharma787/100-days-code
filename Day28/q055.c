// Q55 (Day 28): Nested Loops without Arrays/Strings
// Problem:
//   Write a program to print all the prime numbers from 1 to n.
//
// Sample Test Cases:
//   Case 1:
//     Input: 10
//     Output: 2 3 5 7
//   Case 2:
//     Input: 20
//     Output: 2 3 5 7 11 13 17 19

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int first = 1;
    for (int num = 2; num <= n; num++) {
        int is_prime = 1;
        for (int d = 2; d <= num / d; d++) {
            if (num % d == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            if (!first) {
                putchar(' ');
            }
            printf("%d", num);
            first = 0;
        }
    }
    putchar('\n');

    return 0;
}
