/*
 * Q134 (Enum):
 * Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages
 * accordingly.
 *
 * Sample Test Case:
 * Input:  FAILURE
 * Output: Operation failed
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT,
    INVALID_STATUS
};

static void to_upper_str(char *s) {
    for (size_t i = 0; s[i] != '\0'; i++) {
        s[i] = (char)toupper((unsigned char)s[i]);
    }
}

int main(void) {
    char input[32];
    if (scanf("%31s", input) != 1) {
        return 1;
    }
    to_upper_str(input);

    enum Status status = INVALID_STATUS;
    if (strcmp(input, "SUCCESS") == 0) {
        status = SUCCESS;
    } else if (strcmp(input, "FAILURE") == 0) {
        status = FAILURE;
    } else if (strcmp(input, "TIMEOUT") == 0) {
        status = TIMEOUT;
    }

    switch (status) {
        case SUCCESS:
            printf("Operation succeeded\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Unknown status\n");
            break;
    }

    return 0;
}
