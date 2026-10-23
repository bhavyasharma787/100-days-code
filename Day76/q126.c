/*
 * Q126 (File Handling):
 * Ask the user for a filename. Check if it exists by trying to open it in
 * read mode. If the file pointer is NULL, print an error message; otherwise,
 * read and display its content.
 *
 * Sample Test Cases:
 * Input 1:  sample.txt (File Exists: Yes)
 * Output 1:
 * File opened successfully.
 * (Displays file content)
 *
 * Input 2:  nofile.txt (File Exists: No)
 * Output 2: Error: File does not exist!
 */

#include <stdio.h>

int main(void) {
    char filename[256];
    if (scanf("%255s", filename) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 0;
    }

    printf("File opened successfully.\n");
    char line[256];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
