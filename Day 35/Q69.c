// Q69: Find the second largest element in an array.

#include <stdio.h>

int main(void)
{
    int n, i, a[100], largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = second = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("%d", second);

    return 0;
}