/*
 * Q130 (File Handling):
 * Store multiple student records (name, roll number, marks) into a file using
 * fprintf(). Then read them using fscanf() and display each record.
 *
 * Sample Test Case:
 * Input:  2
 *         Asha 101 85
 *         Ravi 102 92
 * Output:
 * Name: Asha | Roll: 101 | Marks: 85
 * Name: Ravi | Roll: 102 | Marks: 92
 * Expected File Content (students.txt): Asha 101 85\nRavi 102 92
 */

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid number of students.\n");
        return 1;
    }

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        fprintf(stderr, "Error: Could not open students.txt for writing\n");
        return 1;
    }

    char name[100];
    int roll;
    int marks;

    for (int i = 0; i < n; i++) {
        if (scanf("%99s %d %d", name, &roll, &marks) != 3) {
            fprintf(stderr, "Invalid student record.\n");
            fclose(fp);
            return 1;
        }
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "Error: Could not open students.txt for reading\n");
        return 1;
    }

    while (fscanf(fp, "%99s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
