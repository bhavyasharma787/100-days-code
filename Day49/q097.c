// Question 97 (Day 49 - Strings):
// Print the initials of a name.
//
// Sample Test Cases:
//   Case 1: Input: John Doe  =>  Output: J.D.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1024];
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    size_t len = strcspn(s, "\r\n");
    s[len] = '\0';

    int in_word = 0;
    for (size_t i = 0; i < len; i++) {
        if (isspace((unsigned char)s[i])) {
            in_word = 0;
        } else if (!in_word) {
            printf("%c.", toupper((unsigned char)s[i]));
            in_word = 1;
        }
    }
    putchar('\n');
    return 0;
}
