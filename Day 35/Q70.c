// Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main(void)
{
    int n, k, i, j, temp, a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;

    for (i = 1; i <= k; i++)
    {
        temp = a[n - 1];

        for (j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }

        a[0] = temp;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}