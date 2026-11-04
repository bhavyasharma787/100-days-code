/*
 * Q138 (Enum):
 * Print all enum names and integer values using a loop.
 *
 * Sample Test Case:
 * Input:  No input
 * Output:
 * RED=0
 * YELLOW=1
 * GREEN=2
 */

#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN,
    LIGHT_COUNT
};

int main(void) {
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    for (int i = RED; i < LIGHT_COUNT; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}
