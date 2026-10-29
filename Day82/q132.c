/*
 * Q132 (Enum):
 * Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop',
 * 'Wait', or 'Go' based on its value.
 *
 * Sample Test Case:
 * Input:  GREEN
 * Output: Go
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN,
    INVALID_LIGHT
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

    enum TrafficLight light = INVALID_LIGHT;
    if (strcmp(input, "RED") == 0) {
        light = RED;
    } else if (strcmp(input, "YELLOW") == 0) {
        light = YELLOW;
    } else if (strcmp(input, "GREEN") == 0) {
        light = GREEN;
    }

    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light\n");
            break;
    }

    return 0;
}
