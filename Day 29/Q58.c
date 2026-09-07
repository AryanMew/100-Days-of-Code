// Q58: Find the maximum and minimum element in an array.

#include <stdio.h>

int main(void)
{
    int n, i, a[100], max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = min = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }

    printf("Max=%d, Min=%d", max, min);

    return 0;
}