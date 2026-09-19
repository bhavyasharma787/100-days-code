/*
 * Question 83 (Day 42) - Strings
 * Statement: Count vowels and consonants in a string.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     hello
 *   Output:
 *     Vowels=2, Consonants=3
 */

#include <stdio.h>

int main(void) {
    char str[10005];
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Vowels=0, Consonants=0\n");
        return 0;
    }

    int vowels = 0;
    int consonants = 0;

    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = (char)(ch + ('a' - 'A'));
        }
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
