// Question 120 (Day 70 - File Handling):
// Write a program to take a string input. Change it to sentence case.
//
// Sample Test Cases:
//   Case 1: Input: str = I am trying to build logic.  =>  Output: I Am Trying To Build Logic
//   Case 2: Input: str = The classes are supposed to start early.  =>  Output: The Classes Are Supposed To Start Early.
//   Case 3: Input: str = We are going to look at 26 different test cases.  =>  Output: We Are Going To Look At 26 Different Test Cases.

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

    int new_word = 1;
    for (size_t i = 0; i < len; i++) {
        unsigned char c = (unsigned char)s[i];
        if (isspace(c)) {
            new_word = 1;
        } else if (new_word) {
            if (isalpha(c)) {
                s[i] = (char)toupper(c);
            }
            new_word = 0;
        } else if (isalpha(c)) {
            s[i] = (char)tolower(c);
        }
    }

    printf("%s\n", s);
    return 0;
}
