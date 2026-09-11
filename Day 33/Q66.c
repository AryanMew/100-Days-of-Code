// Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main(void)
{
    int n, i, element, a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    i = n - 1;

    while (i >= 0 && a[i] > element)
    {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = element;
    n++;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}