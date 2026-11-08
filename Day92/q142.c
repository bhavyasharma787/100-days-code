/*
 * Q142 (Structures):
 * Store details of 5 students in an array of structures and print all.
 *
 * Sample Test Case:
 * Input:  Details of 5 students (Name, Roll, Marks)
 * Output: Tabular list of all 5 students with their details
 */

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        if (scanf("%99s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            return 1;
        }
    }

    printf("%-20s %-10s %-10s\n", "Name", "Roll", "Marks");
    for (int i = 0; i < 5; i++) {
        printf("%-20s %-10d %-10d\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
