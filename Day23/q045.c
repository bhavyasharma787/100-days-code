// Q45 (Day 23): Loops without Arrays/Strings
// Problem:
//   Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
//
// Sample Test Cases:
//   Case 1:
//     Input: 3
//     Output: Approximate sum: 1.56
//   Case 2:
//     Input: 5
//     Output: Approximate sum: 2.22

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (double)(2 * i) / (double)(4 * i - 1);
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
