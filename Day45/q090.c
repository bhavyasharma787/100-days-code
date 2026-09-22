/*
 * Question 90 (Day 45) - Strings
 * Statement: Toggle case of each character in a string.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     Hello
 *   Output:
 *     hELLO
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
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = (char)(str[i] + ('a' - 'A'));
        }
        i++;
    }
    str[i] = '\0';

    printf("%s\n", str);
    return 0;
}
