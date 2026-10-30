/*
 * Q133 (Enum):
 * Create an enum for months and print how many days each month has.
 *
 * Sample Test Case:
 * Input:  FEB
 * Output: 28 or 29 days
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC,
    INVALID_MONTH
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

    enum Month month = INVALID_MONTH;
    if (strcmp(input, "JAN") == 0 || strcmp(input, "JANUARY") == 0) month = JAN;
    else if (strcmp(input, "FEB") == 0 || strcmp(input, "FEBRUARY") == 0) month = FEB;
    else if (strcmp(input, "MAR") == 0 || strcmp(input, "MARCH") == 0) month = MAR;
    else if (strcmp(input, "APR") == 0 || strcmp(input, "APRIL") == 0) month = APR;
    else if (strcmp(input, "MAY") == 0) month = MAY;
    else if (strcmp(input, "JUN") == 0 || strcmp(input, "JUNE") == 0) month = JUN;
    else if (strcmp(input, "JUL") == 0 || strcmp(input, "JULY") == 0) month = JUL;
    else if (strcmp(input, "AUG") == 0 || strcmp(input, "AUGUST") == 0) month = AUG;
    else if (strcmp(input, "SEP") == 0 || strcmp(input, "SEPTEMBER") == 0) month = SEP;
    else if (strcmp(input, "OCT") == 0 || strcmp(input, "OCTOBER") == 0) month = OCT;
    else if (strcmp(input, "NOV") == 0 || strcmp(input, "NOVEMBER") == 0) month = NOV;
    else if (strcmp(input, "DEC") == 0 || strcmp(input, "DECEMBER") == 0) month = DEC;

    switch (month) {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        case FEB:
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month\n");
            break;
    }

    return 0;
}
