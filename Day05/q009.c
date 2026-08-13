// Q9 (Day 05) - User Inputs, Operations & Output
// Question: Write a program to calculate simple and compound interest for given principal, rate, and time.
//
// Sample Test Cases:
//   Case 1: Input: 1000 5 2  ->  Output: Simple Interest=100, Compound Interest=102.5
//   Case 2: Input: 5000 7 3  ->  Output: Simple Interest=1050, Compound Interest=1125.76

#include <math.h>
#include <stdio.h>
#include <string.h>

static void print_trimmed(double value) {
    char buf[64];
    if (fabs(value) < 0.005) {
        value = 0.0;
    }
    snprintf(buf, sizeof(buf), "%.2f", value);

    size_t len = strlen(buf);
    while (len > 0 && buf[len - 1] == '0') {
        buf[--len] = '\0';
    }
    if (len > 0 && buf[len - 1] == '.') {
        buf[--len] = '\0';
    }
    printf("%s", buf);
}

int main(void) {
    double principal, rate, time;
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) {
        return 1;
    }

    double simple_interest = (principal * rate * time) / 100.0;
    double compound_interest = principal * pow(1.0 + rate / 100.0, time) - principal;

    printf("Simple Interest=");
    print_trimmed(simple_interest);
    printf(", Compound Interest=");
    print_trimmed(compound_interest);
    printf("\n");

    return 0;
}
