// Q13 (Day 07) - Conditional Statements
// Question: Write a program to input a year and check whether it is a leap year or not using conditional statements.
// Note: Year is a leap year if divisible by 4 but not 100, except if divisible by 400.
//
// Sample Test Cases:
//   Case 1: Input: 2020  ->  Output: Leap year
//   Case 2: Input: 1900  ->  Output: Not a leap year
//   Case 3: Input: 2000  ->  Output: Leap year

#include <stdio.h>

int main(void) {
    int year;
    if (scanf("%d", &year) != 1) {
        return 1;
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    return 0;
}
