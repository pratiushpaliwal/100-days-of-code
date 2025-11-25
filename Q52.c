/*
 Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= (2*i) - 1; j++) {
            printf("*\n");
        }
        printf("\n");
    }
    for (int i = 1; i <= 3; i++) {
        for (int j = 3; j >= (2*i) - 1; j--) {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;

}