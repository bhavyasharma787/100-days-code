/*
 * Q148 (Structures):
 * Take two structs as input and check if they are identical.
 *
 * Sample Test Case:
 * Input:  Asha 101 90
 *         Asha 101 90
 * Output: Same
 */

#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student s1, s2;

    if (scanf("%99s %d %d", s1.name, &s1.roll_no, &s1.marks) != 3) {
        return 1;
    }
    if (scanf("%99s %d %d", s2.name, &s2.roll_no, &s2.marks) != 3) {
        return 1;
    }

    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }

    return 0;
}
