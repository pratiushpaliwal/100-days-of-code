//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);

    char key;
    scanf(" %c", &key);

    int count = 0;

    for (int i = 0; i < len; i++) {
        if (key == str[i]) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
