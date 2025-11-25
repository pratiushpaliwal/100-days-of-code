//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main() {
    char str[100];
    scanf("%[^\n]", str);
    int len = strlen(str);

    printf("%c.", toupper(str[0]));

    for (int i = 1; i < len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            printf("%c.", toupper(str[i + 1]));
        }
    }

    return 0;
}
