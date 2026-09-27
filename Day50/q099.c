// Question 99 (Day 50 - Strings):
// Change the date format from dd/04/yyyy to dd-Apr-yyyy.
//
// Sample Test Cases:
//   Case 1: Input: 15/04/2025  =>  Output: 15-Apr-2025

#include <stdio.h>

int main(void) {
    static const char *const MONTHS[12] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    int dd = 0, mm = 0, yyyy = 0;
    if (scanf("%d/%d/%d", &dd, &mm, &yyyy) != 3) {
        return 0;
    }

    if (mm < 1 || mm > 12) {
        printf("Invalid date\n");
        return 0;
    }

    printf("%02d-%s-%04d\n", dd, MONTHS[mm - 1], yyyy);
    return 0;
}
