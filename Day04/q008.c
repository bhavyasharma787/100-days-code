// Q8 (Day 04) - User Inputs, Operations & Output
// Question: Write a program to find and display the sum of the first n natural numbers.
//
// Sample Test Cases:
//   Case 1: Input: 5  ->  Output: Sum=15
//   Case 2: Input: 10  ->  Output: Sum=55

#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) {
        return 1;
    }

    long long sum = (n > 0) ? (n * (n + 1) / 2) : 0;

    printf("Sum=%lld\n", sum);
    return 0;
}
