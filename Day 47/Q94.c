// Q94: Find the longest word in a sentence.

#include <stdio.h>

int main(void)
{
    char str[100], word[100], longest[100];
    int i = 0, j = 0, max = 0, length;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        j = 0;

        while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            word[j++] = str[i++];
        }

        word[j] = '\0';
        length = j;

        if (length > max)
        {
            max = length;

            for (j = 0; word[j] != '\0'; j++)
                longest[j] = word[j];

            longest[j] = '\0';
        }

        if (str[i] != '\0')
            i++;
    }

    printf("%s", longest);

    return 0;
}