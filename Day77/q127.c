/*
 * Q127 (File Handling):
 * Write a program that reads text from input.txt, converts all lowercase
 * letters to uppercase, and writes the result to output.txt.
 *
 * Sample Test Case:
 * Input File (input.txt):   Hello World\nC programming
 * Output File (output.txt): HELLO WORLD\nC PROGRAMMING
 */

#include <ctype.h>
#include <stdio.h>

int main(void) {
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) {
        fprintf(stderr, "Error: Could not open input.txt\n");
        return 1;
    }

    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        fprintf(stderr, "Error: Could not open output.txt\n");
        fclose(in);
        return 1;
    }

    int ch;
    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper((unsigned char)ch), out);
    }

    fclose(in);
    fclose(out);
    return 0;
}
