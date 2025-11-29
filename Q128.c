/*Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include <stdio.h>

int main() {
    FILE *fp;
    fp=fopen("text.txt","r");
    if (fp == NULL) {
        printf("Error in opening a file.");
        return 0;
    }
    char ch;
    char vowels[10]={'a','e','i','o','u','A','E','I','O','U'};
    int count_vowel=0 , count_consonant=0;
    while ((ch = fgetc(fp)) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >='A' && ch<='Z')) {
            int temp = count_vowel; // create a temporary variable that determine change in count_vowel.
            for (int i=0 ; i<10 ; i++) {
                if (ch == vowels[i]) {
                    count_vowel++;  // If count_vowel increments then temp is not equal to count_vowel
                    break;
                }
            } if (temp == count_vowel) {   //If this both are equal means count_vowel is not incremented i.e ch is a consonant
                count_consonant++;
            }
        }
    }
    fclose(fp);
    printf("Vowels: %d\n",count_vowel);
    printf("Consonants: %d",count_consonant);
    return 0;
}