// Q50 (Day 25): Nested Loops without Arrays/Strings
// Problem:
//   Write a program to print the following pattern:
//   *****
//    ****
//     ***
//      **
//       *
//
// Sample Test Cases:
//   Case 1:
//     Input: (none)
//     Output:
//       *****
//        ****
//         ***
//          **
//           *
//   Case 2:
//     Input: (none)
//     Output: Note: Spaces indicate indentation.

#include <stdio.h>

int main(void) {
    for (int i = 0; i < 5; i++) {
        for (int s = 0; s < i; s++) {
            putchar(' ');
        }
        for (int j = 0; j < 5 - i; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
