// Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main(void) {
    int a, b, x;

    scanf("%d %d", &a, &b);

    printf("Before swapping: a=%d b=%d\n", a, b);

    x = a;
    a = b;
    b = x;

    printf("After swapping: a=%d b=%d", a, b);

    return 0;
}