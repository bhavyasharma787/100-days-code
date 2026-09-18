/*
 * Question 81 (Day 41) - Strings
 * Statement: Count characters in a string without using built-in length functions.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     Hello
 *   Output:
 *     5
 * Test Case 2:
 *   Input:
 *      
 *   Output:
 *     1
 */

#include <stdio.h>

int main(void) {
    char str[10005];
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("0\n");
        return 0;
    }

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') {
        len++;
    }

    printf("%d\n", len);
    return 0;
}
