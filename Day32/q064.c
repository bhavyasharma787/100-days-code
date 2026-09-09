/*
 * Question 64 (Day 32) - Arrays (1D)
 * Statement: Find the digit that occurs the most times in an integer number.
 *
 * Sample Test Cases:
 * Test Case 1:
 *   Input:
 *     112233
 *   Output:
 *     1
 * Test Case 2:
 *   Input:
 *     887799
 *   Output:
 *     7
 */

#include <stdio.h>

int main(void) {
    char num[1024];
    if (scanf("%1023s", num) != 1) {
        return 1;
    }

    int freq[10] = {0};
    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            freq[num[i] - '0']++;
        }
    }

    int bestDigit = 0;
    int maxFreq = -1;
    for (int d = 0; d <= 9; d++) {
        if (freq[d] > maxFreq) {
            maxFreq = freq[d];
            bestDigit = d;
        }
    }

    printf("%d\n", bestDigit);
    return 0;
}
