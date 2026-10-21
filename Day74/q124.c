/*
 * Q124 (File Handling):
 * Take two filenames from the user - a source file and a destination file.
 * Copy all the content from the source file to the destination file using
 * fgetc() and fputc().
 *
 * Sample Test Case:
 * Input:  Source File: source.txt (Content: Learning C File Handling),
 *         Destination File: destination.txt
 * Output: File copied successfully to destination.txt
 */

#include <stdio.h>

int main(void) {
    char src_name[256];
    char dst_name[256];

    if (scanf("%255s %255s", src_name, dst_name) != 2) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    FILE *src = fopen(src_name, "r");
    if (src == NULL) {
        fprintf(stderr, "Error: Could not open source file %s\n", src_name);
        return 1;
    }

    FILE *dst = fopen(dst_name, "w");
    if (dst == NULL) {
        fprintf(stderr, "Error: Could not open destination file %s\n", dst_name);
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }

    fclose(src);
    fclose(dst);

    printf("File copied successfully to %s\n", dst_name);
    return 0;
}
