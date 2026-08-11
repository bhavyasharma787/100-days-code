// Q5 (Day 03) - User Inputs, Operations & Output
// Question: Write a program to convert temperature from Celsius to Fahrenheit.
//
// Sample Test Cases:
//   Case 1: Input: 0  ->  Output: Fahrenheit=32
//   Case 2: Input: 100  ->  Output: Fahrenheit=212

#include <stdio.h>

int main(void) {
    double celsius;
    if (scanf("%lf", &celsius) != 1) {
        return 1;
    }

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("Fahrenheit=%g\n", fahrenheit);
    return 0;
}
