//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%[^\n]", str);
    int len = strlen(str);

    int lastPos = -1;
    for (int j = len -1 ; j >= 0; j--) {
        if (str[j] == ' ') {
            lastPos = j;
            break;
        }
    }

    printf("%c.", toupper(str[0]));
    for (int i = 1; i < len; i++) {
        if ((str[i] == ' ' || str[i] == '\0') && i < lastPos ) {
            printf("%c.", toupper(str[i + 1]));
        }
    }
    for (int i = lastPos ; i < len; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}
