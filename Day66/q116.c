// Question 116 (Day 66 - Logic Enhancers):
// Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
//
// Sample Test Cases:
//   Case 1: Input: nums = [2,7,11,15], target = 9  =>  Output: 0 1
//   Case 2: Input: nums = [3,2,4], target = 6  =>  Output: 1 2
//   Case 3: Input: nums = [3,3], target = 6  =>  Output: 0 1

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value;
    int index;
} Pair;

static int cmp_pair(const void *a, const void *b) {
    const Pair *pa = (const Pair *)a;
    const Pair *pb = (const Pair *)b;
    if (pa->value < pb->value) {
        return -1;
    }
    if (pa->value > pb->value) {
        return 1;
    }
    return (pa->index > pb->index) - (pa->index < pb->index);
}

int main(void) {
    int n = 0;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 0;
    }

    Pair *pairs = NULL;
    if (n > 0) {
        pairs = (Pair *)malloc((size_t)n * sizeof(Pair));
        if (pairs == NULL) {
            return 1;
        }
        for (int i = 0; i < n; i++) {
            if (scanf("%d", &pairs[i].value) != 1) {
                free(pairs);
                return 0;
            }
            pairs[i].index = i;
        }
    }

    long long target = 0;
    if (scanf("%lld", &target) != 1) {
        free(pairs);
        return 0;
    }

    if (n < 2) {
        printf("-1 -1\n");
        free(pairs);
        return 0;
    }

    qsort(pairs, (size_t)n, sizeof(Pair), cmp_pair);

    int left = 0, right = n - 1;
    int ans_i = -1, ans_j = -1;
    while (left < right) {
        long long sum = (long long)pairs[left].value + pairs[right].value;
        if (sum == target) {
            ans_i = pairs[left].index;
            ans_j = pairs[right].index;
            if (ans_i > ans_j) {
                int tmp = ans_i;
                ans_i = ans_j;
                ans_j = tmp;
            }
            break;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    printf("%d %d\n", ans_i, ans_j);
    free(pairs);
    return 0;
}
