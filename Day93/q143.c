/*
 * Q143 (Structures):
 * Find and print the student with the highest marks.
 *
 * Sample Test Case:
 * Input:  3
 *         Ravi 101 95
 *         Sita 102 85
 *         Aman 103 88
 * Output: Topper: Ravi (Marks: 95)
 */

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

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

    int top = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[top].marks) {
            top = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", students[top].name, students[top].marks);

    free(students);
    return 0;
}
