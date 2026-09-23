// Question 92 (Day 46 - Strings):
// Find the first repeating lowercase alphabet in a string.
//
// Sample Test Cases:
//   Case 1: Input: stress  =>  Output: s

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1024];
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    size_t len = strcspn(s, "\r\n");
    s[len] = '\0';

    int seen[26] = {0};
    for (size_t i = 0; i < len; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int idx = s[i] - 'a';
            if (seen[idx]) {
                printf("%c\n", s[i]);
                return 0;
            }
            seen[idx] = 1;
        }
    }

    printf("-1\n");
    return 0;
}
