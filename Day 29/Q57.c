// Q57: Find the sum of array elements.

#include <stdio.h>

int main(void)
{
    int n, i, a[100], sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("%d", sum);

    return 0;
}