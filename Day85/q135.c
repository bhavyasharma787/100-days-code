/*
 * Q135 (Enum):
 * Assign explicit values starting from 10 and print them.
 *
 * Sample Test Case:
 * Input:  No input
 * Output:
 * A=10
 * B=11
 * C=12
 */

#include <stdio.h>

enum Code {
    A = 10,
    B,
    C
};

int main(void) {
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);
    return 0;
}
