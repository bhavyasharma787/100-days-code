// Q19 (Day 10) - Conditional Statements
// Question: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
//
// Sample Test Cases:
//   Case 1: Input: 3 3 3  ->  Output: Equilateral
//   Case 2: Input: 3 3 4  ->  Output: Isosceles
//   Case 3: Input: 2 3 4  ->  Output: Scalene

#include <stdio.h>

int main(void) {
    double a, b, c;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        return 1;
    }

    if (a <= 0.0 || b <= 0.0 || c <= 0.0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        printf("Not a valid triangle\n");
    } else if (a == b && b == c) {
        printf("Equilateral\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }

    return 0;
}
