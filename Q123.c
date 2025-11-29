/*Q123: Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100], ch;
    int count_ch = 0, count_words = 0, count_lines = 0;
    int inWord = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        count_ch++;

        if (ch == '\n')
            count_lines++;

        // Check if current character is a separator
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else {
            // We found a character that starts or continues a word
            if (inWord == 0) {
                count_words++;
                inWord = 1;
            }
        }
    }

    fclose(fp);

    // If file has content and doesn't end with newline, count last line
    if (count_ch > 0 && ch != '\n')
        count_lines++;

    printf("Characters: %d\n", count_ch);
    printf("Words: %d\n", count_words);
    printf("Lines: %d\n", count_lines);

    return 0;
}
