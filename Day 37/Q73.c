// Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main(void)
{
    int r, c, i, j, a[100][100], sum[100];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements: ");
    for (i = 0; i < r; i++)
    {
        sum[i] = 0;

        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            sum[i] = sum[i] + a[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}