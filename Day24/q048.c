// Q48 (Day 24): Nested Loops without Arrays/Strings
// Problem:
//   Write a program to print the following pattern:
//   1
//   12
//   123
//   1234
//   12345
//
// Sample Test Cases:
//   Case 1:
//     Input: (none)
//     Output:
//       1
//       12
//       123
//       1234
//       12345

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        putchar('\n');
    }

    return 0;
}
