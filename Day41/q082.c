/*
 * Question 82 (Day 41) - Strings
 * Statement: Print each character of a string on a new line.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     Hi
 *   Output:
 *     H
 *     i
 */

#include <stdio.h>

int main(void) {
    char str[10005];
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
