/*
 * Question 86 (Day 43) - Strings
 * Statement: Check if a string is a palindrome.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     madam
 *   Output:
 *     Palindrome
 * Test Case 2:
 *   Input:
 *     hello
 *   Output:
 *     Not palindrome
 */

#include <stdio.h>

int main(void) {
    char str[10005];
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') {
        len++;
    }
    str[len] = '\0';

    int isPalindrome = 1;
    int left = 0;
    int right = len - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    printf("%s\n", isPalindrome ? "Palindrome" : "Not palindrome");
    return 0;
}
