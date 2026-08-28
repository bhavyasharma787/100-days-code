// Q40 (Day 20): Loops without Arrays/Strings
// Problem:
//   Write a program to find the 1's complement of a binary number and print it.
//
// Sample Test Cases:
//   Case 1:
//     Input: 1010
//     Output: 0101
//   Case 2:
//     Input: 1111
//     Output: 0000

#include <ctype.h>
#include <stdio.h>

int main(void) {
    int ch;
    while ((ch = getchar()) != EOF && isspace(ch)) {
        /* skip leading whitespace */
    }

    while (ch == '0' || ch == '1') {
        putchar(ch == '0' ? '1' : '0');
        ch = getchar();
    }
    putchar('\n');

    return 0;
}
