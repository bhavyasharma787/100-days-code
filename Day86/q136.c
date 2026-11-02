/*
 * Q136 (Enum):
 * Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform
 * operations using switch.
 *
 * Sample Test Case:
 * Input:  ADD 10 20
 * Output: 30
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY,
    INVALID_OP
};

static void to_upper_str(char *s) {
    for (size_t i = 0; s[i] != '\0'; i++) {
        s[i] = (char)toupper((unsigned char)s[i]);
    }
}

int main(void) {
    char op_str[32];
    int a, b;

    if (scanf("%31s %d %d", op_str, &a, &b) != 3) {
        return 1;
    }
    to_upper_str(op_str);

    enum Operation op = INVALID_OP;
    if (strcmp(op_str, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(op_str, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else if (strcmp(op_str, "MULTIPLY") == 0) {
        op = MULTIPLY;
    }

    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid operation\n");
            break;
    }

    return 0;
}
