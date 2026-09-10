// Q63: Merge two arrays.

#include <stdio.h>

int main(void)
{
    int n1, n2, i, a[100], b[100], c[200];

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements: ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
        c[n1 + i] = b[i];
    }

    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}