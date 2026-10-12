// Question 115 (Day 65 - Logic Enhancers):
// Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
//
// Sample Test Cases:
//   Case 1: Input: s = "anagram", t = "nagaram"  =>  Output: Anagram
//   Case 2: Input: s = "rat", t = "car"  =>  Output: Not Anagram

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1024];
    char t[1024];
    if (scanf("%1023s %1023s", s, t) != 2) {
        return 0;
    }

    size_t len_s = strlen(s);
    size_t len_t = strlen(t);
    if (len_s != len_t) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[256] = {0};
    for (size_t i = 0; i < len_s; i++) {
        freq[(unsigned char)s[i]]++;
        freq[(unsigned char)t[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
