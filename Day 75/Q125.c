// Q125: Append a new line of text to an existing file without overwriting its content.

#include <stdio.h>

int main() {
    FILE *fp;
    char str[1000];

    fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(str, sizeof(str), stdin);

    fprintf(fp, "\n%s", str);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}