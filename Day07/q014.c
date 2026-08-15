// Q14 (Day 07) - Conditional Statements
// Question: Write a program to input a character and check whether it is a vowel or consonant using if-else.
//
// Sample Test Cases:
//   Case 1: Input: a  ->  Output: Vowel
//   Case 2: Input: b  ->  Output: Consonant

#include <stdio.h>

int main(void) {
    char ch;
    if (scanf(" %c", &ch) != 1) {
        return 1;
    }

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}
