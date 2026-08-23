// Q29 (Day 15) - Loops without Arrays/Strings
// Question: Write a program to calculate the factorial of a number.
//
// Sample Test Cases:
//   Case 1: Input: 5  ->  Output: 120
//   Case 2: Input: 3  ->  Output: 6

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 0) {
        printf("Factorial is not defined for negative numbers\n");
        return 0;
    }

    unsigned long long factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial *= (unsigned long long)i;
    }

    printf("%llu\n", factorial);
    return 0;
}
