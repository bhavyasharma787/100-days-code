/*
 * Q123 (File Handling):
 * Read a text file and count the total number of characters, words, and lines.
 * A word is defined as a sequence of non-space characters separated by spaces
 * or newlines.
 *
 * Sample Test Case:
 * Input:  File: sample.txt (Content: Hello world\nThis is C programming)
 * Output:
 * Characters: 31
 * Words: 5
 * Lines: 2
 */

#include <ctype.h>
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "Error: Could not open sample.txt\n");
        return 1;
    }

    long characters = 0;
    long words = 0;
    long lines = 0;
    int in_word = 0;
    int last_ch = '\n';
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == '\n') {
            lines++;
        }
        if (isspace((unsigned char)ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
        last_ch = ch;
    }

    if (characters > 0 && last_ch != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Characters: %ld\n", characters);
    printf("Words: %ld\n", words);
    printf("Lines: %ld\n", lines);
    return 0;
}
