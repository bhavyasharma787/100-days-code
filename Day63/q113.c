// Question 113 (Day 63 - Logic Enhancers):
// Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
//
// Sample Test Cases:
//   Case 1: Input: arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4  =>  Output: 5
//   Case 2: Input: arr[] = [7, 10, 4, 3, 20, 15], k = 3  =>  Output: 7

#include <stdio.h>
#include <stdlib.h>

static int cmp_int(const void *a, const void *b) {
    int va = *(const int *)a;
    int vb = *(const int *)b;
    return (va > vb) - (va < vb);
}

int main(void) {
    int n = 0;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int *arr = (int *)malloc((size_t)n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 0;
        }
    }

    int k = 0;
    if (scanf("%d", &k) != 1 || k < 1 || k > n) {
        free(arr);
        return 0;
    }

    qsort(arr, (size_t)n, sizeof(int), cmp_int);
    printf("%d\n", arr[k - 1]);

    free(arr);
    return 0;
}
