/*Q121: Write a C program that creates a text file named info.txt in write mode. 
The program should take the user’s name and age as input, and write them to the file using fprintf(). 
After writing, display a message confirming that the data was successfully saved.

Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/

#include <stdio.h>

int main() {
    FILE *fptr;
    char Name[50];
    int  Age;

    fptr = fopen("info.txt","w");
    if (fptr == NULL) {
        printf("Error Opening File! \n");
        return 1;
    }
    printf("Enter name: ");
    scanf("%s",Name);
    printf("Enter age: ");
    scanf("%d",&Age);

    fprintf(fptr,"Name: %s\nAge: %d\n",Name,Age);
    fclose(fptr);

    printf("File created successfully! Data written to info.txt");
    return 0;
}
