// Q1 (Day 01) - User Inputs, Operations & Output
// Question: Write a program to input two numbers and display their sum.
//
// Sample Test Cases:
//   Case 1: Input: 3 4  ->  Output: Sum = 7
//   Case 2: Input: -1 20  ->  Output: Sum = 19

#include <stdio.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    printf("Sum = %d\n", a + b);
    return 0;
}
