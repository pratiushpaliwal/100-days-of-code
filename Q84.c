//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    for (int k = 0; k < strlen(str); k++) {
        str[k] = str[k] - 32;
    }
    printf("%s\n", str);
    return 0;
}
