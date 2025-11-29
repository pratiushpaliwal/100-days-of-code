/*  Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>
#include <string.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} OPERATION;

int main() {
    char input[100];
    scanf("%s",&input);

    OPERATION operation;

    if (strcmp (input, "SUCCESS") == 0) operation = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) operation = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0) operation = TIMEOUT;
    else {
        printf("Invalid input!");
        return 0;
    }

    switch (operation) {
        case SUCCESS:
            printf("Operaiton is successful");
            break;
        
        case FAILURE:
            printf("Operation failed");
            break;
        case TIMEOUT:
            printf("Timeout");
            break;
        default:
            printf("Invalid input!");
    }
    return 0;
}
