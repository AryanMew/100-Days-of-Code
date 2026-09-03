// Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        for (j = 5; j >= i; j--)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}