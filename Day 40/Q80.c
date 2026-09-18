// Q80: Multiply two matrices.

#include <stdio.h>

int main(void)
{
    int r1, c1, r2, c2, i, j, k;
    int a[100][100], b[100][100], result[100][100] = {0};

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter first matrix: ");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter second matrix: ");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (c1 != r2)
    {
        printf("Matrix multiplication not possible");
    }
    else
    {
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                for (k = 0; k < c1; k++)
                {
                    result[i][j] = result[i][j] + a[i][k] * b[k][j];
                }
            }
        }

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}