// Q23 (Day 12) - Conditional Statements
// Question: Write a program to calculate library fine based on late days as follows:
//   First 5 days late: ₹2/day
//   Next 5 days late: ₹4/day
//   Next 20 days late: ₹6/day
//   More than 30 days: Membership Cancelled.
//
// Sample Test Cases:
//   Case 1: Input: 4  ->  Output: Fine ₹8
//   Case 2: Input: 8  ->  Output: Fine ₹22
//   Case 3: Input: 15  ->  Output: Fine ₹60
//   Case 4: Input: 31  ->  Output: Membership Cancelled

#include <stdio.h>

int main(void) {
    int days;
    if (scanf("%d", &days) != 1) {
        return 1;
    }

    if (days <= 0) {
        printf("Fine ₹0\n");
    } else if (days <= 5) {
        printf("Fine ₹%d\n", days * 2);
    } else if (days <= 10) {
        int fine = 5 * 2 + (days - 5) * 4;
        printf("Fine ₹%d\n", fine);
    } else if (days <= 30) {
        int fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
        printf("Fine ₹%d\n", fine);
    } else {
        printf("Membership Cancelled\n");
    }

    return 0;
}
