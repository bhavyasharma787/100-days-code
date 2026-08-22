// Q28 (Day 14) - Loops without Arrays/Strings
// Question: Write a program to print the product of even numbers from 1 to n.
//
// Sample Test Cases:
//   Case 1: Input: 4  ->  Output: 8 (2 * 4)
//   Case 2: Input: 6  ->  Output: 48 (2 * 4 * 6)

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 2) {
        printf("0 (no even numbers)\n");
        return 0;
    }

    unsigned long long product = 1;
    for (int i = 2; i <= n; i += 2) {
        product *= (unsigned long long)i;
    }

    printf("%llu (", product);
    for (int i = 2; i <= n; i += 2) {
        if (i > 2) {
            printf(" * ");
        }
        printf("%d", i);
    }
    printf(")\n");

    return 0;
}
