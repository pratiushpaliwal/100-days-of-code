//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>
#include <string.h>

int palindrome(int len, char str[len]) {
    for (int i = 0; i < len; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int isPalindrome = palindrome(len, str);
    if (isPalindrome) {
        printf("Palindrome\n");
    }else {
        printf("Not a Palindrome\n");
    }

    return 0;
}
