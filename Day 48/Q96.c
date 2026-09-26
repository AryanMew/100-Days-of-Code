// Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>

int main(void)
{
    char str[100];
    int i, start = 0, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            end = i - 1;

            while (end >= start)
            {
                printf("%c", str[end]);
                end--;
            }

            if (str[i] == ' ')
            {
                printf(" ");
                start = i + 1;
            }
            else
                break;
        }
    }

    return 0;
}