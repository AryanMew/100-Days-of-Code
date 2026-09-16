// Q34: Write a program to check if a number is prime.

#include <stdio.h>

int main(void)
{
    int n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        flag = 1;
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}