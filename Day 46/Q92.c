// Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main(void)
{
    char str[100];
    int i, count[26] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
        count[str[i] - 'a']++;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (count[str[i] - 'a'] > 1)
        {
            printf("%c", str[i]);
            break;
        }
    }

    return 0;
}