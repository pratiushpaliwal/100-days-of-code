//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    for (int j = len; j >= 0; j--) {
        if (str[j] != '\0') {
            printf("%c", str[j]);
        }
    }
    return 0;
}
