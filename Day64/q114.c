// Question 114 (Day 64 - Logic Enhancers):
// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
//
// Sample Test Cases:
//   Case 1: Input: s = "abcabcbb"  =>  Output: 3
//   Case 2: Input: s = "bbbbb"  =>  Output: 1
//   Case 3: Input: s = "pwwkew"  =>  Output: 3

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[4096];
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    size_t len = strcspn(s, "\r\n");
    s[len] = '\0';

    int last_index[256];
    for (int i = 0; i < 256; i++) {
        last_index[i] = -1;
    }

    int max_len = 0;
    int left = 0;
    for (int right = 0; right < (int)len; right++) {
        unsigned char c = (unsigned char)s[right];
        if (last_index[c] >= left) {
            left = last_index[c] + 1;
        }
        last_index[c] = right;
        int cur_len = right - left + 1;
        if (cur_len > max_len) {
            max_len = cur_len;
        }
    }

    printf("%d\n", max_len);
    return 0;
}
