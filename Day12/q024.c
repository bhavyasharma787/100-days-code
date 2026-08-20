// Q24 (Day 12) - Conditional Statements
// Question: Write a program to calculate electricity bill based on units consumed with these rates:
//   First 100 units at ₹5/unit
//   Next 100 units at ₹7/unit
//   Next 100 units at ₹10/unit
//   Above at ₹12/unit
//
// Sample Test Cases:
//   Case 1: Input: 50  ->  Output: Bill: ₹250
//   Case 2: Input: 150  ->  Output: Bill: ₹850
//   Case 3: Input: 250  ->  Output: Bill: ₹1700

#include <stdio.h>

int main(void) {
    long long units;
    if (scanf("%lld", &units) != 1) {
        return 1;
    }

    if (units < 0) {
        printf("Invalid units\n");
        return 0;
    }

    long long bill = 0;
    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 7;
    } else if (units <= 300) {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    } else {
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    }

    printf("Bill: ₹%lld\n", bill);
    return 0;
}
