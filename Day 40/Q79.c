// Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main(void)
{
    int r, c, i, j, k, a[100][100];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (k = 0; k < r + c - 1; k++)
    {
        for (i = 0; i < r; i++)
        {
            j = k - i;

            if (j >= 0 && j < c)
                printf("%d ", a[i][j]);
        }
    }

    return 0;
}