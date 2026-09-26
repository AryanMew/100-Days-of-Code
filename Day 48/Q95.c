// Q95: Check if one string is a rotation of another.

#include <stdio.h>

int main(void)
{
    char a[100], b[100];
    int i, j, n, flag = 0;

    printf("Enter two strings: ");
    scanf("%s %s", a, b);

    for (n = 0; a[n] != '\0'; n++);

    for (i = 0; b[i] != '\0'; i++);

    if (n == i)
    {
        for (i = 0; i < n; i++)
        {
            flag = 1;

            for (j = 0; j < n; j++)
            {
                if (a[j] != b[(i + j) % n])
                {
                    flag = 0;
                    break;
                }
            }

            if (flag)
                break;
        }
    }

    if (flag)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}