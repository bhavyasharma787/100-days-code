/*
 * Q145 (Structures):
 * Return a structure containing top student's details from a function.
 *
 * Sample Test Case:
 * Input:  3
 *         Riya 101 89
 *         Karan 102 96
 *         Meena 103 92
 * Output: Top Student: Karan | Roll: 102 | Marks: 96
 */

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

static struct Student findTopStudent(const struct Student students[], int n) {
    int top = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[top].marks) {
            top = i;
        }
    }
    return students[top];
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    struct Student *students = malloc((size_t)n * sizeof(*students));
    if (students == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%99s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            free(students);
            return 1;
        }
    }

    struct Student top = findTopStudent(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);

    free(students);
    return 0;
}
