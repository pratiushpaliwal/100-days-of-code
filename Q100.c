//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%[^\n]", str);
    int first = 1;
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {

            if (!first) {
                printf(",");
            }
            first = 0;


            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
        }
    }
    return 0;
}
