// Q121: Create info.txt and write the user's name and age using fprintf().

#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    printf("Enter name: ");
    scanf("%99s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error creating file!");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}