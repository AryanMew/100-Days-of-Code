// Q107: Write a program to find the previous greater element for each element of an array.

#include <stdio.h>

int main(void)
{
    int n, i, j, a[n], previous;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        previous = -1;

        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > a[i])
            {
                previous = a[j];
                break;
            }
        }

        if (i < n - 1)
            printf("%d, ", previous);
        else
            printf("%d", previous);
    }

    return 0;
}