//Q53: Write a program to print the following pattern:
/*

*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= (2*i)-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++) {
        for (int j = 7; j >= (2*i)-1; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}