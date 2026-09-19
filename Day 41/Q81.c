// Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>

int main(void)
{
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '\n')
            count++;
    }

    printf("%d", count);

    return 0;
}