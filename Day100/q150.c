/*
 * Q150 (Structures & Pointers):
 * Use pointer to struct to modify and display data using -> operator.
 *
 * Sample Test Case:
 * Input:  John 106 91
 * Output: Modified Data: Name: John | Roll: 106 | Marks: 91
 */

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student s = {"Default", 0, 0};
    struct Student *ptr = &s;

    if (scanf("%99s %d %d", ptr->name, &ptr->roll_no, &ptr->marks) != 3) {
        return 1;
    }

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll_no, ptr->marks);
    return 0;
}
