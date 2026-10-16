// Question 119 (Day 69 - Logic Enhancers):
// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
//
// Sample Test Cases:
//   Case 1: Input: nums1 = [1,3,3,4]  =>  Output: 3
//   Case 2: Input: nums1 = [1,2,2]  =>  Output: 2
//   Case 3: Input: nums1 = [0,4,1,1,5]  =>  Output: 1

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int key;
    unsigned char used;
} HashSlot;

static size_t hash_int(int x) {
    uint32_t u = (uint32_t)x;
    u ^= u >> 16;
    u *= 0x45d9f3bu;
    u ^= u >> 16;
    return (size_t)u;
}

int main(void) {
    int n = 0;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int *nums = (int *)malloc((size_t)n * sizeof(int));
    if (nums == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            free(nums);
            return 0;
        }
    }

    size_t cap = 16;
    while (cap < (size_t)n * 2) {
        cap <<= 1;
    }

    HashSlot *table = (HashSlot *)calloc(cap, sizeof(HashSlot));
    if (table == NULL) {
        free(nums);
        return 1;
    }

    size_t mask = cap - 1;
    int repeated = -1;
    int found = 0;

    /* Find the repeated element in a single iteration using an open-addressing hash set. */
    for (int i = 0; i < n; i++) {
        size_t idx = hash_int(nums[i]) & mask;
        while (table[idx].used) {
            if (table[idx].key == nums[i]) {
                repeated = nums[i];
                found = 1;
                break;
            }
            idx = (idx + 1) & mask;
        }
        if (found) {
            break;
        }
        table[idx].used = 1;
        table[idx].key = nums[i];
    }

    if (found) {
        printf("%d\n", repeated);
    } else {
        printf("-1\n");
    }

    free(table);
    free(nums);
    return 0;
}
