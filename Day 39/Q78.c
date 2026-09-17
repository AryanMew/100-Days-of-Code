// Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main(void)
{
    int r, c, i, j, a[100][100], sum = 0;

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

    for (i = 0; i < r; i++)
        sum = sum + a[i][i];

    printf("%d", sum);

    return 0;
}