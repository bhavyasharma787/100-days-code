// Q51 (Day 26): Nested Loops without Arrays/Strings
// Problem:
//   Write a program to print the following pattern:
//       5
//      45
//     345
//    2345
//   12345
//
// Sample Test Cases:
//   Case 1:
//     Input: (none)
//     Output:
//           5
//          45
//         345
//        2345
//       12345

#include <stdio.h>

int main(void) {
    for (int i = 5; i >= 1; i--) {
        for (int s = 1; s < i; s++) {
            putchar(' ');
        }
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        putchar('\n');
    }

    return 0;
}
