// Q2: Input two numbers and display their sum, difference, product, and quotient

#include <stdio.h>

int main(void) {
    int a, b;
    int sum, diff, product, quotient;

    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d", sum, diff, product, quotient);

    return 0;
}