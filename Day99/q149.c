/*
 * Q149 (Structures & Dynamic Memory Allocation):
 * Use malloc() to allocate structure memory dynamically and print details.
 *
 * Sample Test Case:
 * Input:  Tina 105 88
 * Output: Name: Tina | Roll: 105 | Marks: 88
 */

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student *s = malloc(sizeof(struct Student));
    if (s == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    if (scanf("%99s %d %d", s->name, &s->roll_no, &s->marks) != 3) {
        free(s);
        return 1;
    }

    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll_no, s->marks);

    free(s);
    return 0;
}
