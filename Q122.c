/*Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). 
The program should print all the lines to the console until EOF (end of file) is reached.

Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include <stdio.h>

int main() {
    FILE *fptr;
    char lines[100];

    fptr = fopen("info.txt","r");
    if (fptr == NULL) {
        perror("Error");
        return 1;
    }

    while (fgets(lines, 100, fptr) != NULL) {
        printf("%s", lines);
    }
    fclose(fptr);
    return 0;
}
