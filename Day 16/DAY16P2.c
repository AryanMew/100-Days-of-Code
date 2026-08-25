// Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main(void)
{
    int n, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}