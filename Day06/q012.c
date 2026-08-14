// Q12 (Day 06) - Conditional Statements
// Question: Write a program to input an integer and check whether it is positive, negative or zero using nested if-else.
//
// Sample Test Cases:
//   Case 1: Input: -5  ->  Output: Negative
//   Case 2: Input: 0  ->  Output: Zero
//   Case 3: Input: 10  ->  Output: Positive

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n >= 0) {
        if (n == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    } else {
        printf("Negative\n");
    }

    return 0;
}
