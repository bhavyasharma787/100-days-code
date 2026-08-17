// Q17 (Day 09) - Conditional Statements
// Question: Write a program to find the roots of a quadratic equation and categorize them.
//
// Sample Test Cases:
//   Case 1: Input: 1 -3 2  ->  Output: Roots are real and different: 2, 1
//   Case 2: Input: 1 -2 1  ->  Output: Roots are real and same: 1
//   Case 3: Input: 1 2 5  ->  Output: Roots are complex

#include <math.h>
#include <stdio.h>

int main(void) {
    double a, b, c;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        return 1;
    }

    if (a == 0.0) {
        printf("Not a quadratic equation\n");
        return 0;
    }

    double discriminant = b * b - 4.0 * a * c;

    if (discriminant > 0.0) {
        double root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        double root2 = (-b - sqrt(discriminant)) / (2.0 * a);
        if (fabs(root1) < 1e-12) {
            root1 = 0.0;
        }
        if (fabs(root2) < 1e-12) {
            root2 = 0.0;
        }
        printf("Roots are real and different: %g, %g\n", root1, root2);
    } else if (discriminant == 0.0) {
        double root = -b / (2.0 * a);
        if (fabs(root) < 1e-12) {
            root = 0.0;
        }
        printf("Roots are real and same: %g\n", root);
    } else {
        printf("Roots are complex\n");
    }

    return 0;
}
