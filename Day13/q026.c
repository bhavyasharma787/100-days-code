// Q26 (Day 13) - Loops without Arrays/Strings
// Question: Write a program to print numbers from 1 to n.
//
// Sample Test Cases:
//   Case 1: Input: 5  ->  Output: 1 2 3 4 5
//   Case 2: Input: 3  ->  Output: 1 2 3

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (i > 1) {
            printf(" ");
        }
        printf("%d", i);
    }
    printf("\n");

    return 0;
}
