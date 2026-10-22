// Q120: Convert a string to sentence case by capitalizing the first letter of each word.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int newWord = 1;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            newWord = 1;
        } else {
            if (newWord) {
                str[i] = toupper((unsigned char)str[i]);
                newWord = 0;
            } else {
                str[i] = tolower((unsigned char)str[i]);
            }
        }
    }

    printf("%s", str);

    return 0;
}