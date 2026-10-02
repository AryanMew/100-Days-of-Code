// Q104: Write a program to find the pivot integer x.

#include <stdio.h>

int main(void)
{
    int n, x, left, right, pivot = -1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        left = x * (x + 1) / 2;
        right = (x + n) * (n - x + 1) / 2;

        if (left == right)
        {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}