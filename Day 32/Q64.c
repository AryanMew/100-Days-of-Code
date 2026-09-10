// Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main(void)
{
    int n, digit, i, max = 0, result = 0;
    int count[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}