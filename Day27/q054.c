// Q54 (Day 27): Nested Loops without Arrays/Strings
// Problem:
//   Write a program to print the following pattern:
//
//      *
//     ***
//    *****
//   *******
//    *****
//     ***
//      *
//
// Sample Test Cases:
//   Case 1:
//     Input: (none)
//     Output: Pattern with layers of stars as shown.

#include <stdio.h>

int main(void) {
    int rows = 4;

    for (int i = 1; i <= rows; i++) {
        for (int s = 0; s < rows - i; s++) {
            putchar(' ');
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    for (int i = rows - 1; i >= 1; i--) {
        for (int s = 0; s < rows - i; s++) {
            putchar(' ');
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
