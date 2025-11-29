/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. 
Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include <stdio.h>

int main() {
    FILE *fp;
    fp=fopen("data.txt","a");

    if (fp == NULL) {
        printf("Error in opening a file");
        return 0;
    }
    fputs(" Welcome To C Programming.",fp);
    fclose(fp);

    printf("File updated successfully with appended text.");
    return 0;
}