// Q7 (Day 04) - User Inputs, Operations & Output
// Question: Write a program to swap two numbers without using a third variable.
//
// Sample Test Cases:
//   Case 1: Input: 10 20  ->  Output: After swap: 20 10
//   Case 2: Input: 7 14  ->  Output: After swap: 14 7

#include <stdio.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d\n", a, b);
    return 0;
}
