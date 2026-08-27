// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel");
    } else {
        printf("Consonant");
    }

    return 0;
}