/*
 * Q146 (Structures):
 * Create Employee structure with nested Date structure for joining date and
 * print details.
 *
 * Sample Test Case:
 * Input:  Raj 11 12 05 2020
 * Output: Name: Raj | ID: 11 | Joining Date: 12/05/2020
 */

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[100];
    int id;
    struct Date joining_date;
};

int main(void) {
    struct Employee emp;

    if (scanf("%99s %d %d %d %d",
              emp.name,
              &emp.id,
              &emp.joining_date.day,
              &emp.joining_date.month,
              &emp.joining_date.year) != 5) {
        return 1;
    }

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           emp.name,
           emp.id,
           emp.joining_date.day,
           emp.joining_date.month,
           emp.joining_date.year);
    return 0;
}
