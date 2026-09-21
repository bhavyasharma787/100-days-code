/*
 * Question 88 (Day 44) - Strings
 * Statement: Replace spaces with hyphens in a string.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     hello world
 *   Output:
 *     hello-world
 */

#include <stdio.h>

int main(void) {
    char str[10005];
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n' && str[i] != '\r') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }
    str[i] = '\0';

    printf("%s\n", str);
    return 0;
}
