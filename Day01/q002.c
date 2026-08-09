// Q2 (Day 01) - User Inputs, Operations & Output
// Question: Write a program to input two numbers and display their sum, difference, product, and quotient.
// Note: Division by zero should be handled carefully.
//
// Sample Test Cases:
//   Case 1: Input: 10 2  ->  Output: Sum=12, Diff=8, Product=20, Quotient=5
//   Case 2: Input: 7 3  ->  Output: Sum=10, Diff=4, Product=21, Quotient=2

#include <stdio.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    int sum = a + b;
    int diff = a - b;
    int product = a * b;

    if (b == 0) {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=Undefined (division by zero)\n",
               sum, diff, product);
    } else {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n",
               sum, diff, product, a / b);
    }

    return 0;
}
