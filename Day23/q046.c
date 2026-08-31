// Q46 (Day 23): Nested Loops without Arrays/Strings
// Problem:
//   Write a program to print the following pattern:
//   *****
//   *****
//   *****
//   *****
//   *****
//
// Sample Test Cases:
//   Case 1:
//     Input: (none)
//     Output:
//       *****
//       *****
//       *****
//       *****
//       *****

#include <stdio.h>

int main(void) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
