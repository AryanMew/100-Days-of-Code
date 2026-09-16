// Q30: Write a program to reverse a given number.

#include <stdio.h>

int main(void)
{
    int n, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("%d", reverse);

    return 0;
}