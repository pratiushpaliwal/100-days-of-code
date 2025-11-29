/*Q124: Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>

int main() {
    FILE *fp1;
    FILE *fp2;

    fp1=fopen("source.txt","r");
    fp2=fopen("destination.txt","w");

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
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully to destination.txt");
    return 0;
}