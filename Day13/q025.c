// Q25 (Day 13) - Conditional Statements
// Question: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
//
// Sample Test Cases:
//   Case 1: Input: 4 2 +  ->  Output: 6
//   Case 2: Input: 10 3 %  ->  Output: 1
//   Case 3: Input: 15 5 /  ->  Output: 3

#include <stdio.h>

int main(void) {
    int a, b;
    char op;
    if (scanf("%d %d %c", &a, &b, &op) != 3) {
        return 1;
    }

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%d\n", a / b);
            }
            break;
        case '%':
            if (b == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%d\n", a % b);
            }
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}
