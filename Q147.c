/* Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

typedef struct {
    char name[100];
    int id;
    float salary;
} Employee;

int main() {
    Employee emp, read_data;
    FILE *fp;

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    fp = fopen("Employee.bin", "wb");
    if (fp == NULL) {
        perror("Error");
        return 0;
    }
    fwrite(&emp, sizeof(Employee), 1, fp);
    fclose (fp);
    printf("Data entered successfully in a binary file.\n");

    fp = fopen("Employee.bin", "rb");
    if (fp == NULL) {
        perror("Error");
        return 0;
    }
    fread(&read_data, sizeof(Employee), 1, fp);
    fclose(fp);

    printf("Now Data entering from file...\n");

    printf("Employee Name: %s\n", read_data.name);
    printf("Employee ID: %d\n", read_data.id);
    printf("Employee Salary: %.2f\n", read_data.salary);

    return 0;
}




