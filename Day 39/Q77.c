// Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main(void)
{
    int r, c, i, j, a[100][100], flag = 1;

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

    if (r != c)
        flag = 0;
    else
    {
        for (i = 0; i < r; i++)
        {
            for (j = i + 1; j < r; j++)
            {
                if (a[i][i] == a[j][j])
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 0)
                break;
        }
    }

    if (flag == 1)
        printf("True");
    else
        printf("False");

    return 0;
}