// Q22 (Day 11) - Conditional Statements
// Question: Write a program to find profit or loss percentage given cost price and selling price.
//
// Sample Test Cases:
//   Case 1: Input: 1000 1200  ->  Output: Profit 20%
//   Case 2: Input: 1000 800  ->  Output: Loss 20%
//   Case 3: Input: 1000 1000  ->  Output: No Profit No Loss

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
    double cost_price, selling_price;
    if (scanf("%lf %lf", &cost_price, &selling_price) != 2) {
        return 1;
    }

    if (cost_price <= 0.0) {
        printf("Invalid cost price\n");
        return 0;
    }

    if (selling_price > cost_price) {
        double profit_pct = ((selling_price - cost_price) / cost_price) * 100.0;
        printf("Profit ");
        print_trimmed(profit_pct);
        printf("%%\n");
    } else if (selling_price < cost_price) {
        double loss_pct = ((cost_price - selling_price) / cost_price) * 100.0;
        printf("Loss ");
        print_trimmed(loss_pct);
        printf("%%\n");
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
