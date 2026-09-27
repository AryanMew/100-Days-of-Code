// Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main(void)
{
    char str[100];
    int i, last = 0;

    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            last = i;
    }

    for (i = 0; i < last; i++)
    {
        if (i == 0 || str[i - 1] == ' ')
            printf("%c. ", str[i]);
    }

    printf("%s", str + last + 1);

    return 0;
}