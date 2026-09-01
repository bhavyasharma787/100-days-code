// Q47 (Day 24): Nested Loops without Arrays/Strings
// Problem:
//   Write a program to print the following pattern:
//   *
//   **
//   ***
//   ****
//   *****
//
// Sample Test Cases:
//   Case 1:
//     Input: (none)
//     Output:
//       *
//       **
//       ***
//       ****
//       *****

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
