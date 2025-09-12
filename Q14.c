/*
Write a program to input a character and check whether it is a vowel or consonant using if–else.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (!isalpha(ch)) {
        printf("\nResult: Please enter an alphabet.\n");
    } else {
        char lower_ch = tolower(ch);
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
            printf("\nResult: %c is a vowel.\n", ch);
        } else {
            printf("\nResult: %c is a consonant.\n", ch);
        }
    }

    return 0;
}