/* Q146: Create Employee structure with nested Date structure for joining date and print details.

Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/

#include <stdio.h>

typedef struct {
    int date, month, year;
}Date;

typedef struct {
    char name[100];
    int ID;
    Date join_date;
} Employee;

int main() {
    Employee E;

    printf("Employee: ");
    scanf("%s", E.name);

    printf("ID: ");
    scanf("%d", &E.ID);

    printf("Joining Date: ");
    scanf("%d %d %d", &E.join_date.date, &E.join_date.month, &E.join_date.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d", E.name, E.ID, E.join_date.date, E.join_date.month, E.join_date.year);

    return 0;
}


