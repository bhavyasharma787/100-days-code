/*
 * Q144 (Structures):
 * Write a function that accepts a structure as parameter and prints its
 * members.
 *
 * Sample Test Case:
 * Input:  Neha 104 92
 * Output: Name: Neha | Roll: 104 | Marks: 92
 */

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

static void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main(void) {
    struct Student s;
    if (scanf("%99s %d %d", s.name, &s.roll_no, &s.marks) != 3) {
        return 1;
    }

    printStudent(s);
    return 0;
}
