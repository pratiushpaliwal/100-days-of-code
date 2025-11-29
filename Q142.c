/* Q142: Store details of 5 students in an array of structures and print all.

Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>

typedef struct Student_Record {
    char name[100];
    int roll_no;
    int marks;
} student;
int main() {
    student s[5];

    // For input
    for (int i=0 ; i<5 ; i++) {
        printf("Name: ");
        scanf("%s", s[i].name);
        
        printf("Roll: ");
        scanf("%d", &s[i].roll_no);
        
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    // For Output
    printf("Name\t Roll\t Marks\n");
    for (int i=0 ; i<5 ; i++) {
        printf("%s\t %d\t  %d\n", s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}