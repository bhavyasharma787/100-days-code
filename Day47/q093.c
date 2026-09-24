// Question 93 (Day 47 - Strings):
// Check if two strings are anagrams of each other.
//
// Sample Test Cases:
//   Case 1: Input: listen | silent  =>  Output: Anagrams
//   Case 2: Input: hello | world  =>  Output: Not anagrams

#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[1024];
    char s2[1024];
    if (fgets(s1, sizeof(s1), stdin) == NULL) {
        return 0;
    }
    if (fgets(s2, sizeof(s2), stdin) == NULL) {
        return 0;
    }

    size_t len1 = strcspn(s1, "\r\n");
    size_t len2 = strcspn(s2, "\r\n");
    s1[len1] = '\0';
    s2[len2] = '\0';

    if (len1 != len2) {
        printf("Not anagrams\n");
        return 0;
    }

    int freq[256] = {0};
    for (size_t i = 0; i < len1; i++) {
        freq[(unsigned char)s1[i]]++;
        freq[(unsigned char)s2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
