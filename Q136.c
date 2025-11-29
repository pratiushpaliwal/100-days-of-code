/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>

typedef enum {
    ADD,
    SUBTRACT,
    MULTIPLY
} MENU_CHOICES;

int main() {
    char input[100];
    int num1, num2;
    
    scanf("%s %d %d", &input, &num1, &num2);

    MENU_CHOICES choice;

    if (strcmp (input, "ADD") == 0) choice = ADD;
    else if (strcmp(input, "SUBTRACT") == 0) choice = SUBTRACT;
    else if (strcmp(input, "MULTIPLY") == 0) choice = MULTIPLY;
    else {
        printf("Invalid input!");
        return 0;
    }

    switch (choice) {
        case ADD:
            printf("%d", num1 + num2);
            break;
        
        case SUBTRACT:
            printf("%d", num1 - num2);
            break;
        case MULTIPLY:
            printf("%d", num1 * num2);
            break;
        default:
            printf("Invalid input!");
    }

    return 0;
}