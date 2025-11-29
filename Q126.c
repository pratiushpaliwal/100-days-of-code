/*Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. 
If the file pointer is NULL, print an error message; otherwise, read and display its content.

Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/

#include <stdio.h>

int main() {
    FILE *fp;
    char file[100];
    printf("Enter file name: ");
    scanf("%s",file);

    fp=fopen(file,"r");

    if (fp == NULL) {
        printf("Error! File does not exist!");
        return 0;
    }
    char lines[100];

    printf("File opened successfully.\n");

    while (fgets(lines,100,fp) != NULL) {
        printf("%s",lines);
    }
    fclose(fp);

    return 0;
}