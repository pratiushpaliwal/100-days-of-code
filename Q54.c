//Q54: Write a program to print the following pattern:

/*

*

***

*****
*******
***

*

Pattern with layers of stars as shown.

*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= (2*i) - 1; j++) {
            printf("*");
        }
        printf("\n");
        if (i <= 2) {
            printf("\n");
        }

    }
    for (int i = 2; i >= 1; i--) {
        for (int j = 1; j <= (2*i) - 1; j++) {
            printf("*");
        }
        printf("\n");
        if (i==2) {
            printf("\n");
        }
    }
    return 0;
}