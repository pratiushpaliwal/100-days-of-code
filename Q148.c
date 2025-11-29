/* Q148: Take two structs as input and check if they are identical.

Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100];
    int roll_no;
    int marks;
} Student;

int main() {
    Student s1, s2;

    printf("Student 1: ");
    scanf("%s", s1.name);
    scanf("%d", &s1.roll_no);
    scanf("%d", &s1.marks);

    printf("Student 2: ");
    scanf("%s", s2.name);
    scanf("%d", &s2.roll_no);
    scanf("%d", &s2.marks);

    if (strcmp(s1.name, s2.name) != 0) {
        printf("Not Same");
        return 0;
    }
    if (s1.roll_no != s2.roll_no) {
        printf("Not Same");
        return 0;
    }
    if (s1.marks != s2.marks) { 
        printf("Not Same");
        return 0;
    }

    printf("Same");

    return 0;
}