// Q18 (Day 09) - Conditional Statements
// Question: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
//   90-100: Grade A
//   80-89: Grade B
//   70-79: Grade C
//   60-69: Grade D
//   below 60: Grade F.
//
// Sample Test Cases:
//   Case 1: Input: 95  ->  Output: Grade A
//   Case 2: Input: 82  ->  Output: Grade B
//   Case 3: Input: 68  ->  Output: Grade D
//   Case 4: Input: 50  ->  Output: Grade F

#include <stdio.h>

int main(void) {
    double percentage;
    if (scanf("%lf", &percentage) != 1) {
        return 1;
    }

    if (percentage < 0.0 || percentage > 100.0) {
        printf("Invalid percentage\n");
    } else if (percentage >= 90.0) {
        printf("Grade A\n");
    } else if (percentage >= 80.0) {
        printf("Grade B\n");
    } else if (percentage >= 70.0) {
        printf("Grade C\n");
    } else if (percentage >= 60.0) {
        printf("Grade D\n");
    } else {
        printf("Grade F\n");
    }

    return 0;
}
