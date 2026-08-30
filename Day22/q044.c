// Q44 (Day 22): Loops without Arrays/Strings
// Problem:
//   Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + ... up to n terms.
//
// Sample Test Cases:
//   Case 1:
//     Input: 3
//     Output: Approximate sum: 3.3
//   Case 2:
//     Input: 5
//     Output: Approximate sum: 4.4

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            sum += (double)(2 * i - 1) / (double)(2 * i);
        }
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}
