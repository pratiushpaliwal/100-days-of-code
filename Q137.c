/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>

typedef enum {
    ADMIN,
    USER,
    GUEST
} USER_ROLES;

int main() {
    char input[100];
    scanf("%s", &input);

    USER_ROLES role;

    if (strcmp (input, "ADMIN") == 0) role = ADMIN;
    else if (strcmp(input, "USER") == 0) role = USER;
    else if (strcmp(input, "GUEST") == 0) role = GUEST;
    else {
        printf("Invalid input!");
        return 0;
    }

    switch (role) {
        case ADMIN:
            printf("Welcome Admin!");
            break;
        
        case USER:
            printf("Welcome User!");
            break;
        case GUEST:
            printf("Welcome Guest!");
            break;
        default:
            printf("Invalid input!");
    }

    return 0;
}