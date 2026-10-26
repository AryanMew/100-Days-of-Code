// Q124: Copy content from a source file to a destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    FILE *source, *destination;
    char src[100], dest[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", src);

    printf("Enter destination filename: ");
    scanf("%99s", dest);

    source = fopen(src, "r");

    if (source == NULL) {
        printf("Error opening source file!");
        return 1;
    }

    destination = fopen(dest, "w");

    if (destination == NULL) {
        printf("Error creating destination file!");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s", dest);

    return 0;
}