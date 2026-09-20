/*
 * Question 85 (Day 43) - Strings
 * Statement: Reverse a string.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     abcd
 *   Output:
 *     dcba
 */

#include <stdio.h>

int main(void) {
    char str[10005];
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') {
        len++;
    }
    str[len] = '\0';

    int left = 0;
    int right = len - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }

    printf("%s\n", str);
    return 0;
}
