/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp1;
    FILE *fp2;

    fp1=fopen("input.txt","r");
    fp2=fopen("output.txt","w");

    if (fp1 == NULL) {
        printf("Error in Opening a source file");
        return 0;
    }
    if (fp2 == NULL) {
        printf("Error in Opening a destination file");
        return 0;
    }
    char ch;
    while ((ch = fgetc(fp1)) != EOF) {
        char upper_char = toupper(ch);
        fputc(upper_char,fp2);
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}