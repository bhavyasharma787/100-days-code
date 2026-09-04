// Q53 (Day 27): Nested Loops without Arrays/Strings
// Problem:
//   Write a program to print the following pattern:
//   *
//   ***
//   *****
//   *******
//   *********
//   *******
//   *****
//   ***
//   *
//
// Sample Test Cases:
//   Case 1:
//     Input: (none)
//     Output:
//       *
//       ***
//       *****
//       *******
//       *********
//       *******
//       *****
//       ***
//       *

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 9; i += 2) {
        for (int j = 0; j < i; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    for (int i = 7; i >= 1; i -= 2) {
        for (int j = 0; j < i; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
