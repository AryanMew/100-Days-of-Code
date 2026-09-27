// Q97: Print the initials of a name.

#include <stdio.h>

int main(void)
{
    char str[100];
    int i;

    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);

    printf("%c.", str[0]);

    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i - 1] == ' ')
            printf("%c.", str[i]);
    }

    return 0;
}