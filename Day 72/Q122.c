// Q122: Read and display all lines from info.txt using fgets().

#include <stdio.h>

int main() {
    FILE *fp;
    char str[1000];

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}