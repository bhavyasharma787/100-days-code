/*
 * Q125 (File Handling):
 * Open an existing file in append mode and allow the user to enter a new line
 * of text. Append the text at the end without overwriting existing content.
 *
 * Sample Test Case:
 * Input:  Existing File: data.txt (Content before execution: Hello world)
 *         User Input: This is appended text.
 * Output: File updated successfully with appended text.
 * Expected File Content (data.txt): Hello world\nThis is appended text.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char text[512];
    if (fgets(text, sizeof(text), stdin) == NULL) {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }

    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }

    int need_newline = 0;
    FILE *check = fopen("data.txt", "r");
    if (check != NULL) {
        int ch;
        int last = '\n';
        int has_content = 0;
        while ((ch = fgetc(check)) != EOF) {
            has_content = 1;
            last = ch;
        }
        if (has_content && last != '\n') {
            need_newline = 1;
        }
        fclose(check);
    }

    FILE *fp = fopen("data.txt", "a");
    if (fp == NULL) {
        fprintf(stderr, "Error: Could not open data.txt\n");
        return 1;
    }

    if (need_newline) {
        fputc('\n', fp);
    }
    fprintf(fp, "%s\n", text);
    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}
