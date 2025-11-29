/*Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/

#include <stdio.h>

enum Days{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
int main() {
    printf("Sunday = %d\n", Sunday);
    printf("Monday = %d\n", Monday);
    printf("Tuesday = %d\n", Tuesday);
    printf("Wednesday = %d\n", Wednesday);
    printf("Thursday = %d\n", Thursday);
    printf("Friday = %d\n", Friday);
    printf("Saturday = %d\n", Saturday);
    
    return 0;
}
