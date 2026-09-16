// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main(void)
{
    int n, i;
    float sum = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        sum = sum + (float)(2 * i - 1) / (i + 1);
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}