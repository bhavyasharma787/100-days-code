// Question 98 (Day 49 - Strings):
// Print initials of a name with the surname displayed in full.
//
// Sample Test Cases:
//   Case 1: Input: John David Doe  =>  Output: J.D. Doe

#include <ctype.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    size_t start;
    size_t len;
} WordSpan;

int main(void) {
    char s[1024];
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    size_t len = strcspn(s, "\r\n");
    s[len] = '\0';

    WordSpan words[256];
    int count = 0;

    size_t i = 0;
    while (i < len && count < 256) {
        while (i < len && isspace((unsigned char)s[i])) {
            i++;
        }
        size_t start = i;
        while (i < len && !isspace((unsigned char)s[i])) {
            i++;
        }
        if (i > start) {
            words[count].start = start;
            words[count].len = i - start;
            count++;
        }
    }

    if (count == 0) {
        putchar('\n');
    } else if (count == 1) {
        printf("%.*s\n", (int)words[0].len, s + words[0].start);
    } else {
        for (int w = 0; w < count - 1; w++) {
            printf("%c.", toupper((unsigned char)s[words[w].start]));
        }
        printf(" %.*s\n", (int)words[count - 1].len, s + words[count - 1].start);
    }

    return 0;
}
