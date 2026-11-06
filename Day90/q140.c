/*
 * Q140 (Enum):
 * Define a struct with enum Gender and print person's gender.
 *
 * Sample Test Case:
 * Input:  Gender=MALE
 * Output: Male
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER,
    INVALID_GENDER
};

struct Person {
    enum Gender gender;
};

static void to_upper_str(char *s) {
    for (size_t i = 0; s[i] != '\0'; i++) {
        s[i] = (char)toupper((unsigned char)s[i]);
    }
}

int main(void) {
    char input[64];
    if (scanf("%63s", input) != 1) {
        return 1;
    }

    char *val = strchr(input, '=');
    val = (val != NULL) ? (val + 1) : input;
    to_upper_str(val);

    struct Person p;
    if (strcmp(val, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(val, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else if (strcmp(val, "OTHER") == 0) {
        p.gender = OTHER;
    } else {
        p.gender = INVALID_GENDER;
    }

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid gender\n");
            break;
    }

    return 0;
}
