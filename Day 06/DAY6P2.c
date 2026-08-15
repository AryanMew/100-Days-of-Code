// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main(void) {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n >= 0) {
        if (n == 0) {
            printf("Zero");
        } else {
            printf("Positive");
        }
    } else {
        printf("Negative");
    }

    return 0;
}