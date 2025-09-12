/*
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    if (scanf("%c", &ch) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isupper(ch)) {
        printf("\nResult: '%c' is an uppercase alphabet.\n", ch);
    } else if (islower(ch)) {
        printf("\nResult: '%c' is a lowercase alphabet.\n", ch);
    } else if (isdigit(ch)) {
        printf("\nResult: '%c' is a digit.\n", ch);
    } else {
        printf("\nResult: '%c' is a special character.\n", ch);
    }

    return 0;
}