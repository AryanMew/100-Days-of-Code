// Q106: Write a program to find the next greater element for each element of an array.

#include <stdio.h>

int main(void)
{
    int n, i, j, a[n], next;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        next = -1;

        for (j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                next = a[j];
                break;
            }
        }

        if (i < n - 1)
            printf("%d, ", next);
        else
            printf("%d", next);
    }

    return 0;
}