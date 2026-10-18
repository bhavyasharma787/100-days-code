/*
 * Q121 (File Handling):
 * Write a C program that creates a text file named info.txt in write mode.
 * The program should take the user's name and age as input, and write them
 * to the file using fprintf(). After writing, display a message confirming
 * that the data was successfully saved.
 *
 * Sample Test Case:
 * Input:  Name: Rahul, Age: 23
 * Output: File created successfully! Data written to info.txt
 * Expected File Content (info.txt): Name: Rahul Age: 23
 */

#include <stdio.h>

int main(void) {
    char name[100];
    int age;

    if (scanf("%99s %d", name, &age) != 2) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        fprintf(stderr, "Error: Could not create info.txt\n");
        return 1;
    }

    fprintf(fp, "Name: %s Age: %d\n", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");
    return 0;
}
