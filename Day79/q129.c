/*
 * Q129 (File Handling):
 * A file numbers.txt contains a list of integers separated by spaces.
 * Read all integers, compute their sum and average, and print both.
 *
 * Sample Test Case:
 * Input:  File: numbers.txt (Content: 10 20 30 40 50)
 * Output:
 * Sum = 150
 * Average = 30.00
 */

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "Error: Could not open numbers.txt\n");
        return 1;
    }

    long long sum = 0;
    long count = 0;
    int num;

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    double avg = (count > 0) ? ((double)sum / (double)count) : 0.0;
    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}
