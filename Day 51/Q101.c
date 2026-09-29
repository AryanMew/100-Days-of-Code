// Q101: Write a Program to take a sorted array and an integer target as inputs. Print the first and last occurrence of the target and their indices.

#include <stdio.h>

int main(void)
{
    int n, i, target, a[100];
    int first = -1, last = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            if (first == -1)
                first = i;

            last = i;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}