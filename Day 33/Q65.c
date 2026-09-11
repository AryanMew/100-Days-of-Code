// Q65: Search in a sorted array using binary search.

#include <stdio.h>

int main(void)
{
    int n, i, a[100], search, low, high, mid, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == search)
        {
            index = mid;
            break;
        }
        else if (a[mid] < search)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (index != -1)
        printf("Found at index %d", index);
    else
        printf("-1");

    return 0;
}