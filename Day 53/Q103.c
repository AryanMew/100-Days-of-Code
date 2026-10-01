// Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array.

#include <stdio.h>

int main(void)
{
    int n, i, a[100], total = 0, left = 0, pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        total = total + a[i];
    }

    for (i = 0; i < n; i++)
    {
        if (left == total - left - a[i])
        {
            pivot = i;
            break;
        }

        left = left + a[i];
    }

    printf("%d", pivot);

    return 0;
}