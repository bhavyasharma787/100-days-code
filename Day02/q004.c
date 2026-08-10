// Q4 (Day 02) - User Inputs, Operations & Output
// Question: Write a program to calculate the area and circumference of a circle given its radius.
//
// Sample Test Cases:
//   Case 1: Input: 7  ->  Output: Area=153.94, Circumference=43.96
//   Case 2: Input: 3  ->  Output: Area=28.27, Circumference=18.85

#include <stdio.h>

int main(void) {
    const double PI = 3.14159265358979323846;
    double radius;
    if (scanf("%lf", &radius) != 1) {
        return 1;
    }

    double area = PI * radius * radius;
    double circumference = 2.0 * PI * radius;

    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    return 0;
}
