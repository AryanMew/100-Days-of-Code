// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main(void) {
    float p, r, n, si, ci;

    printf("Enter principal: ");
    scanf("%f", &p);

    printf("Enter rate: ");
    scanf("%f", &r);

    printf("Enter time: ");
    scanf("%f", &n);

    si = (p * r * n) / 100;
    ci = p * pow(1 + r / 100, n) - p;

    printf("Simple Interest=%.2f, Compound Interest=%.2f", si, ci);

    return 0;
}