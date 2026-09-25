// Question 96 (Day 48 - Strings):
// Reverse each word in a sentence without changing the word order.
//
// Sample Test Cases:
//   Case 1: Input: I love coding  =>  Output: I evol gnidoc

#include <ctype.h>
#include <stdio.h>
#include <string.h>

static void reverse_range(char *s, size_t left, size_t right) {
    while (left < right) {
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
}

int main(void) {
    char s[2048];
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    size_t len = strcspn(s, "\r\n");
    s[len] = '\0';

    size_t i = 0;
    while (i < len) {
        while (i < len && isspace((unsigned char)s[i])) {
            i++;
        }
        size_t start = i;
        while (i < len && !isspace((unsigned char)s[i])) {
            i++;
        }
        if (i > start) {
            reverse_range(s, start, i - 1);
        }
    }

    printf("%s\n", s);
    return 0;
}
