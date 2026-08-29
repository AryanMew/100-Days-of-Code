// Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main(void)
{
    char binary[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    for (i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
    }

    printf("%s", binary);

    return 0;
}