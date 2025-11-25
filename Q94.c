//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longestWord[100];
    int maxLength = 0;
    int currentLength = 0;
    int startIndex = 0;
    scanf("%[^\n]", str);

    str[strcspn(str, "\n")] = 0;
    int len = strlen(str);

    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                strncpy(longestWord, str + startIndex, maxLength);
                longestWord[maxLength] = '\0';
            }
            currentLength = 0;
            startIndex = i + 1;
        } else {
            currentLength++;
        }
    }

    printf("%s", longestWord);


    return 0;
}
