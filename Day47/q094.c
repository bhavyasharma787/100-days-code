// Question 94 (Day 47 - Strings):
// Find the longest word in a sentence.
//
// Sample Test Cases:
//   Case 1: Input: I love programming  =>  Output: programming

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[2048];
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    size_t len = strcspn(s, "\r\n");
    s[len] = '\0';

    size_t best_start = 0;
    size_t best_len = 0;

    size_t i = 0;
    while (i < len) {
        while (i < len && isspace((unsigned char)s[i])) {
            i++;
        }
        size_t start = i;
        while (i < len && !isspace((unsigned char)s[i])) {
            i++;
        }
        size_t cur_len = i - start;
        if (cur_len > best_len) {
            best_len = cur_len;
            best_start = start;
        }
    }

    printf("%.*s\n", (int)best_len, s + best_start);
    return 0;
}
