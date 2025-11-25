//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    printf("%d\n", len);
    return 0;
}
