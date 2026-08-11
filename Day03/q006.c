// Q6 (Day 03) - User Inputs, Operations & Output
// Question: Write a program to swap two numbers using a third variable.
//
// Sample Test Cases:
//   Case 1: Input: 3 5  ->  Output: After swap: 5 3
//   Case 2: Input: -1 1  ->  Output: After swap: 1 -1

#include <stdio.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    int temp = a;
    a = b;
    b = temp;

    printf("After swap: %d %d\n", a, b);
    return 0;
}
