/* Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>
#include <string.h>

typedef enum {
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
} Month_name;

int main() {
    char input[3];
    scanf("%s",&input);

    Month_name month;

    if (strcmp (input, "JAN") == 0) month = JAN;
    else if (strcmp(input, "FEB") == 0) month = FEB;
    else if (strcmp(input, "MAR") == 0) month = MAR;
    else if (strcmp(input, "APR") == 0) month = APR;
    else if (strcmp(input, "MAY") == 0) month = MAY;
    else if (strcmp(input, "JUN") == 0) month = JUN;
    else if (strcmp(input, "JUL") == 0) month = JUL;
    else if (strcmp(input, "AUG") == 0) month = AUG;
    else if (strcmp(input, "SEP") == 0) month = SEP;
    else if (strcmp(input, "OCT") == 0) month = OCT;
    else if (strcmp(input, "NOV") == 0) month = NOV;
    else if (strcmp(input, "DEC") == 0) month = DEC;
    else {
        printf("Invalid input!");
        return 0;
    }
    
    switch (month) {
        case JAN:
            printf("31 Days");
            break;
        
        case FEB:
            printf("28 or 29 Days");
            break;
        case MAR:
            printf("31 Days");
            break;
        case APR:
            printf("30 Days");
            break;
        case MAY:
            printf("31 Days");
            break;
        case JUN:
            printf("30 Days");
            break;
        case JUL:
            printf("31 Days");
            break;
        case AUG:
            printf("31 Days");
            break;
        case SEP:
            printf("30 Days");
            break;
        case OCT:
            printf("31 Days");
            break;
        case NOV:
            printf("30 Days");
            break;
        case DEC:
            printf("31 Days");
            break;
        default:
            printf("Invalid input!");
    }
    return 0;
}
