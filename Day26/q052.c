// Q52 (Day 26): Nested Loops without Arrays/Strings
// Problem:
//   Write a program to print the following pattern:
//
//   *
//
//   *
//   *
//   *
//
//   *
//   *
//   *
//   *
//   *
//
//   *
//   *
//   *
//
//   *
//
//
// Sample Test Cases:
//   Case 1:
//     Input: (none)
//     Output: Pattern with stars spaced irregularly as shown.

#include <stdio.h>

int main(void) {
    for (int g = 1; g <= 5; g += 2) {
        for (int i = 0; i < g; i++) {
            printf("*\n");
        }
        putchar('\n');
    }

    for (int g = 3; g >= 1; g -= 2) {
        for (int i = 0; i < g; i++) {
            printf("*\n");
        }
        if (g > 1) {
            putchar('\n');
        }
    }

    return 0;
}
