/*
 * Question 89 (Day 45) - Strings
 * Statement: Count frequency of a given character in a string.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     programming
 *     g
 *   Output:
 *     2
 */

#include <stdio.h>

int main(void) {
    char str[10005];
    char targetLine[64];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("0\n");
        return 0;
    }
    if (fgets(targetLine, sizeof(targetLine), stdin) == NULL) {
        printf("0\n");
        return 0;
    }

    char target = targetLine[0];
    if (target == '\0' || target == '\n' || target == '\r') {
        printf("0\n");
        return 0;
    }

    int count = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
