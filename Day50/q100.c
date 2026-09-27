// Question 100 (Day 50 - Strings):
// Print all sub-strings of a string.
//
// Sample Test Cases:
//   Case 1: Input: abc  =>  Output: a,ab,abc,b,bc,c

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1024];
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    size_t len = strcspn(s, "\r\n");
    s[len] = '\0';

    int first = 1;
    for (size_t i = 0; i < len; i++) {
        for (size_t j = i; j < len; j++) {
            if (!first) {
                putchar(',');
            }
            printf("%.*s", (int)(j - i + 1), s + i);
            first = 0;
        }
    }
    putchar('\n');
    return 0;
}
