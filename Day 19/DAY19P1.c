// Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main(void)
{
    int a, b, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("%d", lcm);

    return 0;
}