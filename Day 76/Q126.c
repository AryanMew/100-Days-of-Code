// Q126: Check if a file exists and display its contents.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;

    printf("Enter filename: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist!");
        return 1;
    }

    printf("File opened successfully.\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}