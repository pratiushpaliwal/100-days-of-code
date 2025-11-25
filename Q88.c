//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%[^\n]", str);
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
    printf("%s", str);
    return 0;
}