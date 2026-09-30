// Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index of the smallest element in arr[] that is greater than or equal to x and print it.

#include <stdio.h>

int main(void)
{
    int n, x, i, index = -1, a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (a[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}