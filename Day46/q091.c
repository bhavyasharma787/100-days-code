// Question 91 (Day 46 - Strings):
// Remove all vowels from a string.
//
// Sample Test Cases:
//   Case 1: Input: education  =>  Output: dctn

#include <stdio.h>
#include <string.h>

static int is_vowel(char c) {
    switch (c) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            return 1;
        default:
            return 0;
    }
}

int main(void) {
    char s[1024];
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    size_t len = strcspn(s, "\r\n");
    s[len] = '\0';

    size_t write_idx = 0;
    for (size_t i = 0; i < len; i++) {
        if (!is_vowel(s[i])) {
            s[write_idx++] = s[i];
        }
    }
    s[write_idx] = '\0';

    printf("%s\n", s);
    return 0;
}
