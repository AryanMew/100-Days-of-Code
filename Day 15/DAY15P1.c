// Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main(void)
{
    int n, i, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("%d", factorial);

    return 0;
}