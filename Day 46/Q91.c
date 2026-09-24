// Q91: Remove all vowels from a string.

#include <stdio.h>

int main(void)
{
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u' && str[i] != 'A' &&
            str[i] != 'E' && str[i] != 'I' && str[i] != 'O' &&
            str[i] != 'U')
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}