// Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, original, digit, count = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        count++;
        n = n / 10;
    }

    n = original;

    while (n != 0)
    {
        digit = n % 10;
        sum = sum + pow(digit, count);
        n = n / 10;
    }

    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}