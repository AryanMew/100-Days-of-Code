// Q93: Check if two strings are anagrams of each other.

#include <stdio.h>

int main(void)
{
    char a[100], b[100];
    int i, count[26] = {0}, flag = 1;

    scanf("%s %s", a, b);

    for (i = 0; a[i] != '\0'; i++)
        count[a[i] - 'a']++;

    for (i = 0; b[i] != '\0'; i++)
        count[b[i] - 'a']--;

    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}