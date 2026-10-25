/*
 * Q128 (File Handling):
 * Read a text file and count how many vowels and consonants are in the file.
 * Ignore digits and special characters.
 *
 * Sample Test Case:
 * Input:  File: text.txt (Content: Welcome to C language)
 * Output:
 * Vowels: 8
 * Consonants: 10
 */

#include <ctype.h>
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "Error: Could not open text.txt\n");
        return 1;
    }

    long vowels = 0;
    long consonants = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha((unsigned char)ch)) {
            int lower = tolower((unsigned char)ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %ld\n", vowels);
    printf("Consonants: %ld\n", consonants);
    return 0;
}
