// Q114: Find the length of the longest substring without repeating characters.

#include <stdio.h>

int main() {
    char s[1000];
    int last[256], start = 0, maxLen = 0;

    printf("Enter string: ");
    scanf("%999s", s);

    for (int i = 0; i < 256; i++) {
        last[i] = -1;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];

        if (last[ch] >= start) {
            start = last[ch] + 1;
        }

        last[ch] = i;

        if (i - start + 1 > maxLen) {
            maxLen = i - start + 1;
        }
    }

    printf("%d", maxLen);

    return 0;
}