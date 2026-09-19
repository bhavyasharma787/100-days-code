/*
 * Question 84 (Day 42) - Strings
 * Statement: Convert a lowercase string to uppercase without using built-in functions.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     hello
 *   Output:
 *     HELLO
 */

#include <stdio.h>

int main(void) {
    char str[10005];
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n' && str[i] != '\r') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = (char)(str[i] - ('a' - 'A'));
        }
        i++;
    }
    str[i] = '\0';

    printf("%s\n", str);
    return 0;
}
