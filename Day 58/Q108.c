// Q108: Write a program to print the product of all elements except the current element.

#include <stdio.h>

int main(void)
{
    int n, i, j;
    int product;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (i = 0; i < n; i++)
    {
        product = 1;

        for (j = 0; j < n; j++)
        {
            if (i != j)
                product *= nums[j];
        }

        answer[i] = product;
    }

    printf("[");

    for (i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if (i < n - 1)
            printf(",");
    }

    printf("]");

    return 0;
}