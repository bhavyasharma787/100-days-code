/*
 * Q137 (Enum):
 * Create an enum for user roles (ADMIN, USER, GUEST) and display messages
 * based on role.
 *
 * Sample Test Case:
 * Input:  GUEST
 * Output: Welcome Guest!
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST,
    INVALID_ROLE
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

    enum Role role = INVALID_ROLE;
    if (strcmp(input, "ADMIN") == 0) {
        role = ADMIN;
    } else if (strcmp(input, "USER") == 0) {
        role = USER;
    } else if (strcmp(input, "GUEST") == 0) {
        role = GUEST;
    }

    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid role\n");
            break;
    }

    return 0;
}
