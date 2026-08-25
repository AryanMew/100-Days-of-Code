// Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main(void)
{
    int n, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    while (i > 0)
    {
        i--;
        printf("%d", binary[i]);
    }

    return 0;
}