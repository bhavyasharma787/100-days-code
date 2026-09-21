/*
 * Question 87 (Day 44) - Strings
 * Statement: Count spaces, digits, and special characters in a string.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     a b1&2
 *   Output:
 *     Spaces=1, Digits=2, Special=1
 */

#include <stdio.h>

int main(void) {
    char str[10005];
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Spaces=0, Digits=0, Special=0\n");
        return 0;
    }

    int spaces = 0;
    int digits = 0;
    int special = 0;

    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        char ch = str[i];
        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            /* Alphabetic character */
        } else {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
