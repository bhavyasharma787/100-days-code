// Question 95 (Day 48 - Strings):
// Check if one string is a rotation of another.
//
// Sample Test Cases:
//   Case 1: Input: abcde | deabc  =>  Output: Rotation
//   Case 2: Input: abc | acb  =>  Output: Not rotation

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char s1[1024];
    char s2[1024];
    if (fgets(s1, sizeof(s1), stdin) == NULL) {
        return 0;
    }
    if (fgets(s2, sizeof(s2), stdin) == NULL) {
        return 0;
    }

    size_t len1 = strcspn(s1, "\r\n");
    size_t len2 = strcspn(s2, "\r\n");
    s1[len1] = '\0';
    s2[len2] = '\0';

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    char *doubled = (char *)malloc(2 * len1 + 1);
    if (doubled == NULL) {
        return 1;
    }

    memcpy(doubled, s1, len1);
    memcpy(doubled + len1, s1, len1);
    doubled[2 * len1] = '\0';

    if (strstr(doubled, s2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    free(doubled);
    return 0;
}
