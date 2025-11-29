/* Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. 
Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100],t[100];
    printf("Enter the word in s string: ");
    scanf("%s",s);
    printf("Enter the word in t string: ");
    scanf("%s",t);

    if (strlen(s) == strlen(t)) {
        for (int i=0 ; i<strlen(s) ; i++) {
            int found_letter=0;
            for (int j=0 ; j<strlen(t) ; j++) {
                if (s[i]==t[j]) {
                    s[i]=' '; //Replace that alpabet with space in 2 string to check frequency of that alphabte
                    t[j]=' ';
                   found_letter=1;
                   break;
                }
            } if (!found_letter) {
                printf("Not Anagram\n");
                return 0;
            }
        } printf("Anagram\n");
    }

    else printf("Not Anagram\n");
    return 0;
} 