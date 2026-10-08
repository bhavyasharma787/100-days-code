// Question 111 (Day 61 - Logic Enhancers):
// Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
//
// Sample Test Cases:
//   Case 1: Input: arr[] = [-8, 2, 3, -6, 10], k = 2  =>  Output: -8 0 -6 -6
//   Case 2: Input: arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3  =>  Output: -1 -1 -7 -15 -15 0
//   Case 3: Input: arr[] = [12, 1, 3, 5], k = 3  =>  Output: 0 0

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 0;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int *arr = (int *)malloc((size_t)n * sizeof(int));
    int *q = (int *)malloc((size_t)n * sizeof(int));
    if (arr == NULL || q == NULL) {
        free(arr);
        free(q);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            free(q);
            return 0;
        }
    }

    int k = 0;
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        free(arr);
        free(q);
        return 0;
    }

    int front = 0, back = 0;
    int first_out = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            q[back++] = i;
        }
        if (i >= k - 1) {
            while (front < back && q[front] < i - k + 1) {
                front++;
            }
            int val = (front < back) ? arr[q[front]] : 0;
            printf("%s%d", first_out ? "" : " ", val);
            first_out = 0;
        }
    }
    putchar('\n');

    free(arr);
    free(q);
    return 0;
}
