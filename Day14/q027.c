// Q27 (Day 14) - Loops without Arrays/Strings
// Question: Write a program to print the sum of the first n odd numbers.
//
// Sample Test Cases:
//   Case 1: Input: 3  ->  Output: 9
//   Case 2: Input: 5  ->  Output: 25

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 2LL * i - 1;
    }

    printf("%lld\n", sum);
    return 0;
}
