/* Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>

typedef struct Student_Record {
    char name[100];
    int roll_no;
    int marks;
} student;
int main() {
    student s[3];
    
    printf ("3 students: ");
    for (int i=0 ; i<3 ; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%d", &s[i].marks);
    }
    int max_marks = s[0].marks;
    int j = 0;

    for (int i=1; i<3 ; i++) {
        if (s[i].marks > max_marks) {
            max_marks = s[i].marks;
            j=i;
        }
    }
    printf("Top Student: %s | Roll: %d | Marks: %d",s[j].name, s[j].roll_no, s[j].marks);
    
    return 0;
}