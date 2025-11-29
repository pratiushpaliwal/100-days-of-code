/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>
#include <string.h>

typedef enum {
    RED,
    YELLOW,
    GREEN
} Traffic_lights;

int main() {
    char input[100];
    scanf("%s",&input);

    Traffic_lights light;

    if (strcmp (input, "RED") == 0) light = RED;
    else if (strcmp(input, "YELLOW") == 0) light = YELLOW;
    else if (strcmp(input, "GREEN") == 0) light = GREEN;
    else {
        printf("Invalid input!");
        return 0;
    }

    switch (light) {
        case RED:
            printf("Stop");
            break;
        
        case YELLOW:
            printf("Wait");
            break;
        case GREEN:
            printf("Go");
            break;
        default:
            printf("Invalid input!");
    }
    return 0;
}
