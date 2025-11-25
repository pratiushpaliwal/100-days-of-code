//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int alphabet[26] = {0};
    char key = '\0';
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' ) {
            if (alphabet[str[i] - 'a'] == 1) {
                key = str[i];
                break;
            }else {
                alphabet[str[i] - 'a'] = 1;
            }
        }
    }
    if (key != '\0') {
        printf("%c", key);
    } else {
        printf("No repeating character found");
    }

    return 0;
}
