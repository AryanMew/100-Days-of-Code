// Q127: Convert lowercase letters in input.txt to uppercase and save to output.txt.

#include <stdio.h>

int main() {
    FILE *input, *output;
    int ch;

    input = fopen("input.txt", "r");

    if (input == NULL) {
        printf("Error opening input file!");
        return 1;
    }

    output = fopen("output.txt", "w");

    if (output == NULL) {
        printf("Error creating output file!");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }

        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("File converted successfully!");

    return 0;
}