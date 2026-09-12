// Q68: Delete an element from an array.

#include <stdio.h>

int main(void)
{
    int n, i, pos, a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for (i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}